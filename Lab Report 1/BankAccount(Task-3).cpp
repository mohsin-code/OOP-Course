#include<iostream>
using namespace std;

class BankAccount
{
private:
    int balance;
public:
    BankAccount(){
        balance = 0;
    }

    BankAccount(int amount){
        balance = amount;
    }

    void deposit(int amount){
        balance += amount;
    }

    void withdraw(int amount){
        if(balance <= 500)
            cout<<"Insufficient Balance!"<<endl;
        else
            balance -= amount;
    }

    void display(){
        cout<<"Current Balance: "<<balance<<endl;
    }
};

main()
{
    BankAccount Acc1(1000);

    Acc1.display();
    Acc1.deposit(500);
    Acc1.display();
    Acc1.withdraw(500);
    Acc1.display();
    Acc1.withdraw(500);
    Acc1.display();
    Acc1.withdraw(500);
    Acc1.display();
}