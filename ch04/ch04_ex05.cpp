// ch04 ex05 pg. 128
// simple calculator - [double] [operator] [double] 
// eg. 35.6 + 24.1
// output: The sum of 35.6 and 24.1 is 59.7

// #include "../std_lib_facilities.h"
#include <iostream>

using namespace std;

int main() {
    cout << "Simple calculator (+, -, *, /)\nEnter three arguments [num] [oper] [num]: ";
    double num1, num2;
    char operation = 0;
    while (cin >> num1 >> operation >> num2) {
        switch(operation) {
            case '+':
                cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << ".\n";
                break;
            case '-':
                cout << "The difference of " << num1 << " and " << num2 << " is " << num1 - num2 << ".\n";
                break;
            case '*':
                cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2 << ".\n";
                break;
            case '/':
                cout << "The quotient of " << num1 << " and " << num2 << " is " << num1 / num2 << "\n";
                break;
            default:
                cout << "ERROR: Illegal operation (+, -, *, / only)\n";
        }
    }
    return 0;
}