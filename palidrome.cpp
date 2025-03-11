#include<iostream>
#include<string>
using namespace std;
    
    int main() {
        string str, reversedStr;
        cout << "Enter the string you want to check: ";
        getline(cin, str); // Use getline to read the entire line including spaces
    
        reversedStr = string(str.rbegin(), str.rend()); // Reverse the string
    
        if (str == reversedStr) {
            cout << "The string you entered is a palindrome." << endl;
        } else {
            cout << "The string you entered is not a palindrome." << endl;
        }
    
        return 0;
    }