import tempfile
import json 

#create a file to store the material assignments
materiallist = "\materiallist.json"

# Create an empty list of geo type objects
listofgeos = []

# Create an empty dictionary to hold material assignments
originalmats = {}

# Get the list of geos in the scene
allobjs = hou.node('/obj/').children()

#Find the node with display and render flag
def getLastNode(containerNode):
    childList = containerNode.children()
    for child in childList:
        if (child.isDisplayFlagSet() and child.isRenderFlagSet()):
            return child

# Add all items of type geo to that list
for obj in allobjs:
    if obj.type().name()=='geo':
        lastNode = getLastNode(obj)
        listofgeos.append(obj.path())

        # Remove all shop_materialpath attributes from the sops and set this as the render Node
        attrDeleteNode = hou.node(obj.path()).createNode('attribdelete').path()

        #print(lastNode)
        hou.node(attrDeleteNode).setFirstInput(lastNode,0)
        hou.node(attrDeleteNode).parm('primdel').set('shop_materialpath')
        hou.node(attrDeleteNode).setDisplayFlag(True)
        hou.node(attrDeleteNode).setRenderFlag(True)       

#print(listofgeos)

# complete path to the working file
pathtofile = tempfile.gettempdir()+materiallist

# create file for writing the objects in the scene and their material assignment
with open(pathtofile, 'w') as materiallist:

# write the materials into a dictionary with the name of their holding geos as key and write that to a file
    for geo in listofgeos:
        originalmats[geo]=hou.node(geo).parm('shop_materialpath').eval()
       

    #write the material list assignments to the file
    materiallist.write(json.dumps(originalmats))

# The constant shader to apply
constantShader = "/mat/RenderMat"

# Assign constant shader to all the materials in the list of geometries
for i in listofgeos:
    hou.node(i).parm('shop_materialpath').set(constantShader)
    hou.node(i).parm('vm_rendervisibility').set('primary')


