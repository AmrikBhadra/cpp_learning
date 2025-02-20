#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name, branch;
        long long prn;
        int age;
        char gender;

    public:

        // method inside class
        void registerStudent(string name, long long prn, int age, char gender){
            this->name = name;
            this->prn = prn;
            this->age = age;
            this->gender = gender;

            cout << "Student Registered Successfully!" << endl;
        }

        // first must declare the method inside class to define it outside the class
        void displayStudentInfo();
};

// define method outside class
void Student :: displayStudentInfo(){
    cout << "\nStudent Information:-" << endl;
    cout << "Name: " << name << endl;
    cout << "Prn: " << prn << endl;
    cout << "Age: " << age << endl;
    cout << "Gender: " << gender << endl;
}

int main() {
    Student s1;
    s1.registerStudent("Amrik Bhadra", 202201040021, 21, 'M');
    s1.displayStudentInfo();

    return 0;
}