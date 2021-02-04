#include<iostream>
#include<math.h>
using namespace std;

class Shape //Abstact Class
{
	protected:
		float Area;
		float Volume;
		
	public:
		
		virtual float area()
		{
			cout<<"\nEmpty Shape";
		}
		
		virtual float volume()
		{
			cout<<"\nEmpty Shape";
		}
		
		virtual void display() = 0;
};

class Point: public Shape
{
	protected:
		int x;
		int y;
		
	public:
		
		Point():x(0),y(0){}
		
		Point(int a, int b):x(a),y(b){}
		
		//Overridden
		void display()
		{
			cout << "Point's Information:" << endl;
			cout << "\nX = " << x;
			cout << "\nY = " << y << endl;
		}
};

class Circle: public Point
{
	protected:
		float radius;
		
	public:
		
		Circle():radius(0){}
		
		Circle(int a, int b, float r)
		{
			x = a;
			y = b;
			radius = r;
		}
		
		//Overridden
		float area()
		{
			Area = M_PI * radius * radius;
			return Area;
		}
		
		void display()
		{
			cout << "\nCircle's Information: " << endl;
			cout << "\nX = " << x;
			cout << "\nY = " << y;
			cout << "\nRadius = " << radius;
			cout << "\nArea = " << area() << endl;
		}
};

class Cylinder: public Circle
{
	protected:
		float height;
		
	public:
		
		Cylinder():height(0){}
		
		Cylinder(int a, int b, float r, float h)
		{
			x = a;
			y = b;
			radius = r;
			height = h;
		}
		
		//Overridden
		float area()
		{
			Area = (2 * M_PI * radius * radius) + (2 * M_PI * radius * height);
			return Area;
		}
		
		float volume()
		{
			Volume = M_PI * radius * radius * height;
			return Volume;
		}
		
		void display()
		{
			cout << "\nCylinder's Information: " << endl;
			cout << "\nX = " << x;
			cout << "\nY = " << y;
			cout << "\nRadius = " << radius;
			cout << "\nHeight = " << height;
			cout << "\nArea = " << area();
			cout << "\nVolume = " << volume() << endl;
		}
};

int main()
{
	Shape *s;
	Point p(1, 2);
	Circle c(3, 4, 5);
	Cylinder cy(6, 7, 8, 9);
	
	s = &p;
	s->display();
	
	s = &c;
	s->display();
	
	s = &cy;
	s->display();
		
	return 0;
}
