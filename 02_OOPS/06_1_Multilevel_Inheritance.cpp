/*
    - class inherit from a class which is itself derived from another class
    - code reusability, allowing to access members from multiple levels
*/

#include<iostream>
using namespace std;

class Parent{
    public:
    void greetings(){
        cout << "Hello, Parent class Here" << endl;
    }
};

class ChildA : public Parent{
    public:
    void signOut(){
        cout << "Good Night, Child A signing off" << endl;
    }
};

class ChildB : public ChildA{
    public:
    void signOut(){
        cout << "Good Night, Child B Signing Off" << endl;
    }
};



int main() {
    ChildB cb;
    cb.greetings();
    cb.signOut();
    // cb.signOutAgain();
    return 0;
}