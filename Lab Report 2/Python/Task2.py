class Complex:
    re = 0
    im = 0

    def __init__(self):
        self.re = 0
        self.im = 0

    def __init__(self, r, i):
        self.re = r
        self.im = i

    def show(self):
        if self.im >= 0:
            print(f"{self.re}+{self.im}i")
        else:
            print(self.re, self.im, "i", sep="")

    def addCom(self, c1):
        c = Complex(0,0)
        c.re = self.re + c1.re
        c.im = self.im + c1.im
        return c

    def subCom(self, c1):
        c = Complex(0,0)
        c.re = self.re - c1.re
        c.im = self.im - c1.im
        return c

    def mulCom(self, c1):
        c = Complex(0,0)
        c.re = (c1.re * self.re) - (c1.im * self.im)
        c.im = (c1.re * self.im) + (self.re * c1.im)
        return c

    def input(self):
        self.re = int(input("Enter real number: "))
        self.im = int(input("Enter imaginary number: "))


c1 = Complex(0,0)
c2 = Complex(0,0)
c = Complex(0,0)

print("For Complex Number C1:")
c1.input()
print("C1:", end = " ")
c1.show()

print("For Complex Number C2:")
c2.input()
print("C2:", end = " ")
c2.show()

print("Sum =", end = " ")
c = c1.addCom(c2)
c.show()

print("Difference =", end = " ")
c = c1.subCom(c2)
c.show()

print("Product =", end = " ")
c = c1.mulCom(c2)
c.show()