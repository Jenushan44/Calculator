#include <iostream>
using namespace std;

int main() {
    
    double num1 = 0;
    double num2 = 0;
    double sum = 0;
    char op = '+';

    cout << "Welcome to the calculator" << endl;
    
    cout << "Please enter your first value: ";
    cin >> num1;
    
    cout << "Please enter the operator: ";
    cin >> op;

    cout << "Please enter your second value: ";
    cin >> num2;

    if (op == '+') {
        sum = num1 + num2;
    } else if (op == '-') {
        sum = num1 - num2;
    } else if (op == '*') {
        sum = num1 * num2;
    } else if (op == '/') {
        sum = num1 / num2;
    }

    cout << sum;

    return 0;
}