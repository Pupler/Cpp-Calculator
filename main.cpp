#include <iostream>
using namespace std;

int main() {
    double FirstNumber;
    double SecondNumber;


    cout << "====CALCULATOR====" << endl;
    cout << "Enter first number: ";
    cin >> FirstNumber;

    if (cin.fail()) {
        cout << "Error ocurred!" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        return 1;
    } else {
        // for later
    }

    cout << "Enter second number: ";
    cin >> SecondNumber;

    if (cin.fail()) {
        cout << "Error ocurred!" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        return 1;
    } else {
        // for later
    }

    cout << "Your numbers: " << FirstNumber << " and " << SecondNumber << endl;
}