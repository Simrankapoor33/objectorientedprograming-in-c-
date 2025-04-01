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

// Derived class (Intermediate)
class Manager : public Employee {
protected:
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

// Further derived class
class TeamLead : public Manager {
    int teamSize;

public:
    void getTeamLeadData() {
        getManagerData();
        cout << "Enter team size: ";
        cin >> teamSize;
    }

    void displayTeamLeadData() {
        displayManagerData();
        cout << "Team Size: " << teamSize << endl;
    }
};

int main() {
    TeamLead lead;
    lead.getTeamLeadData();
    lead.displayTeamLeadData();
    return 0;
}
