#include<iostream>
using namespace std;

class Employee
{
    private:
        char* name;
        char* department;
        double salary;
        double serviceTime;
    
    public:
        Employee()
        {
            name = '';
            department = '';
            salary = 0;
            serviceTime = 0;
        }

        Employee(char n, char dep, double sal, double t)
        {
            name* = new char(n);
            department* = new char(dep);
            salary = sal;
            serviceTime = t;
        }

        Employee(const Employee &e)
        {
            //Deep copy of data members
        }

        void input()
        {
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter department: ";
            cin>>department;
            cout<<"Enter salary:";
            cin>>salary;
            cout<<"Enter time of service:";
            cin>>serviceTime;
        }

        ~Employee()
        {
            delete name, department, salary, serviceTime;
        }
}