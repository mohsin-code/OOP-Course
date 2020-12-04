class IntegerSet:
    set = [0] * 50

    def __init__(self):
        pass

    def NewIntegerSet(self, arr):
        for i in range(50):
            self.set[i] = arr[i]

    def UnionOfIntegerSets(self, i):
        j = IntegerSet()
        for n in range(50):
            j.set[n] = self.set[n] or i.set[n]
        return j

    def IntersectionOfIntegerSets(self, i):
        j = IntegerSet()
        for n in range(50):
            j.set[n] = self.set[n] and i.ser[n]
        return j

    def InsertElement(self, k):
        self.set[k] = 1

    def DeleteElement(self, m):
        self.set[m] = 0

    def SetPrint(self):
        for i in self.set:
            print(self.set[i], end=" ")
        print()

    def IsEqualTo(self, i):
        if self.set == i.set:
            return True
        else:
            return False


# print("Enter values for X:", end=" ")
x = [0 for i in range(50)]

# print("Enter values for Y:", end=" ")
y = [1 for i in range(50)]

i1 = IntegerSet()
i2 = IntegerSet()
i3 = IntegerSet()

i1.NewIntegerSet(x)
print("I1:", end=" ")
i1.SetPrint()

i2.NewIntegerSet(y)
print("I2:", end=" ")
i2.SetPrint()

k = int(input("Location for insertion in I1: "))
i1.InsertElement(k)

m = int(input("Location for deletion from I1: "))
i1.DeleteElement(m)

i3 = i1.UnionOfIntegerSets(i2)
print("Union:", end=" ")
i3.SetPrint()

i3 = i1.UnionOfIntegerSets(i2)
print("Intersection:", end=" ")
i3.SetPrint()

print("Are I1 and I2 equal:", end=" ")
print(i1.IsEqualTo(i2));