// ch03 exercise 10 pg. 86
// operation followed by two operands and outputs the results
// eg. + 100 3.14
// eg. * 4 5

// #include "../std_lib_facilities.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Enter operation followed by two operands (eg. + 100 3.14): ";
    string operation = "";
    double operand1 = 0.0, operand2 = 0.0, result = 0.0;
    cin >> operation >> operand1 >> operand2;
    if (operation == "+" || operation == "plus") result = operand1 + operand2;
    else if (operation == "-" || operation == "minus") result = operand1 - operand2;        
    else if (operation == "*" || operation == "mul") result = operand1 * operand2;        
    else if (operation == "/" || operation == "div") result = operand1 / operand2;        
    cout << "The result is: " << result << endl;
    return 0;
}