// ch04 drill pg. 126

// #include "../std_lib_facilities.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // std::max, std::min
#include <limits> // std::numeric_limits

using namespace std;

int main() {
    double num_input = 0.0, smallest = numeric_limits<double>::infinity(), largest = -numeric_limits<double>::infinity(), sum = 0.0;
    string unit = "";
    bool is_valid = true;
    vector<double> values_entered;
    while (cin >> num_input >> unit) {
        // convert input to meters to compare
        if (unit == "cm") num_input /= 100;
        else if (unit == "m") num_input *= 1;
        else if (unit == "in") num_input *= 0.0254;
        else if (unit == "ft") num_input *= 0.0254 * 12;
        else is_valid = false;
        if (is_valid) {
            sum += num_input;
            smallest = min(smallest, num_input);
            largest = max(largest, num_input);
            values_entered.push_back(num_input);            
            cout << "The smallest so far: " << smallest << "m\n";
            cout << "The largest so far: " << largest << "m\n";
            cout << "The sum so far: " << sum << "m\n";
        } else {
            cout << "Illegal units: cm, m, in, ft only.\n";
            is_valid = true;
        }
    }
    // sort in increasing order
    sort(values_entered.begin(), values_entered.end());
    cout << "\nSmallest value: " << smallest << "m\n";
    cout << "Largest value: " << largest << "m\n";
    cout << "Total values entered: " << values_entered.size() << "\n";
    cout << "Total sum of values: " << sum << "m\n";
    cout << "Sorted values: ";

    for (auto x : values_entered) {
        cout << x << "m ";
    }
    cout << endl;
    return 0;
}