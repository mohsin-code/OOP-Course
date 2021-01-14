class Base:
    ba = 0

    def input_base(self):
        self.ba = int(input("Enter Base: "))

    def show_base(self):
        print("\nBase: ", self.ba)


class Exponent:
    exp = 0

    def input_exp(self):
        self.exp = int(input("Enter Exponent: "))

    def show_exp(self):
        print("Exponent: ", self.exp)


class Power(Base, Exponent):
    po = 0

    def __init__(self):
        self.po = 1

    def in1(self):
        self.input_base()
        self.input_exp()

    def show1(self):
        self.show_base()
        self.show_exp()

        for _ in range(self.exp):
            self.po *= self.ba

        print("Power: ", self.po)