// ch05 ex10 pg 171
// modify ex08 to use double instead of int. Also make a vector of doubles containing N-1 differences between adjacent values and write out that vector of differences

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double> numbers, differences;
    double input = 0.0, difference = 0.0;
    int N = 0;
    cout << "Please enter the number of values you want to sum: ";
    try {
        cin >> N;
        if (cin.fail()) throw invalid_argument("Invalid input.");
    } catch (exception &e) {
        cerr << e.what() << endl;
        return 1;
    }
    cout << "Please enter some numbers (enter '|' to stop): ";
    while (cin >> input) {
        numbers.push_back(input);
    }
    if (N > numbers.size()) throw invalid_argument("User asks for a sum of more numbers than there are in the vector.");
    try {
        double sum = 0.0;
        cout << "The sum of the first " << N << " numbers ( ";
        for (int i = 0; i < N; i++) {
            cout << numbers[i] << ' ';
            sum += numbers[i];
            if (i != 0) {
                difference = numbers[i] - numbers[i-1];
                differences.push_back(difference);
            }
        }
        cout << ") is " << sum << "." << endl;
        cout << "The difference between each value is: ";
        for (auto x : differences) {
            cout << x << ' ';
        }
        cout << endl;
    } catch (exception &e) {
        cerr << e.what() << endl;
        return 1;
    }
    return 0;
}