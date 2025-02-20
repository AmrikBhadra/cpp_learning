#include<iostream>
using namespace std;

class Car{
    public:
        string name, color;
        double price;

    public:
        void showDetails(){
            cout << "Name: " << name << endl; 
            cout << "Color: " << color << endl; 
            cout << "Price: " << price << endl; 
            cout << endl;
        }
};

int main(){
    // create object
    Car audi;

    // creating multiple objects
    Car bmw, mercedes;

    // providing values for attributes of the object
    audi.name = "A8";
    audi.color = "white";
    audi.price = 2845897.00;

    bmw.name = "M4";
    bmw.color = "royal blue";
    bmw.price = 4590997.00;

    mercedes.name = "GLA-A5";
    mercedes.color = "white";
    mercedes.price = 8899780.00;

    // calling method of the object
    audi.showDetails();
    bmw.showDetails();
    mercedes.showDetails();

    return 0;
}