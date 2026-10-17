// Copyright 2026 Locodrome. All Rights Reserved.

#include "LocodromeWidgetEditorLibrary.h"

#include "Editor.h"
#include "Subsystems/AssetEditorSubsystem.h"

#include "WidgetBlueprint.h"
#include "WidgetBlueprintEditor.h"
#include "WidgetBlueprintEditorUtils.h"
#include "WidgetReference.h"

#include "Components/Widget.h"
#include "WidgetBlueprintOperationUtils.h"
#include "UObject/UnrealType.h"
#include "Blueprint/WidgetTree.h"


// ------------------------------------------------------------
// Find the most recently active Widget Blueprint editor
// ------------------------------------------------------------

static FWidgetBlueprintEditor* GetActiveWidgetBlueprintEditor()
{
    if (!GEditor)
    {
        return nullptr;
    }

    UAssetEditorSubsystem* AssetEditorSubsystem =
        GEditor->GetEditorSubsystem<UAssetEditorSubsystem>();

    if (!AssetEditorSubsystem)
    {
        return nullptr;
    }

    const TArray<UObject*> EditedAssets =
        AssetEditorSubsystem->GetAllEditedAssets();

    FWidgetBlueprintEditor* BestEditor = nullptr;
    double BestActivationTime = -DBL_MAX;

    for (UObject* Asset : EditedAssets)
    {
        UWidgetBlueprint* WidgetBlueprint =
            Cast<UWidgetBlueprint>(Asset);

        if (!WidgetBlueprint)
        {
            continue;
        }

        IAssetEditorInstance* EditorInstance =
            AssetEditorSubsystem->FindEditorForAsset(
                WidgetBlueprint,
                false
            );

        if (!EditorInstance)
        {
            continue;
        }

        const double ActivationTime =
            EditorInstance->GetLastActivationTime();

        if (ActivationTime > BestActivationTime)
        {
            BestActivationTime = ActivationTime;

            BestEditor =
                static_cast<FWidgetBlueprintEditor*>(
                    EditorInstance
                    );
        }
    }

    return BestEditor;
}


// ------------------------------------------------------------
// Currently active Widget Blueprint
// ------------------------------------------------------------

UWidgetBlueprint*
ULocodromeWidgetEditorLibrary::GetActiveWidgetBlueprint()
{
    FWidgetBlueprintEditor* WidgetEditor =
        GetActiveWidgetBlueprintEditor();

    if (!WidgetEditor)
    {
        return nullptr;
    }

    return WidgetEditor->GetWidgetBlueprintObj();
}


// ------------------------------------------------------------
// Widgets selected in the Designer
// ------------------------------------------------------------

TArray<UWidget*>
ULocodromeWidgetEditorLibrary::GetSelectedDesignerWidgets()
{
    TArray<UWidget*> Result;

    FWidgetBlueprintEditor* WidgetEditor =
        GetActiveWidgetBlueprintEditor();

    if (!WidgetEditor)
    {
        return Result;
    }

    const TSet<FWidgetReference>& SelectedWidgets =
        WidgetEditor->GetSelectedWidgets();

    for (const FWidgetReference& WidgetReference : SelectedWidgets)
    {
        UWidget* TemplateWidget =
            WidgetReference.GetTemplate();

        if (TemplateWidget)
        {
            Result.Add(TemplateWidget);
        }
    }

    return Result;
}


// ------------------------------------------------------------
// Duplicate currently selected Designer widgets
// ------------------------------------------------------------

TArray<UWidget*>
ULocodromeWidgetEditorLibrary::DuplicateSelectedDesignerWidgets()
{
    TArray<UWidget*> Result;

    FWidgetBlueprintEditor* WidgetEditorRaw =
        GetActiveWidgetBlueprintEditor();

    if (!WidgetEditorRaw)
    {
        return Result;
    }

    UWidgetBlueprint* WidgetBlueprint =
        WidgetEditorRaw->GetWidgetBlueprintObj();

    if (!WidgetBlueprint)
    {
        return Result;
    }

    const TSet<FWidgetReference>& SelectedWidgets =
        WidgetEditorRaw->GetSelectedWidgets();

    if (SelectedWidgets.Num() == 0)
    {
        return Result;
    }

    TSharedRef<FWidgetBlueprintEditor> WidgetEditor =
        StaticCastSharedRef<FWidgetBlueprintEditor>(
            WidgetEditorRaw->AsShared()
        );

    Result =
        FWidgetBlueprintEditorUtils::DuplicateWidgets(
            WidgetEditor,
            WidgetBlueprint,
            SelectedWidgets
        );

    return Result;
}

// ------------------------------------------------------------
// Rename Source Widget
// ------------------------------------------------------------

bool ULocodromeWidgetEditorLibrary::RenameSourceWidget(
    UWidgetBlueprint* WidgetBlueprint,
    UWidget* Widget,
    const FString& NewName
)
{
    if (!WidgetBlueprint || !Widget || NewName.IsEmpty())
    {
        return false;
    }

    return FWidgetBlueprintOperationUtils::RenameWidget(
        WidgetBlueprint,
        Widget,
        NewName
    );
}

FString ULocodromeWidgetEditorLibrary::GetSourceWidgetDisplayLabel(
    UWidget* Widget
)
{
    if (!Widget)
    {
        return FString();
    }

    return Widget->GetDisplayLabel();
}

// ============================================================
// Property lookup helper
// ============================================================

static FProperty* FindWidgetProperty(
    UObject* Object,
    const FString& RequestedName
)
{
    if (!Object || RequestedName.IsEmpty())
    {
        return nullptr;
    }

    UClass* ObjectClass = Object->GetClass();

    if (!ObjectClass)
    {
        return nullptr;
    }

    // Normalize for friendly comparisons.
    FString NormalizedRequested = RequestedName;
    NormalizedRequested.ReplaceInline(TEXT(" "), TEXT(""));
    NormalizedRequested.ReplaceInline(TEXT("_"), TEXT(""));
    NormalizedRequested.ToLowerInline();

    for (
        TFieldIterator<FProperty> PropertyIt(
            ObjectClass,
            EFieldIteratorFlags::IncludeSuper
        );
        PropertyIt;
        ++PropertyIt
        )
    {
        FProperty* Property = *PropertyIt;

        if (!Property)
        {
            continue;
        }

        const FString InternalName =
            Property->GetName();

        const FString DisplayName =
            Property->GetDisplayNameText().ToString();


        // Exact internal name
        if (
            InternalName.Equals(
                RequestedName,
                ESearchCase::IgnoreCase
            )
            )
        {
            return Property;
        }


        // Exact display name
        if (
            DisplayName.Equals(
                RequestedName,
                ESearchCase::IgnoreCase
            )
            )
        {
            return Property;
        }


        // Normalized comparison.
        //
        // "Controls To Select"
        // "ControlsToSelect"
        // "controls_to_select"
        //
        // all compare equivalently.
        FString NormalizedInternal = InternalName;
        NormalizedInternal.ReplaceInline(TEXT(" "), TEXT(""));
        NormalizedInternal.ReplaceInline(TEXT("_"), TEXT(""));
        NormalizedInternal.ToLowerInline();

        if (NormalizedInternal == NormalizedRequested)
        {
            return Property;
        }

        FString NormalizedDisplay = DisplayName;
        NormalizedDisplay.ReplaceInline(TEXT(" "), TEXT(""));
        NormalizedDisplay.ReplaceInline(TEXT("_"), TEXT(""));
        NormalizedDisplay.ToLowerInline();

        if (NormalizedDisplay == NormalizedRequested)
        {
            return Property;
        }
    }

    return nullptr;
}


// ============================================================
// Single FName
// ============================================================

bool ULocodromeWidgetEditorLibrary::GetWidgetNameProperty(
    UObject* Object,
    const FString& PropertyName,
    FName& Value
)
{
    if (!Object)
    {
        return false;
    }

    FProperty* Property =
        FindWidgetProperty(
            Object,
            PropertyName
        );

    FNameProperty* NameProperty =
        CastField<FNameProperty>(Property);

    if (!NameProperty)
    {
        return false;
    }

    void* ValuePtr =
        NameProperty->ContainerPtrToValuePtr<void>(
            Object
        );

    if (!ValuePtr)
    {
        return false;
    }

    Value =
        NameProperty->GetPropertyValue(
            ValuePtr
        );

    return true;
}


bool ULocodromeWidgetEditorLibrary::SetWidgetNameProperty(
    UObject* Object,
    const FString& PropertyName,
    FName Value
)
{
    if (!Object)
    {
        return false;
    }

    FProperty* Property =
        FindWidgetProperty(
            Object,
            PropertyName
        );

    FNameProperty* NameProperty =
        CastField<FNameProperty>(Property);

    if (!NameProperty)
    {
        return false;
    }

    Object->Modify();
    Object->PreEditChange(Property);

    void* ValuePtr =
        NameProperty->ContainerPtrToValuePtr<void>(
            Object
        );

    if (!ValuePtr)
    {
        return false;
    }

    NameProperty->SetPropertyValue(
        ValuePtr,
        Value
    );

    FPropertyChangedEvent ChangedEvent(
        Property,
        EPropertyChangeType::ValueSet
    );

    Object->PostEditChangeProperty(
        ChangedEvent
    );

    return true;
}


// ============================================================
// TArray<FName>
// ============================================================

bool ULocodromeWidgetEditorLibrary::GetWidgetNameArrayProperty(
    UObject* Object,
    const FString& PropertyName,
    TArray<FName>& Values
)
{
    Values.Reset();

    if (!Object)
    {
        return false;
    }

    FProperty* Property =
        FindWidgetProperty(
            Object,
            PropertyName
        );

    FArrayProperty* ArrayProperty =
        CastField<FArrayProperty>(Property);

    if (!ArrayProperty)
    {
        return false;
    }

    FNameProperty* InnerNameProperty =
        CastField<FNameProperty>(
            ArrayProperty->Inner
        );

    if (!InnerNameProperty)
    {
        return false;
    }

    void* ArrayPtr =
        ArrayProperty->ContainerPtrToValuePtr<void>(
            Object
        );

    if (!ArrayPtr)
    {
        return false;
    }

    FScriptArrayHelper ArrayHelper(
        ArrayProperty,
        ArrayPtr
    );

    Values.Reserve(
        ArrayHelper.Num()
    );

    for (
        int32 Index = 0;
        Index < ArrayHelper.Num();
        ++Index
        )
    {
        void* ElementPtr =
            ArrayHelper.GetRawPtr(Index);

        const FName ElementValue =
            InnerNameProperty->GetPropertyValue(
                ElementPtr
            );

        Values.Add(
            ElementValue
        );
    }

    return true;
}


bool ULocodromeWidgetEditorLibrary::SetWidgetNameArrayProperty(
    UObject* Object,
    const FString& PropertyName,
    const TArray<FName>& Values
)
{
    if (!Object)
    {
        return false;
    }

    FProperty* Property =
        FindWidgetProperty(
            Object,
            PropertyName
        );

    FArrayProperty* ArrayProperty =
        CastField<FArrayProperty>(Property);

    if (!ArrayProperty)
    {
        return false;
    }

    FNameProperty* InnerNameProperty =
        CastField<FNameProperty>(
            ArrayProperty->Inner
        );

    if (!InnerNameProperty)
    {
        return false;
    }

    Object->Modify();
    Object->PreEditChange(Property);

    void* ArrayPtr =
        ArrayProperty->ContainerPtrToValuePtr<void>(
            Object
        );

    if (!ArrayPtr)
    {
        return false;
    }

    FScriptArrayHelper ArrayHelper(
        ArrayProperty,
        ArrayPtr
    );

    ArrayHelper.Resize(
        Values.Num()
    );

    for (
        int32 Index = 0;
        Index < Values.Num();
        ++Index
        )
    {
        void* ElementPtr =
            ArrayHelper.GetRawPtr(Index);

        InnerNameProperty->SetPropertyValue(
            ElementPtr,
            Values[Index]
        );
    }

    FPropertyChangedEvent ChangedEvent(
        Property,
        EPropertyChangeType::ValueSet
    );

    Object->PostEditChangeProperty(
        ChangedEvent
    );

    return true;
}

TArray<FString>
ULocodromeWidgetEditorLibrary::GetWidgetPropertyDebugInfo(
    UObject* Object
)
{
    TArray<FString> Result;

    if (!Object)
    {
        return Result;
    }

    UClass* ObjectClass = Object->GetClass();

    if (!ObjectClass)
    {
        return Result;
    }

    for (
        TFieldIterator<FProperty> PropertyIt(
            ObjectClass,
            EFieldIteratorFlags::IncludeSuper
        );
        PropertyIt;
        ++PropertyIt
        )
    {
        FProperty* Property = *PropertyIt;

        if (!Property)
        {
            continue;
        }

        const FString InternalName =
            Property->GetName();

        const FString DisplayName =
            Property->GetDisplayNameText().ToString();

        const FString TypeName =
            Property->GetClass()->GetName();

        Result.Add(
            FString::Printf(
                TEXT(
                    "Internal='%s' | Display='%s' | Type='%s'"
                ),
                *InternalName,
                *DisplayName,
                *TypeName
            )
        );
    }

    return Result;
}

bool ULocodromeWidgetEditorLibrary::MirrorWidgetEnumSideProperty(
    UObject* Object,
    const FString& PropertyName
)
{
    if (!Object)
    {
        return false;
    }

    FProperty* Property =
        FindWidgetProperty(
            Object,
            PropertyName
        );

    if (!Property)
    {
        return false;
    }


    // ========================================================
    // GET ENUM + CURRENT VALUE
    // ========================================================

    UEnum* Enum = nullptr;
    int64 CurrentValue = 0;

    FEnumProperty* EnumProperty =
        CastField<FEnumProperty>(Property);

    FByteProperty* ByteProperty =
        CastField<FByteProperty>(Property);


    if (EnumProperty)
    {
        Enum = EnumProperty->GetEnum();

        if (!Enum)
        {
            return false;
        }

        FNumericProperty* UnderlyingProperty =
            EnumProperty->GetUnderlyingProperty();

        if (!UnderlyingProperty)
        {
            return false;
        }

        void* ValuePtr =
            EnumProperty->ContainerPtrToValuePtr<void>(
                Object
            );

        if (!ValuePtr)
        {
            return false;
        }

        CurrentValue =
            UnderlyingProperty->GetSignedIntPropertyValue(
                ValuePtr
            );
    }
    else if (ByteProperty)
    {
        Enum = ByteProperty->Enum;

        if (!Enum)
        {
            return false;
        }

        void* ValuePtr =
            ByteProperty->ContainerPtrToValuePtr<void>(
                Object
            );

        if (!ValuePtr)
        {
            return false;
        }

        CurrentValue =
            ByteProperty->GetPropertyValue(
                ValuePtr
            );
    }
    else
    {
        return false;
    }


    // ========================================================
    // GET CURRENT ENUM NAMES
    // ========================================================

    const FString CurrentDisplayName =
        Enum->GetDisplayNameTextByValue(
            CurrentValue
        ).ToString();

    const FString CurrentInternalName =
        Enum->GetNameStringByValue(
            CurrentValue
        );


    FString TargetDisplayName =
        CurrentDisplayName;

    FString TargetInternalName =
        CurrentInternalName;


    bool bDisplayChanged = false;
    bool bInternalChanged = false;


    // ========================================================
    // MIRROR DISPLAY NAME
    // ========================================================

    if (
        CurrentDisplayName.Contains(
            TEXT("Right"),
            ESearchCase::IgnoreCase
        )
        )
    {
        TargetDisplayName =
            CurrentDisplayName.Replace(
                TEXT("Right"),
                TEXT("Left"),
                ESearchCase::IgnoreCase
            );

        bDisplayChanged = true;
    }
    else if (
        CurrentDisplayName.Contains(
            TEXT("Left"),
            ESearchCase::IgnoreCase
        )
        )
    {
        TargetDisplayName =
            CurrentDisplayName.Replace(
                TEXT("Left"),
                TEXT("Right"),
                ESearchCase::IgnoreCase
            );

        bDisplayChanged = true;
    }


    // ========================================================
    // MIRROR INTERNAL NAME
    //
    // Only use this for enums whose actual internal enum names
    // contain Left / Right.
    //
    // Blueprint enums often use names such as:
    //
    //     NewEnumerator0
    //     NewEnumerator1
    //
    // Those must NOT be used to match the mirrored value.
    // ========================================================

    if (
        CurrentInternalName.Contains(
            TEXT("Right"),
            ESearchCase::IgnoreCase
        )
        )
    {
        TargetInternalName =
            CurrentInternalName.Replace(
                TEXT("Right"),
                TEXT("Left"),
                ESearchCase::IgnoreCase
            );

        bInternalChanged = true;
    }
    else if (
        CurrentInternalName.Contains(
            TEXT("Left"),
            ESearchCase::IgnoreCase
        )
        )
    {
        TargetInternalName =
            CurrentInternalName.Replace(
                TEXT("Left"),
                TEXT("Right"),
                ESearchCase::IgnoreCase
            );

        bInternalChanged = true;
    }


    if (!bDisplayChanged && !bInternalChanged)
    {
        return false;
    }


    // ========================================================
    // FIND MIRRORED ENUM VALUE
    // ========================================================

    int64 TargetValue = INDEX_NONE;

    for (
        int32 Index = 0;
        Index < Enum->NumEnums();
        ++Index
        )
    {
        if (
            Enum->HasMetaData(
                TEXT("Hidden"),
                Index
            )
            )
        {
            continue;
        }


        const FString DisplayName =
            Enum->GetDisplayNameTextByIndex(
                Index
            ).ToString();

        const FString InternalName =
            Enum->GetNameStringByIndex(
                Index
            );


        const bool bDisplayMatch =
            bDisplayChanged
            &&
            DisplayName.Equals(
                TargetDisplayName,
                ESearchCase::IgnoreCase
            );


        const bool bInternalMatch =
            bInternalChanged
            &&
            InternalName.Equals(
                TargetInternalName,
                ESearchCase::IgnoreCase
            );


        if (bDisplayMatch || bInternalMatch)
        {
            TargetValue =
                Enum->GetValueByIndex(
                    Index
                );

            break;
        }
    }


    if (TargetValue == INDEX_NONE)
    {
        return false;
    }


    if (TargetValue == CurrentValue)
    {
        return false;
    }


    // ========================================================
    // WRITE VALUE
    // ========================================================

    Object->Modify();
    Object->PreEditChange(Property);


    if (EnumProperty)
    {
        void* ValuePtr =
            EnumProperty->ContainerPtrToValuePtr<void>(
                Object
            );

        FNumericProperty* UnderlyingProperty =
            EnumProperty->GetUnderlyingProperty();

        if (!ValuePtr || !UnderlyingProperty)
        {
            return false;
        }

        UnderlyingProperty->SetIntPropertyValue(
            ValuePtr,
            TargetValue
        );
    }
    else
    {
        void* ValuePtr =
            ByteProperty->ContainerPtrToValuePtr<void>(
                Object
            );

        if (!ValuePtr)
        {
            return false;
        }

        ByteProperty->SetPropertyValue(
            ValuePtr,
            static_cast<uint8>(TargetValue)
        );
    }


    FPropertyChangedEvent ChangedEvent(
        Property,
        EPropertyChangeType::ValueSet
    );

    Object->PostEditChangeProperty(
        ChangedEvent
    );


    UE_LOG(
        LogTemp,
        Log,
        TEXT(
            "[LCAT Mirror] Enum '%s': %s -> %s"
        ),
        *PropertyName,
        *CurrentDisplayName,
        *TargetDisplayName
    );


    return true;
}

FString
ULocodromeWidgetEditorLibrary::GetWidgetBytePropertyDebugInfo(
    UObject* Object,
    const FString& PropertyName
)
{
    if (!Object)
    {
        return TEXT("Object is null");
    }

    FProperty* Property =
        FindWidgetProperty(
            Object,
            PropertyName
        );

    if (!Property)
    {
        return TEXT("Property not found");
    }

    FByteProperty* ByteProperty =
        CastField<FByteProperty>(Property);

    if (!ByteProperty)
    {
        return FString::Printf(
            TEXT(
                "Property '%s' is %s, not ByteProperty"
            ),
            *Property->GetName(),
            *Property->GetClass()->GetName()
        );
    }

    void* ValuePtr =
        ByteProperty->ContainerPtrToValuePtr<void>(
            Object
        );

    if (!ValuePtr)
    {
        return TEXT("Could not get value pointer");
    }

    const uint8 CurrentValue =
        ByteProperty->GetPropertyValue(
            ValuePtr
        );

    FString EnumInfo = TEXT("NONE");

    if (ByteProperty->Enum)
    {
        EnumInfo = FString::Printf(
            TEXT(
                "%s | ValueName='%s' | Display='%s'"
            ),
            *ByteProperty->Enum->GetName(),
            *ByteProperty->Enum->GetNameStringByValue(
                CurrentValue
            ),
            *ByteProperty->Enum
            ->GetDisplayNameTextByValue(
                CurrentValue
            )
            .ToString()
        );
    }

    return FString::Printf(
        TEXT(
            "Property='%s' | Value=%d | Enum=%s"
        ),
        *Property->GetName(),
        CurrentValue,
        *EnumInfo
    );
}

// ============================================================
// GET WIDGET OBJECT PROPERTY
// ============================================================

UObject*
ULocodromeWidgetEditorLibrary::GetWidgetObjectProperty(
    UObject* Object,
    const FString& PropertyName
)
{
    if (!Object)
    {
        return nullptr;
    }

    FProperty* Property =
        FindWidgetProperty(
            Object,
            PropertyName
        );

    if (!Property)
    {
        return nullptr;
    }

    FObjectPropertyBase* ObjectProperty =
        CastField<FObjectPropertyBase>(
            Property
        );

    if (!ObjectProperty)
    {
        return nullptr;
    }

    void* ValuePtr =
        ObjectProperty->ContainerPtrToValuePtr<void>(
            Object
        );

    if (!ValuePtr)
    {
        return nullptr;
    }

    return ObjectProperty->GetObjectPropertyValue(
        ValuePtr
    );
}


// ============================================================
// SET WIDGET OBJECT PROPERTY
// ============================================================

bool
ULocodromeWidgetEditorLibrary::SetWidgetObjectProperty(
    UObject* Object,
    const FString& PropertyName,
    UObject* Value
)
{
    if (!Object)
    {
        return false;
    }

    FProperty* Property =
        FindWidgetProperty(
            Object,
            PropertyName
        );

    if (!Property)
    {
        return false;
    }

    FObjectPropertyBase* ObjectProperty =
        CastField<FObjectPropertyBase>(
            Property
        );

    if (!ObjectProperty)
    {
        return false;
    }


    // --------------------------------------------------------
    // Make sure the supplied object is compatible with the
    // declared property class.
    // --------------------------------------------------------

    if (
        Value
        &&
        ObjectProperty->PropertyClass
        &&
        !Value->IsA(
            ObjectProperty->PropertyClass
        )
        )
    {
        UE_LOG(
            LogTemp,
            Warning,
            TEXT(
                "[LCAT] Cannot assign '%s' to property '%s'. "
                "Expected class '%s'."
            ),
            *Value->GetClass()->GetName(),
            *PropertyName,
            *ObjectProperty->PropertyClass->GetName()
        );

        return false;
    }


    Object->Modify();

    Object->PreEditChange(
        Property
    );


    void* ValuePtr =
        ObjectProperty->ContainerPtrToValuePtr<void>(
            Object
        );

    if (!ValuePtr)
    {
        return false;
    }


    ObjectProperty->SetObjectPropertyValue(
        ValuePtr,
        Value
    );


    FPropertyChangedEvent ChangedEvent(
        Property,
        EPropertyChangeType::ValueSet
    );

    Object->PostEditChangeProperty(
        ChangedEvent
    );


    return true;
}


// ============================================================
// GET ALL SOURCE WIDGETS
// ============================================================

TArray<UWidget*>
ULocodromeWidgetEditorLibrary::GetAllSourceWidgets(
    UWidgetBlueprint* WidgetBlueprint
)
{
    TArray<UWidget*> Result;

    if (!WidgetBlueprint)
    {
        return Result;
    }

    UWidgetTree* WidgetTree =
        WidgetBlueprint->WidgetTree;

    if (!WidgetTree)
    {
        return Result;
    }

    WidgetTree->GetAllWidgets(
        Result
    );

    return Result;
}

TArray<UWidget*>
ULocodromeWidgetEditorLibrary::DuplicateSourceWidgetHierarchy(
    UWidgetBlueprint* WidgetBlueprint,
    UWidget* SourceWidget
)
{
    TArray<UWidget*> Result;

    if (!WidgetBlueprint || !SourceWidget)
    {
        return Result;
    }


    // --------------------------------------------------------
    // Find the active Widget Blueprint editor.
    // --------------------------------------------------------

    FWidgetBlueprintEditor* WidgetEditorRaw =
        GetActiveWidgetBlueprintEditor();

    if (!WidgetEditorRaw)
    {
        return Result;
    }


    // --------------------------------------------------------
    // Make sure the supplied Widget Blueprint is actually the
    // one being edited by this editor.
    // --------------------------------------------------------

    UWidgetBlueprint* ActiveWidgetBlueprint =
        WidgetEditorRaw->GetWidgetBlueprintObj();

    if (
        !ActiveWidgetBlueprint
        ||
        ActiveWidgetBlueprint != WidgetBlueprint
        )
    {
        return Result;
    }


    // --------------------------------------------------------
    // Convert the source UWidget into the FWidgetReference
    // expected by DuplicateWidgets().
    // --------------------------------------------------------

    TSharedRef<FWidgetBlueprintEditor> WidgetEditor =
        StaticCastSharedRef<FWidgetBlueprintEditor>(
            WidgetEditorRaw->AsShared()
        );


    FWidgetReference SourceReference =
        WidgetEditor->GetReferenceFromTemplate(
            SourceWidget
        );


    if (!SourceReference.IsValid())
    {
        return Result;
    }


    // --------------------------------------------------------
    // DuplicateWidgets expects a set, just like the Designer
    // selection version we already use.
    // --------------------------------------------------------

    TSet<FWidgetReference> WidgetsToDuplicate;

    WidgetsToDuplicate.Add(
        SourceReference
    );


    // --------------------------------------------------------
    // Perform the native Widget Blueprint hierarchy duplicate.
    // --------------------------------------------------------

    Result =
        FWidgetBlueprintEditorUtils::DuplicateWidgets(
            WidgetEditor,
            WidgetBlueprint,
            WidgetsToDuplicate
        );


    return Result;
}

bool
ULocodromeWidgetEditorLibrary::GetWidgetTextProperty(
    UObject* Object,
    const FString& PropertyName,
    FText& Value
)
{
    if (!Object)
    {
        return false;
    }

    FProperty* Property =
        FindWidgetProperty(
            Object,
            PropertyName
        );

    FTextProperty* TextProperty =
        CastField<FTextProperty>(
            Property
        );

    if (!TextProperty)
    {
        return false;
    }

    void* ValuePtr =
        TextProperty->ContainerPtrToValuePtr<void>(
            Object
        );

    if (!ValuePtr)
    {
        return false;
    }

    Value =
        TextProperty->GetPropertyValue(
            ValuePtr
        );

    return true;
}


bool
ULocodromeWidgetEditorLibrary::SetWidgetTextProperty(
    UObject* Object,
    const FString& PropertyName,
    const FText& Value
)
{
    if (!Object)
    {
        return false;
    }

    FProperty* Property =
        FindWidgetProperty(
            Object,
            PropertyName
        );

    FTextProperty* TextProperty =
        CastField<FTextProperty>(
            Property
        );

    if (!TextProperty)
    {
        return false;
    }

    Object->Modify();
    Object->PreEditChange(
        Property
    );

    void* ValuePtr =
        TextProperty->ContainerPtrToValuePtr<void>(
            Object
        );

    if (!ValuePtr)
    {
        return false;
    }

    TextProperty->SetPropertyValue(
        ValuePtr,
        Value
    );

    FPropertyChangedEvent ChangedEvent(
        Property,
        EPropertyChangeType::ValueSet
    );

    Object->PostEditChangeProperty(
        ChangedEvent
    );

    return true;
}