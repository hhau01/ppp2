// ch04 ex15 pg. 130
// takes an input value n and then finds the first n primes

// #include "../std_lib_facilities.h"
#include <iostream>
#include <vector>

using namespace std;

bool is_prime(int n) {
    if (n == 2) return true;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void print_vec(const vector<int> & vec, int n) {
    for (int i = 0; i < n; i++) {
        cout << vec[i] << ' ';
    }
    cout << endl;
}

int main() {
    vector<int> primes;
    int n = 0;
    int i = 2;
    cout << "How many primes would you like to print? ";
    while (cin >> n) {
        if (n > primes.size()) {
            // get more primes
            while (true) {
                if (is_prime(i)) {
                    primes.push_back(i);
                    if (primes.size() > n) {
                        print_vec(primes, n);
                        break;
                    }
                }
                i++;
            }
        } else {
            // print vec
            print_vec(primes, n);
        }
    }
    return 0;
}