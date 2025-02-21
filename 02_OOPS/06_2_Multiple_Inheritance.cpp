#include<iostream>
using namespace std;

// base class 1
class Father{
    public:
    string fatherName;
    void setFatherInfo(){
        fatherName = "Ajay Bhadra";
    }
    void sayHello(){
        cout << "\nHello I am father" << endl;
    }
};


// base class 2
class Mother{
    public:
    string motherName;
    void setMotherInfo(){
        motherName = "Kakali Bhadra";
    }
    void sayHello(){
        cout << "\nHello I am Mother" << endl;
    }
};

class Child : public Father, public Mother{
    public:
    void displayParentInfo(){
        setFatherInfo();
        setMotherInfo();

        cout << "Hello I am Amrik Bhadra. \nFollowing are my Parents Name:\n";
        cout << "1. " << fatherName << "\n2. " << motherName << endl;
    }

    void show(){
        // sayHello();    // this will cause ambiguity as both parent class have same function

        // so use ::
        Father :: sayHello();
        Mother :: sayHello(); 

        // similarly we can do for attribute
    }
};

int main() {
    Child ch;
    ch.displayParentInfo();
    ch.show();
    return 0;
}