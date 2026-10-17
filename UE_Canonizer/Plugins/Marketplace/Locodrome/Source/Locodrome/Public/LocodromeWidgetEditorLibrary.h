// Copyright 2026 Locodrome. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LocodromeWidgetEditorLibrary.generated.h"

class UWidget;
class UWidgetBlueprint;

UCLASS()
class LOCODROME_API ULocodromeWidgetEditorLibrary
    : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:

    UFUNCTION(
        BlueprintCallable,
        Category = "Locodrome|Widget Editor"
    )
    static UWidgetBlueprint* GetActiveWidgetBlueprint();

    UFUNCTION(
        BlueprintCallable,
        Category = "Locodrome|Widget Editor"
    )
    static TArray<UWidget*> GetSelectedDesignerWidgets();

    UFUNCTION(
        BlueprintCallable,
        Category = "Locodrome|Widget Editor"
    )
    static TArray<UWidget*> DuplicateSelectedDesignerWidgets();

    UFUNCTION(
        BlueprintCallable,
        Category = "Locodrome|Widget Editor"
    )
    static TArray<UWidget*> DuplicateSourceWidgetHierarchy(
        UWidgetBlueprint* WidgetBlueprint,
        UWidget* SourceWidget
    );

    UFUNCTION(
        BlueprintCallable,
        Category = "Locodrome|Widget Editor"
    )
    static bool RenameSourceWidget(
        UWidgetBlueprint* WidgetBlueprint,
        UWidget* Widget,
        const FString& NewName
    );

    UFUNCTION(
        BlueprintCallable,
        Category = "Locodrome|Widget Editor"
    )
    static FString GetSourceWidgetDisplayLabel(
        UWidget* Widget
    );


    // --------------------------------------------------------
    // Generic reflected FName property access
    // --------------------------------------------------------

    UFUNCTION(
        BlueprintCallable,
        Category = "Locodrome|Widget Editor|Properties"
    )
    static bool GetWidgetNameProperty(
        UObject* Object,
        const FString& PropertyName,
        FName& Value
    );

    UFUNCTION(
        BlueprintCallable,
        Category = "Locodrome|Widget Editor|Properties"
    )
    static bool SetWidgetNameProperty(
        UObject* Object,
        const FString& PropertyName,
        FName Value
    );


    // --------------------------------------------------------
    // Generic reflected TArray<FName> property access
    // --------------------------------------------------------

    UFUNCTION(
        BlueprintCallable,
        Category = "Locodrome|Widget Editor|Properties"
    )
    static bool GetWidgetNameArrayProperty(
        UObject* Object,
        const FString& PropertyName,
        TArray<FName>& Values
    );

    UFUNCTION(
        BlueprintCallable,
        Category = "Locodrome|Widget Editor|Properties"
    )
    static bool SetWidgetNameArrayProperty(
        UObject* Object,
        const FString& PropertyName,
        const TArray<FName>& Values
    );

    UFUNCTION(
        BlueprintCallable,
        Category = "Locodrome|Widget Editor|Debug"
    )
    static TArray<FString> GetWidgetPropertyDebugInfo(
        UObject* Object
    );

    UFUNCTION(
        BlueprintCallable,
        Category = "Locodrome|Widget Editor|Properties"
    )
    static bool MirrorWidgetEnumSideProperty(
        UObject* Object,
        const FString& PropertyName
    );

    UFUNCTION(
        BlueprintCallable,
        Category = "Locodrome|Widget Editor|Debug"
    )
    static FString GetWidgetBytePropertyDebugInfo(
        UObject* Object,
        const FString& PropertyName
    );

    // ============================================================
// WIDGET OBJECT PROPERTIES
// ============================================================

    UFUNCTION(
        BlueprintCallable,
        Category = "Locodrome|Widget Editor"
    )
    static UObject* GetWidgetObjectProperty(
        UObject* Object,
        const FString& PropertyName
    );

    UFUNCTION(
        BlueprintCallable,
        Category = "Locodrome|Widget Editor"
    )
    static bool SetWidgetObjectProperty(
        UObject* Object,
        const FString& PropertyName,
        UObject* Value
    );


    // ============================================================
    // WIDGET TREE
    // ============================================================

    UFUNCTION(
        BlueprintCallable,
        Category = "Locodrome|Widget Editor"
    )
    static TArray<UWidget*> GetAllSourceWidgets(
        UWidgetBlueprint* WidgetBlueprint
    );

    UFUNCTION(
        BlueprintCallable,
        Category = "Locodrome|Widget Editor"
    )
    static bool GetWidgetTextProperty(
        UObject* Object,
        const FString& PropertyName,
        FText& Value
    );

    UFUNCTION(
        BlueprintCallable,
        Category = "Locodrome|Widget Editor"
    )
    static bool SetWidgetTextProperty(
        UObject* Object,
        const FString& PropertyName,
        const FText& Value
    );
};