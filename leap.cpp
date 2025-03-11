#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    switch ((year % 4 == 0) + (year % 100 == 0) + (year % 400 == 0) * 2) {
        case 0:
            cout << year << " is not a leap year." << endl;
            break;
        case 1:
            cout << year << " is a leap year." << endl;
            break;
        case 2:
            cout << year << " is not a leap year." << endl;
            break;
        case 3:
            cout << year << " is a leap year." << endl;
            break;
    }

    return 0;
}