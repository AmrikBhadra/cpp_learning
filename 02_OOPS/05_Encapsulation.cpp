/*
    - Encapsulation means hiding sensitive data from the users
    - wrapping of attributes and methods
    - so give the members an access specifier 'private'

    - if you want to access those members then create public setters and getters

    - it increases data security
*/

#include<iostream>
using namespace std;

class Student{
    private:
        string name;
        int age;

    public:
        void setName(string name){
            this->name = name;
        }

        string getName(){
            return name;
        }

        void setAge(int age){
            this->age = age;
        }

        int getAge(){
            return age;
        }
};

int main(){
    Student s1;
    string name = "Amrik Bhadra";
    int age = 21;

    s1.setName(name);
    s1.setAge(age);
    
    cout << "Name: " << s1.getName() << "\nAge: " << s1.getAge() << endl;
    return 0;
}
