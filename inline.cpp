#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    int number;
    cout << "Enter a number to find its square: ";
    cin >> number;

    cout << "The square of " << number << " is " << square(number) << endl;

    return 0;
}