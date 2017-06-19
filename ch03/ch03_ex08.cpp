// ch03 exercise 8 pg. 86
// determine if integer is odd or even

// #include "../std_lib_facilities.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Enter an integer: ";
    int number = 0;
    cin >> number;
    string oddeven = "";
    if (number & 1) {
        oddeven = "odd";
    } else {
        oddeven = "even";
    }
    cout << "The value " << number << " is an " << oddeven << " number." << endl;
    return 0;
}