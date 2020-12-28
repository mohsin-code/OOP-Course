import copy


class Employee:
    def __init__(self, name, department, salary, serviceTime):
        self.name = name
        self.department = department
        self.salary = salary
        self.serviceTime = serviceTime

    def dataIn(self):
        self.name = input("Enter name: ")
        self.department = input("Enter Department: ")
        self.salary = input("Enter Salary: ")
        self.serviceTime = input("Enter Time of Service: ")

    def show(self):
        print("\n--Details--")
        print("Name: " + self.name)
        print("Department: " + self.department)
        print("Salary: " + str(self.salary))
        print("Time of Service: " + str(self.serviceTime))


e1 = Employee("", "", 0, 0)

e1.dataIn()
e1.show()

e2 = e1
e2.show()

e3 = copy.deepcopy(e1)
e3.show()