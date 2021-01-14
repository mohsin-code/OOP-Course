class First:
    f = 0

    def f_input(self):
        self.f = int(input("Enter First value: "))


class Second(First):
    s = 0

    def s_input(self):
        self.f_input()
        self.s = int(input("Enter Second Value: "))


class Third(Second):
    t = 0

    def __init__(self):
        pass

    def t_input(self):
        self.s_input()
        self.t = int(input("Enter Third value: "))

    def max(self):
        print("\nMax: ", self.t if (self.t > self.s) and (self.t > self.f) else self.s if (self.s > self.f) else self.f)

    def show(self):
        print("\nFirst value: ", self.f)
        print("Second value: ", self.s)
        print("Third value: ", self.t)
