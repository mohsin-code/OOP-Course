#include<iostream>
using namespace std;

class RationalNumber
{
	private:
		int num;
		int denom;
		
	public:
		RationalNumber()
		{
			num = 0;
			denom = 1;
		}
		
		RationalNumber(int n, int d)
		{
			num = n;
			if(d>0)
				denom = d;
			else
				denom = 1;
			
			//reduce fraction	
			for (int i = denom * num; i > 1; i--) 
			{  
                if ((denom % i == 0) && (num % i == 0)) 
				{  
            		denom /= i;  
                	num /= i;  
        		}
        	}
		}
		
		void showRN()
		{
			cout<<"Rational Number: ";
			if (denom == 1)
				cout<<num<<endl;
			else
				cout<<num<<"/"<<denom<<endl;
		}
		
		friend RationalNumber operator + (RationalNumber const &r1, RationalNumber const &r2)
		{
			int n = (r1.num * r2.denom) + (r1.denom * r2.num);
			int d = r1.denom * r2.denom;
			RationalNumber r(n,d);
			return r;
		}
		
		friend RationalNumber operator - (RationalNumber const &r1, RationalNumber const &r2)
		{
			int n = (r1.num * r2.denom) - (r1.denom * r2.num);
			int d = r1.denom * r2.denom;
			RationalNumber r(n,d);
			return r;
		}
		
		friend RationalNumber operator * (RationalNumber const &r1, RationalNumber const &r2)
		{
			int n = r1.num * r2.num;
			int d = r1.denom * r2.denom;
			RationalNumber r(n,d);
			return r;
		}
		
		friend RationalNumber operator / (RationalNumber const &r1, RationalNumber const &r2)
		{
			int n = r1.num * r2.denom;
			int d = r1.denom * r2.num;
			RationalNumber r(n,d);
			return r;
		}
		
		friend bool operator > (RationalNumber const &r1, RationalNumber const &r2)
		{
			float f1 = r1.num/r1.denom;
			float f2 = r2.num/r2.denom;
			return f1 > f2;
		}
		
		friend bool operator < (RationalNumber const &r1, RationalNumber const &r2)
		{
			float f1 = r1.num/r1.denom;
			float f2 = r2.num/r2.denom;
			return f1 < f2;
		}
		
		friend bool operator >= (RationalNumber const &r1, RationalNumber const &r2)
		{
			float f1 = r1.num/r1.denom;
			float f2 = r2.num/r2.denom;
			return f1 >= f2;
		}
		
		friend bool operator <= (RationalNumber const &r1, RationalNumber const &r2)
		{
			int f1 = r1.num/r1.denom;
			int f2 = r2.num/r2.denom;
			return f1 <= f2;
		}
		
		friend bool operator == (RationalNumber const &r1, RationalNumber const &r2)
		{
			int f1 = r1.num/r1.denom;
			int f2 = r2.num/r2.denom;
			return f1 == f2;
		}
		
		friend bool operator != (RationalNumber const &r1, RationalNumber const &r2)
		{
			int f1 = r1.num/r1.denom;
			int f2 = r2.num/r2.denom;
			return f1 != f2;
		}
};

int main()
{
	int n1,n2,d1,d2;
	
	cout<<"Enter First Rational Number:";
	cin>>n1>>d1;
	
	cout<<"Enter Second Rational Number:";
	cin>>n2>>d2;
	
	RationalNumber r1(n1, d1), r2(n2, d2), r3;
	
	cout<<"\nFractions 1 and 2:"<<endl;
	r1.showRN();
	r2.showRN();
	
	cout<<"\nAddition: "<<endl;
	r3 = r1 + r2;
	r3.showRN();
	
	cout<<"\nSubtraction: "<<endl;
	r3 = r1 - r2;
	r3.showRN();
	
	cout<<"\nMultiplication: "<<endl;
	r3 = r1 * r2;
	r3.showRN();
	
	cout<<"\nDivision: "<<endl;
	r3 = r1 / r2;
	r3.showRN();
	
	cout<<"\nIs Fraction 1 greater than Fraction 2: ";
	(r1 > r2)?cout<<"True":cout<<"False";
	
	cout<<"\nIs Fraction 1 less than Fraction 2: ";
	(r1 < r2)?cout<<"True":cout<<"False";
	
	cout<<"\nIs Fraction 1 greater or equal to Fraction 2: ";
	(r1 >= r2)?cout<<"True":cout<<"False";
	
	cout<<"\nIs Fraction 1 less or equal to Fraction 2: ";
	(r1 <= r2)?cout<<"True":cout<<"False";
	
	cout<<"\nIs Fraction 1 equal to Fraction 2: ";
	(r1 == r2)?cout<<"True":cout<<"False";

	cout<<"\nIs Fraction 1 not equal to Fraction 2: ";
	(r1 != r2)?cout<<"True":cout<<"False";
	
	return 0;
}
