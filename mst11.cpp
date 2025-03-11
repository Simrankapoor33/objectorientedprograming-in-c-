#include <iostream>
using namespace std;
 int main() {
    char operation;
    double num1, num2;
    bool keepRunning = true;

    while (keepRunning) {
        cout << "Enter an operator (+, -, *, /) or 'q' to quit: ";
        cin >> operation;

        if (operation == 'q') {
            keepRunning = false;
            break;
        }

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (operation) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                goto end;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                goto end;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                goto end;
            case '/':
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero" << endl;
                goto end;
            default:
                cout << "Error: Invalid operator" << endl;
                goto end;
        }

        end:
        cout << "Do you want to perform another operation? (y/n): ";
        char choice;
        cin >> choice;
        if (choice == 'n' || choice == 'N') {
            keepRunning = false;
        }
    }

    cout << "Calculator exited." << endl;
    return 0;
}