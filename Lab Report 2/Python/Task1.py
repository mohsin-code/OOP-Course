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

    def addCom(self, c1, c2):
        self.re = c1.re + c2.re
        self.im = c1.im + c2.im

    def subCom(self, c1, c2):
        self.re = c1.re - c2.re
        self.im = c1.im - c2.im

    def mulCom(self, c1, c2):
        self.re = (c1.re * c2.re) - (c1.im * c2.im)
        self.im = (c1.re * c2.im) + (c2.re * c1.im)

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
c.addCom(c1, c2)
c.show()

print("Difference =", end = " ")
c.subCom(c1, c2)
c.show()

print("Product =", end = " ")
c.mulCom(c1, c2)
c.show()