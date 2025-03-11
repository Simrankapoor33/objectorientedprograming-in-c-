#include <iostream>
using namespace std;

class Two; // Forward declaration

class One {
    int m;
public:
    void getdata() {
        cout << "Enter the value of m: ";
        cin >> m;
    }
    friend int sum(One, Two);
};

class Two {
    int n;
public:
    void Getdata() {
        cout << "Enter the value of n: ";
        cin >> n;
    }
    friend int sum(One, Two);
};

int sum(One a, Two b) {
    return (a.m + b.n);
}

int main() {
    One x;
    Two y;
    x.getdata();
    y.Getdata();
    cout << "The sum is: " << sum(x, y) << endl;
    return 0;
}