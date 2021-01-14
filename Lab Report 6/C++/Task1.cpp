#include <iostream>

using namespace std;

class First
{
	protected:
    	int f;
	
	public:
    	void f_input()
    	{
        	cout<<"Enter First value: ";
        	cin>>f;
    	}
};

class Second: public First
{
	protected:
    	int s;
	
	public:
		void s_input()
    	{
        	f_input();
			cout<<"Enter Second value: ";
        	cin>>s;
    	}
};

class Third: public Second
{
	protected:
    	int t;
    	
	public:
    	void t_input()
    	{
    		s_input();
    		cout<<"Enter Third value: ";
        	cin>>t;
		}
		
		void max()
		{
			cout<<"\nMax: ";
			(t>s)&&(t>f)?cout<<t:(s>f)?cout<<s:cout<<f;
			cout<<endl;
		}
		
		void show(){
			cout<<"\nFirst value: "<<f;
			cout<<"\nSecond value: "<<s;
			cout<<"\nThird value: "<<t;
			cout<<endl;
		}
};

int main(){
	Third t1;
	
	t1.t_input();
	
	t1.show();
	
	t1.max();
}
