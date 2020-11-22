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
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};

main()
{
    Point p1;

    p1.display();
    p1.setX(2);
    p1.setY(3);
    p1.display();

    Point p2(5,2);

    p2.display();
    p2.setX(6);
    p2.setY(3);
    p2.display();
}
