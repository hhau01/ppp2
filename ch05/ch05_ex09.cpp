// ch05 ex09 pg 171
// read and store series of integers and then compute sum of first N integers
// modify exercise to output error is result cannot be represented as an int.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers;
    int N = 0, input = 0;
    cout << "Please enter the number of values you want to sum: ";
    try {
        cin >> N;
        if (cin.fail()) throw invalid_argument("Invalid input.");
    } catch (exception &e) {
        cerr << e.what() << endl;
        return 1;
    }
    cout << "Please enter some integers (enter '|' to stop): ";
    while (cin >> input) {
        numbers.push_back(input);
    }
    if (N > numbers.size()) throw invalid_argument("User asks for a sum of more numbers than there are in the vector.");
    try {
        int sum = 0;
        cout << "The sum of the first " << N << " numbers ( ";
        for (int i = 0; i < N; i++) {
            cout << numbers[i] << ' ';
            sum += numbers[i];
        }
        cout << ") is " << sum << "." << endl;
    } catch (exception &e) {
        cerr << e.what() << endl;
        return 1;
    }
    return 0;
}