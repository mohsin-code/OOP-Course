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

        //Deep Copy Constructor
        Employee(const Employee &e)
        {
            int length = strlen(e.name);
            name = new char[length+1];
            strcpy(name, e.name);

            length = strlen(e.department);
            department = new char[length+1];
            strcpy(department, e.department);

            salary = e.salary;
            serviceTime = e.serviceTime;
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
        
        void show()
        {
            cout<<"\nDetails:\nName: "<<name<<endl;
            cout<<"Enter department: "<<department<<endl;
            cout<<"Enter salary:"<<salary<<endl;
            cout<<"Enter time of service:"<<serviceTime<<endl;
        }

        ~Employee()
        {
            delete name, department, salary, serviceTime;
        }
};

int main()
{
    Employee e1;

    e1.input();
    e1.show();

    Employee e2 = e1;

    e2.show();

    Employee e3(e1);
    
    e3.show();
}