#include <iostream>
#include <string>
using namespace std;

// Base class 1
class Employee {
    int ecode;
    string ename;

protected:
    float salary;

public:
    void getEmployeeData() {
        cout << "\nEnter employee name, code, and salary: ";
        cin >> ename >> ecode >> salary;
    }

    void displayEmployeeData() {
        cout << "\nEmployee Name: " << ename;
        cout << "\nEmployee Code: " << ecode;
        cout << "\nSalary: " << salary << endl;
    }
};

// Base class 2
class Department {
protected:
    string department;

public:
    void getDepartmentData() {
        cout << "Enter department: ";
        cin >> department;
    }

    void displayDepartmentData() {
        cout << "Department: " << department << endl;
    }
};

// Derived class (inherits from both Employee and Department)
class TeamLead : public Employee, public Department {
    int teamSize;

public:
    void getTeamLeadData() {
        getEmployeeData();
        getDepartmentData();
        cout << "Enter team size: ";
        cin >> teamSize;
    }

    void displayTeamLeadData() {
        displayEmployeeData();
        displayDepartmentData();
        cout << "Team Size: " << teamSize << endl;
    }
};

int main() {
    TeamLead lead;
    lead.getTeamLeadData();
    lead.displayTeamLeadData();
    return 0;
}