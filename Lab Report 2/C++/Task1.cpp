#include<iostream>
using namespace std;

class complex {
    private:
        double re, im;
    public:
        complex();
        complex(double r, double i);
        void show();
        void input();
        void addCom(complex c1, complex c2);
        void subCom(complex c1, complex c2);
        void mulCom(complex c1, complex c2);
};

complex::complex():re(0),im(0){}

complex::complex(double r, double i):re(r),im(i){}

void complex::show() {
    if(im>0)
        cout << re << " + " << im << "i" << endl;
    else
        cout << re << im << "i" << endl;
}

void complex::input() {
    cout<<"Enter real number: ";
    cin>>re;
    cout<<"Enter imaginary number: ";
    cin>>im;
}

void complex::addCom(complex c1, complex c2) {
    re = c1.re + c2.re;
    im = c1.im + c2.im;    
}

void complex::subCom(complex c1, complex c2) {
    re = c1.re - c2.re;
    im = c1.im - c2.im;    
}

void complex::mulCom(complex c1, complex c2) {
    re = (c1.re * c2.re) - (c1.im * c2.im);
    im = (c1.re * c2.im) + (c2.re * c1.im);
}

main() {
    complex c1,c2,c;
    
    c1.input();
    cout<<"Sum = ";
    c1.show();

    c2.input();
    cout<<"Sum = ";
    c2.show();

    c.addCom(c1, c2);
    cout<<"Sum = ";
    c.show();

    c.subCom(c1, c2);
    cout<<"Difference = ";
    c.show();

    c.mulCom(c1, c2);
    cout<<"Product = ";
    c.show();
}