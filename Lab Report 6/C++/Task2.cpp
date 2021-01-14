#include <iostream>

using namespace std;

class Base 
{
	protected:
    	int ba;
	
	public:
    	void input_base()
    	{
        	cout<<"Enter Base: ";
        	cin>>ba;
    	}
    
		int show_base()
    	{
        	cout<<"\nBase: "<<ba<<endl;
    	}
	};

class Exponent
{
	protected:
    	int exp;
    	
	public:	
		void input_exp()
    	{
        	cout<<"Enter Exponent: ";
        	cin>>exp;
    	}
    
		int show_exp()
		{
        	cout<<"Exponent: "<<exp<<endl;
    	}
};

class Power: public Base, Exponent
{
	protected:
    	int po;
	
	public:
    	Power():po(1){}
    
		void in1()
    	{
        	input_base();
        	input_exp();
    	}
    
		void show1()
    	{
        	show_base();
        	show_exp();
        	
			for(int i = 0; i < exp; i++)
        	    po *= ba;

        	cout<<"Power = "<<po<<endl;
    	}
};

int main(){
	Power p1;
	
	p1.in1();
	p1.show1();
	
	return 0;
}
