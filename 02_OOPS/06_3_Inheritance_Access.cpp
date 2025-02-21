#include<iostream>
using namespace std;

class Employee{
    protected:
    int salary;
    void displaySal()
    {
        cout << "Salary: " << salary << endl;
    }
};

class Manager : public Employee{
    public:
    void setSalary(int s){
        salary = s;
    }
    void show(){
        displaySal();
    }

};

int main() {
    Manager mg;
    mg.setSalary(234000);
    mg.show();
    return 0;
}