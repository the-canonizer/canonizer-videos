import tempfile
import json 

# File where the material assignments is stored
materiallist = "\materiallist.json"

# complete path to the text file file containing material assignments
pathtofile = tempfile.gettempdir()+materiallist

with open(pathtofile,'r') as filecontents:
    # Read the contents of the material assignment file as json
    jsonfilecontents = json.load(filecontents)

# Get the list of geos in the scene
allobjs = hou.node('/obj/').children()

#get the last node in each sop network
def getLastNode(containerNode):
    childList = containerNode.children()
    for child in childList:
        if isinstance(child, hou.SopNode):
            #print(child.path())        
            if (child.isDisplayFlagSet() and child.isRenderFlagSet()):  
                return child 

for obj in allobjs:
    if obj.type().name()=='geo':
        lastNode = getLastNode(obj)
        if (lastNode.type().name()=='attribdelete'):
            hou.node(lastNode.path()).destroy()

        # Reassign all materials
        jsonkey = obj.path()
        hou.node(jsonkey).parm('shop_materialpath').set(jsonfilecontents[jsonkey])
        hou.node(jsonkey).parm('vm_rendervisibility').set('*')
        