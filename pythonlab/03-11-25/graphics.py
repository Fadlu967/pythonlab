from graphics import circle
from graphics.circle import perimeter_circ
from graphics import rectangle as rect
from graphics.ThreeD_graphics import sphere
from graphics.ThreeD_graphics.cuboid import *

print("\nCircle\n")
circle.area_circ(5)
perimeter_circ(5)

print("\nRectangle\n")
rect.area_rect(5,10)
rect.perimeter_rect(5,10)

print("\nSphere\n")
sphere.perimeter_sphere(5)
sphere.area_sphere(5)

print("\nCuboid\n")
perimeter_cuboid(5,10,15)
area_cuboid(5,10,15)


