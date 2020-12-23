#include<iostream>
#include<math.h>
using namespace std;

// Point class
class Point {
	protected:
    	int x;
    	int y;
    public:
    	Point();
        Point(int a, int b);
        void setX(int x);
        void setY(int y);
        void getX();
        void getY();
        void display();
};

//Point Constructors
Point::Point():x(0),y(0){ }

Point::Point(int a, int b):x(a),y(b){ }

//Point Methods
void Point::setX(int x){
    this->x = x;
}

void Point::setY(int y){
    this->y = y;
}

void Point::getX(){
    cout<<x;
}

void Point::getY(){
    cout<<y;
}

void Point::display(){
    cout<<"("<<x<<","<<y<<")"<<endl;
}

//Circle Subclass
class Circle: public Point{
	protected:
		float radius;
	
	public:
		Circle();
		Circle(float r, Point p);
		Circle(float r, int x, int y);
		void setRadius(float r);
		void getRadius();
		void Circumference();	
	};

//Circle Constructors
Circle::Circle(){
	radius = 0;
}
	
Circle::Circle(float r, Point p){
	radius = r;
}

Circle::Circle(float r, int x, int y){
	radius = r;
	this->x = x;
	this->x = x;
}

//Circle Methods
void Circle::setRadius(float r){
	radius = r;
}
	
void Circle::getRadius(){
	cout<<"Radius is "<<radius<<endl;
}
	
void Circle::Circumference(){
	float cir = 2 * M_PI * radius;
	cout<<"Circumference is "<<cir<<endl;
}

//Cylinder Subclass
class Cylinder:public Point {
	private:
		float height;
		
	public:
		Cylinder();
		Cylinder(float h, float r, Point p);
		Cylinder(float h, Circle c);
		Cylinder(float h, int r, int x, int y);
		void Area();
		void Volume();
};

//Cylinder Constructors
Cylinder::Cylinder():height(0){}

Cylinder::Cylinder(float h, float r, Point p):height(h){
	radius = r;
}

Cylinder::Cylinder(float h, Circle c):height(h){}

Cylinder::Cylinder(float h, int r, int a, int b):height(h){
	this->x = a;
	this->y = b;
	//this->radius = r;
}

//Cylinder Methods
void Cylinder::Area(){
	float area = 2 * M_PI * radius * (radius + height);
	cout<<"Area is "<<area<<endl;
}

void Cylinder::Volume(){
	float volume = M_PI * radius * radius * height;
	cout<<"Volume is "<<volume<<endl;
}

//Main Function
main()
{
    Point p(2,3);
    Circle c(4,p);

    c.getRadius();
    
    Cylinder cy(6.4,c);

    cy.Area();
    cy.Volume();
}
