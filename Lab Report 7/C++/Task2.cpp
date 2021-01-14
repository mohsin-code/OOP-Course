#include<iostream>
using namespace std;

class Time
{
	private:
		int hr,min,sec;
		
	public:
		Time()
		{
			hr = 0;
			min = 0;
			sec = 0;
		}
		
		Time(int h, int m, int s)
		{
			if(s>=60)
			{
				m += (s/60);
				s -= 60;
			} 
			else if(s<0)
			{
				m -= 1;
				s += 60;
			}
			
			if(m>=60)
			{
				h += (m/60);
				m -= 60;
			}
			else if(m<0)
			{
				h -= 1;
				m += 60;
			}
			
			hr = h;
			min = m;
			sec = s;
		}
		
		void show()
		{
			cout<<"Time:\t"<<hr<<":"<<min<<":"<<sec<<endl;
		}
		
		friend Time operator + (Time const &t1, Time const &t2)
		{
			int h = t1.hr + t2.hr;
			int m = t1.min + t2.min;
			int s = t1.sec + t2.sec;
			Time t(h,m,s);
			return t;
		}
		
		friend Time operator ++ (Time const &t1)
		{
			int s = t1.sec + 1;
			Time t(t1.hr,t1.min,s);
			return t;
		}
		
		friend Time operator ++ (Time const &t1, int i)
		{
			int s = t1.sec + 1;
			Time t(t1.hr,t1.min,s);
			return t;
		}
		
		friend Time operator -- (Time const &t1)
		{
			int s = t1.sec + 1;
			Time t(t1.hr,t1.min,s);
			return t;
		}
		
		friend Time operator -- (Time const &t1, int i)
		{
			int s = t1.sec + 1;
			Time t(t1.hr,t1.min,s);
			return t;
		}
};

int main()
{
	Time t1(4,30,50), t2(9,45,30);
	
	cout<<"Both Times: "<<endl;
	t1.show();
	t2.show();
	
	cout<<"\nAdded Time: "<<endl;
	Time t3 = t1 + t2;
	t3.show();
	
	cout<<"\nPre-Incremented Time: "<<endl;
	t1 = ++t1;
	t1.show();
	
	cout<<"\nPost-Incremented Time: "<<endl;
	t1 = t1++;
	t1.show();
	
	cout<<"\nPre-Decremented Time: "<<endl;
	t2 = --t2;
	t2.show();
	
	cout<<"\nPost-Decremented Time: "<<endl;
	t2 = t2--;
	t2.show();
}
