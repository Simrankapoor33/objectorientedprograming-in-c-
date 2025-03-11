#include <iostream>
using namespace std;
    
    int main() {
        int num, c = 0, i;
        cout << "Enter the number you want to check: ";
        cin >> num;
    
        if (num <= 1) {
            cout << "The number you entered is not a prime number." << endl;
            return 0;
        }
    
        for (i = 2; i <= num - 1; i++) {
            if (num % i == 0)
                c++;
        }
    
        if (c != 0) {
            cout << "The number you entered is not a prime number." << endl;
        } else {
            cout << "The number you entered is a prime number." << endl;
        }
    return 0;
}
