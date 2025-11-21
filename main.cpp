#include <iostream>
using namespace std;

int main() {
    double firstNumber;
    double secondNumber;
    char operation;


    cout << "====CALCULATOR====" << endl;
    cout << "Enter first number: ";
    cin >> firstNumber;

    if (cin.fail()) {
        cout << "Error ocurred!" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        return 1;
    }

    cout << "Enter second number: ";
    cin >> secondNumber;

    if (cin.fail()) {
        cout << "Error ocurred!" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        return 1;
    }

    cout << "Your numbers: " << firstNumber << " and " << secondNumber << endl;
    cout << "Which operation would you like?(+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        double result;

        case '+':
            result = firstNumber + secondNumber;
            cout << result << endl;
            break;
        case '-':
            result = firstNumber - secondNumber;
            cout << result << endl;
            break;
        case '*':
            result = firstNumber * secondNumber;
            cout << result << endl;
            break;
        case '/':
            result = firstNumber / secondNumber;
            cout << result << endl;
            break;
        default:
            cout << "Invalid operation!" << endl;
            break;
    }
}