#include<iostream>
#include<string>
using namespace std;

class Teacher{ 
private:
    double salary;

public:
    Teacher(string n, string s, string d, double sal){
        name = n;
        subject = s;
        dept = d;
        salary = sal; 
    }
    string name;
    string subject;
    string dept; 
    

    void changeDept(string newdept){
        dept = newdept;
    }
    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Department: " << dept << endl;
        cout << "Salary: " << salary << endl;
    }

};

int main(){
    Teacher t1("Siddharth", "Maths", "CSE", 50000);
    t1.getInfo();

    return 0;
}