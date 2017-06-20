// ch04 ex07 pg. 129
// simple calculator modified(takes digits or strings) - [number] [operator] [number] 
// eg. 35.6 + 24.1
// output: The sum of 35.6 and 24.1 is 59.7

// #include "../std_lib_facilities.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> strings = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int get_number() {
    int num;
    if (cin >> num) return num;
    cin.clear();
    string str;
    cin >> str;
    for (int i = 0; i < strings.size(); i++) {
        if (str == strings[i]) return i;
    }
    return -1;
}
int main() {
    cout << "Simple calculator modified(+, -, *, /)\n[num] [oper] [num] (num can be spelled out (zero-nine))\nEnter three arguments: ";
    int num1, num2;
    char operation = 0;
    while (true) {
        num1 = get_number();
        if (num1 == -1) break;        
        cin >> operation;
        num2 = get_number();
        if (num2 == -1) break;        
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