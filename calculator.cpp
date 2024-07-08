#include <iostream>
using namespace std;

int main() {
    
    double num1 = 0;
    double num2 = 0;
    double sum = 0;
    string option = "";
    char op = '+';
    bool validOperator = false;


    cout << "Welcome to the calculator" << endl;
    
    cout << "Please enter your first value: ";
    cin >> num1;
    
    while (!validOperator){
        
    cout << "Please enter the operator: " <<endl;
    cin >> op;

    if (op == '+' || op == '-' || op == '*' || op == '/') {
        validOperator = true;
    } else {
        cout << "Please enter a valid operator" <<endl;
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
    } 

    


    cout << sum;

    return 0;
}