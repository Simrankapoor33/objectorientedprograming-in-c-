#include <iostream>
#include <string>
using namespace std;

// Base class
class Employee {
    int ecode;
    string ename;

protected:
    float salary;

public:
    void getData() {
        cout << "\nEnter employee name, code, and salary: ";
        cin >> ename >> ecode >> salary;
    }

    void displayData() {
        cout << "\nEmployee Name: " << ename;
        cout << "\nEmployee Code: " << ecode;
        cout << "\nSalary: " << salary << endl;
    }
};

// Derived class
class Manager : public Employee {
    string department;

public:
    void getManagerData() {
        getData();
        cout << "Enter department: ";
        cin >> department;
    }

    void displayManagerData() {
        displayData();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager mgr;
    mgr.getManagerData();
    mgr.displayManagerData();
    return 0;
}


