from abc import ABC, abstractmethod
import math


class Shape(ABC):
    Area = 0
    Volume = 0

    def area(self):
        print("Empty Shape")

    def volume(self):
        print("Empty Shape")

    def display(self):
        pass


class Point(Shape):
    x = 0
    y = 0

    def __init__(self):
        pass

    def __init__(self, a, b):
        self.x = a
        self.y = b

    def display(self):
        print("Point's Information: ")
        print("X = ", self.x)
        print("Y = ", self.y)


class Circle(Point):
    radius = 0

    def __init__(self):
        pass

    def __init__(self, a, b, r):
        self.x = a
        self.y = b
        self.radius = r

    def area(self):
        self.Area = math.pi * self.radius ** 2
        return self.Area

    def display(self):
        print("\nCircle's Information: ")
        print("X = ", self.x)
        print("Y = ", self.y)
        print("Radius = ", self.radius)
        print("Area = ", self.area())


class Cylinder(Circle):
    height = 0

    def __init__(self):
        pass

    def __init__(self, a, b, r, h):
        self.x = a
        self.y = b
        self.radius = r
        self.height = h

    def area(self):
        self.Area = (2 * math.pi * self.radius ** 2) + (2 * math.pi * self.radius * self.height)
        return self.Area

    def volume(self):
        self.Volume = (math.pi * (self.radius ** 2) * self.height)
        return self.Volume

    def display(self):
        print("\nCylinder's Information: ")
        print("X = ", self.x)
        print("Y = ", self.y)
        print("Radius = ", self.radius)
        print("Height = ", self.height)
        print("Area = ", self.area())
        print("Volume = ", self.volume())


p = Point(1, 2)
c = Circle(3, 4, 5)
cy = Cylinder(6, 7, 8, 9)

p.display()
c.display()
cy.display()