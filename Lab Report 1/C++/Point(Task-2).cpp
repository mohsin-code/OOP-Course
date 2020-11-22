#include<iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;
public:
    Point(){
        x = 0;
        y = 0;
    }

    Point(int x,int y){
        this->x = x;
        this->y = y;
    }

    void setX(int x){
        this->x = x;
    }

    void setY(int y){
        this->y = y;
    }

    void getX(){
        cout<<x;
    }

    void getY(){
        cout<<y;
    }

    void display(){
        cout<<"("<<x<<","<<y<<")";
    }
};

main()
{
    Point p1(2,3);
    
    p1.getX();
    p1.getY();
    p1.setX(15);
    p1.setY(21);
    cout<<"The final coordinates are";
    p1.display();
}
