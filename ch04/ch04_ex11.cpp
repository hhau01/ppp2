// ch04 ex11 pg. 129
// find all primes between 1 and 100

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
int main() {
    vector<int> primes;
    for (int i = 2; i < 100; i++) {
        if (is_prime(i)) {
            primes.push_back(i);
            cout << i << ' ';
        }
    }
    cout << endl;
    return 0;
}