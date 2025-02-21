/*
    - Inheritance means getting (inheriting) attributes and methods of one class into another class
    - Two category of classes in inheritance
        1. Parent Class/Base class/Super Class: class which is going to be inherited by others
        2. Child Class/Derived class/Sub class: class which inherits its parent class

    - ':' symbol is used to inherit one class members into another
    - It enables code reusability by reusing attributes and methods from existing classes
*/

#include<iostream>
using namespace std;

class Vehicle{
    public:
    string vehicleName;
    string vehicleType;

    public:
    void saveInfo();
};

class Bike : public Vehicle{
    public:
    void saveInfo(){
        vehicleName = "Bike";
        vehicleType = "Two wheeler";
    }

    void display(){
        cout << vehicleName << " - " << vehicleType << endl;
    }
};

int main(){
    Bike b1;
    b1.saveInfo();
    b1.display();

    return 0;
}