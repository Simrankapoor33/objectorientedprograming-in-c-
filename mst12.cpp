//swaping of two numbers using pointer
#include<iostream>
using namespace std;
int main() {
    int a, b, *p1 = &a, *p2 = &b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;
    cout << "Before swapping:" << endl << "*p1: " << *p1 << " *p2: " << *p2 << endl;

    // Swapping without using a third variable
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;

    cout << "After swapping:" << endl << "*p1: " << *p1 << " *p2: " << *p2 << endl;
    return 0;
}