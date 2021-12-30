# BubbleTransform

from math import pi, sqrt, atan, cos

node = hou.pwd()
geo = node.geometry()

# Apply bubble transform to each point
for point in geo.points():

    [x,y,z] = (point.position()[0],
               point.position()[1],
               point.position()[2])

    r = sqrt(x**2 + y**2 + z**2)
    v = 2.0 * atan(1.0 / (2.0 * r))
    rho = pi - v

    [x1, y1, z1] = [x*rho/r,
                    y*rho/r,
                    z*rho/r]

    pos = hou.Vector3([x1, y1, z1])
    point.setPosition(pos)