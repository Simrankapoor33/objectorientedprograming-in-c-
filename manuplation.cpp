#include <iostream>
#include <cstring>
#include<string>
using namespace std;

void copyString(char *dest, const char *src) {
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; // Null-terminate the destination string
}

int compareString(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}

void concatenateString(char *dest, const char *src) {
    while (*dest) {
        dest++;
    }
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; // Null-terminate the destination string
}

void toggleCase(char *str) {
    while (*str) {
        if (islower(*str))
            *str = toupper(*str);
        else if (isupper(*str))
            *str = tolower(*str);
        str++;
    }
}

void reverseString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str1[100], str2[100];
    int choice;

    cout << "Enter the first string: ";
    cin.getline(str1, 100);

    cout << "Enter the second string: ";
    cin.getline(str2, 100);

    cout << "Choose an operation:\n";
    cout << "1. Copy string\n";
    cout << "2. Compare strings\n";
    cout << "3. Concatenate strings\n";
    cout << "4. Toggle case\n";
    cout << "5. Reverse string\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore(); // To ignore the newline character left in the buffer

    switch (choice) {
        case 1:
            copyString(str1, str2);
            cout << "String after copying: " << str1 << endl;
            break;
        case 2:
            int result;
            result = compareString(str1, str2);
            if (result == 0) {
                cout << "Strings are equal." << endl;
            } else if (result < 0) {
                cout << "First string is less than second string." << endl;
            } else {
                cout << "First string is greater than second string." << endl;
            }
            break;
        case 3:
            concatenateString(str1, str2);
            cout << "String after concatenation: " << str1 << endl;
            break;
        case 4:
            toggleCase(str1);
            cout << "String after case toggling: " << str1 << endl;
            break;
        case 5:
            reverseString(str1);
            cout << "String after reversing: " << str1 << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}