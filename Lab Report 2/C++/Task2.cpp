#include<iostream>
using namespace std;

class complex {
    private:
        double re, im;
    public:
        complex();
        complex(double r, double i);
        // complex negate();       //returns complex object
        void show();
        void input();
        complex addCom(complex c);
        complex subCom(complex c);
        complex mulCom(complex c);
};

complex::complex():re(0),im(0){}

complex::complex(double r, double i):re(r),im(i){}

void complex::show() {
    if(im>0)
        cout << re << "+" << im << "i" << endl;
    else
        cout << re << im << "i" << endl;
}

void complex::input() {
    cout<<"Enter real number: ";
    cin>>re;
    cout<<"Enter imaginary number: ";
    cin>>im;
}

complex complex::addCom(complex c) {
    complex x;
    x.re = re + c.re;
    x.im = im + c.im;
    return x;    
}

complex complex::subCom(complex c) {
    complex x;
    x.re = re - c.re;
    x.im = im - c.im;
    return x;    
}

complex complex::mulCom(complex c) {
    complex x;
    x.re = (re * c.re) - (im * c.im);
    x.im = (re * c.im) + (c.re * im);
}

main() {
    complex c1,c2,c;
    
    c1.input();
    cout<<"c1 = ";
    c1.show();

    c2.input();
    cout<<"c2 = ";
    c2.show();

    c = c1.addCom(c2);
    cout<<"Sum = ";
    c.show();

    c = c1.subCom(c2);
    cout<<"Difference = ";
    c.show();

    c = c1.mulCom(c2);
    cout<<"Product = ";
    c.show();
}
