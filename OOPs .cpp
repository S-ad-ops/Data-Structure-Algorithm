#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    //private properties
    int salary;

public:
    //properties 
    string name;
    string dept;
    string subject;

    //methods/member functions
    void changedept(string newdept){
        dept = newdept;
    }
    //setter
    void setSalary(int S){
        Salary = s;
    }
    void getSalary(){
        return Salary;
    }
};

int main(){
    Teacher t1;
    Teacher t2;
    Teacher t3;
    Teacher t4;
    t1.name = "Siddharth";
    t1.dept = "CSE";
    t1.subject = "Maths";
    t1.setSalary(50000);  

    cout << "Teacher 1 details: " << endl;
    cout << "Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: " << t1.getSalary() << endl;
    return 0;
}