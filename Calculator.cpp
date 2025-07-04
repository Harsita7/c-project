#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    int choice;

    cout << "===== Simple Calculator =====\n";
    cout << "Select operation:\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "\nEnter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch (choice) {
        case 1:
            cout << "\nResult: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
            break;
        case 2:
            cout << "\nResult: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
            break;
        case 3:
            cout << "\nResult: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
            break;
        case 4:
            if (num2 != 0)
                cout << "\nResult: " << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
            else
                cout << "\nError: Division by zero is not allowed!" << endl;
            break;
        default:
            cout << "\nInvalid choice. Please enter a number from 1 to 4." << endl;
    }

    return 0;
}