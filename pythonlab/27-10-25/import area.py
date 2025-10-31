import math

def area_rectangle(length, width):
    return length * width

def area_circle(radius):
    return math.pi * radius ** 2

print("Area of rectangle (5x3):", area_rectangle(5, 3))
print("Area of circle (radius 4):", area_circle(4))
