#include<iostream>
using namespace std;

class Heater
{
private:
    int temprature;
public:
    Heater(){
        temprature = 15;
    }

    void warmer(){
        temprature += 5;
    }

    void cooler(){
        temprature -= 5;
    }

    void getTemp(){
        cout<<"The Temprature is: "<<temprature<<endl;
    }
};

main()
{
    Heater h1;      //Create h1 Heater

    h1.getTemp();   //Get h1's temprature
    h1.warmer();    //h1 Heater is cooled
    h1.getTemp();   //get h1's temprature after cooling
    h1.cooler();
    h1.getTemp();

    Heater h2;      //Create h2 Heater

    h2.getTemp();   //get  h2's temprature
    h2.cooler();    //h2 Heater is warmed
    h2.cooler();
    h2.cooler();
    h2.cooler();
    h2.cooler();
    h2.getTemp();   //get h2 Heater's temprature after cooling
    //Oh it is below freezing
}
