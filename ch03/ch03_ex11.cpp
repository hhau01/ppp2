// ch03 exercise 11 pg. 86-87
// prompt user for pennies, nickels, dimes, quarters, half dollars and one dollar coins and then output the total

// #include "../std_lib_facilities.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // std::accumulate

using namespace std;

int main() {
    vector<string> coins = {"pennies", "nickels", "dimes", "quarters", "half dollars", "one dollar coins"};
    vector<int> amounts;
    vector<int> values = {1, 5, 10, 25, 50, 100};
    int temp;
    for (int i = 0; i < coins.size(); i++) {
        cout << "How many " << coins[i] << " do you have? ";
        cin >> temp;
        amounts.push_back(temp);
        values[i] *= temp;
    }
    cout << endl;
    for (int i = 0; i < coins.size(); i++) {
        cout << "You have " << amounts[i] << " " << coins[i] << ".\n";
    }
    cout << endl;    
    double total = accumulate(values.begin(), values.end(), 0.0);
    cout << "The total value of your coins is ";
    if (total >= 100) {
        total /= 100;
        cout << "$" << total << "." << endl;
    } else {
        cout << total << " cents." << endl;
    }
    return 0;
}