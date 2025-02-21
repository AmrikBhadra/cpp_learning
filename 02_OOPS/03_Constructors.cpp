#include<bits/stdc++.h>
using namespace std;

int empId = 1; // global variable

class Employee{
    public:
        string name, department;
        int age;
        long long phnNo;
        int employeeId;

        // default constructor
        Employee(){
            name = "";
            department = "";
            age = 0;
            phnNo = 0;
            employeeId = empId++;
        }

        // parameterised constructor
        Employee(string name, string department, int age, long long phnNo){
            this->name = name;
            this->department = department;
            this->age = age;
            this->phnNo = phnNo;
            employeeId = empId++;
        }


        void displayEmployeeInfo(){
            cout << "Employee Info:" << endl;
            cout << "\tEmployee Id: " << employeeId << endl;
            cout << "\tName: " << name << endl;
            cout << "\tDepartment: " << department << endl;
            cout << "\tAge: " << age << endl;
            cout << "\tPhone No: " <<phnNo << endl;
        }

};

int main() {
    Employee emp1;
    Employee emp2("Amrik Bhadra", "Cloud", 21, 7739226540);
    emp1.name = "Srivaths Iyer";
    emp1.department = "DevOps";
    emp1.age = 20;
    emp1.phnNo = 9876945378;

    emp1.displayEmployeeInfo();
    emp2.displayEmployeeInfo();
    return 0;
}