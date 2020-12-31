class Point:
    x = 0
    y = 0

    def __init__(self, a, b):
        self.x = a
        self.y = b

    def getX(self):
        print(self.x)

    def getY(self):
        print(self.y)

    def setX(self, a):
        self.x = a

    def setY(self, b):
        self.y = b

    def display(self):
        print("Point is : (", self.x, ",", self.y, ")")


class Circle(Point):
    radius = 0

    def __init__(self, r):
        self.radius = r

    def setRadius(self, r):
        self.radius = r

    def getRadius(self):
        return self.radius

    def Circumference(self):
        print("Circumference is: " + str(2 * 3.14 * self.radius))


class Cylinder(Circle):
    height = 0

    def __init__(self, h, r):
        self.height = h
        self.radius = r

    def Area(self):
        print("Area is: " + str(2 * 3.14 * self.radius * (self.radius + self.height)))

    def Volume(self):
        print("Volume is: " + str(3.14 * (self.radius ** 2) * self.height))


p = Point(2, 2)
c = Circle(4)

print("Radius is: " + str(c.getRadius()))

cy = Cylinder(6.4, c.getRadius())

cy.Area()
cy.Volume()
