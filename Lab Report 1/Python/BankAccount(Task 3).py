class BankAccount:
    balance = 1000

    def __init__(self):
        balance = 1000

    def deposit(self, amount):
        self.balance += amount

    def withdraw(self, amount):
        if self.balance <= 500:
            print("Insufficient Balance")
        else:
            self.balance -= amount

    def display(self):
        print("Current Balance : ", self.balance)


Acc1 = BankAccount()

Acc1.display()
Acc1.deposit(500)
Acc1.display()
Acc1.withdraw(500)
Acc1.display()
Acc1.withdraw(500)
Acc1.display()
Acc1.withdraw(500)
Acc1.display()