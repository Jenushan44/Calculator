#include <iostream>
#include<cmath>
using namespace std;

int main() {
    
    double num1 = 0;
    double num2 = 0;
    double sum = 0;
    string option = "";
    char op = '+';
    bool validNum1 = false;
    bool validOperator = false;
    char again = 'y';

    while (again == 'Y' || again == 'y') {
    cout << "Welcome to the calculator" << endl;
    
    cout << "Please enter your first value: ";
    cin >> num1;

    while (!validOperator){
        
        cout << "Please enter the operator (+ , - , / , *, ^, %) : " <<endl;
        cin >> op;

        if (op == '+' || op == '-' || op == '*' || op == '/' || op == '^' || op == '%') {
            validOperator = true;
        } else {
            cout << "Please enter a valid operator!" <<endl;
        }
    }

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
    } else if (op == '^') {
        sum = pow(num1, num2);
    } 

    cout << sum <<endl;

    cout << "Would you like to use the calculator again? (y/n): ";
    cin >> again;

    validOperator = false;
    }

    cout << "Thank you for using the calculator";

    return 0;
}
