// ch04 ex06 pg. 128
// convert digits to corresponding spelled-out value and vice-versa

// #include "../std_lib_facilities.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> strings = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<string>::iterator it;
    cout << "Enter a number (0-9): ";
    int int_input = 0;
    cin >> int_input;
    if (int_input >= 0 && int_input <= 9) cout << strings[int_input] << endl;
    else cout << "Please enter a number (0-9)." << endl;
    cout << "Enter a number (zero-nine): ";
    string str_input = "";
    cin >> str_input;
    it = find(strings.begin(), strings.end(), str_input);
    if (it != strings.end()) {
        auto pos = it - strings.begin();
        cout << pos << endl;
    } else cout << "Please enter a number (zero-nine)." << endl;
    return 0;
}