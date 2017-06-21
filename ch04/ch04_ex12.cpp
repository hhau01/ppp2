// ch04 ex12 pg. 130
// find all primes between 1 and given number

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
void find_primes(int max) {
    for (int i = 2; i <= max; i++) {
        if (is_prime(i)) cout << i << ' ';
    }
}
int main() {
    int number = 0;
    while (cin >> number) {
        find_primes(number);
        cout << endl;
    }
    return 0;
}