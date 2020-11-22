class Point:
    x = 0
    y = 0

    def __init__(self):
        self.x = 0
        self.y = 0

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


p1 = Point(0,0)

p1.display()
p1.setX(2)
p1.setY(3)
p1.display()

p2 = Point(5,2)

p2.display()
p2.setX(6)
p2.setY(3)
p2.display()