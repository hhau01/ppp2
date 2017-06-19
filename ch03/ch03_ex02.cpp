// ch03 exercise 2 pg. 85
// convert miles to kilometers 
// hint: 1.609 km to 1 mile

// #include "../std_lib_facilities.h"
#include <iostream>

using namespace std;

constexpr double km_per_mile = 1.609;

int main() {
    cout << "Please enter the amount of miles you want to convert: ";
    double miles = 0.0;
    cin >> miles;
    double kilometers = miles * km_per_mile;
    cout << miles << " miles = " << kilometers << " kilometers" << endl;
    return 0;
}