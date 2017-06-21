// ch04 ex13 pg. 130
// find all primes between 1 and given 100 using "Sieve of Eratosthenes" method
// 
//  From Wikipedia "Sieve of Eratosthenes" : https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
// 
//  (1) To find all the prime numbers less than or equal to a given integer n by Eratosthenes' method:
//  (2) Create a list of consecutive integers from 2 through n: (2, 3, 4, ..., n).
//  (3) Initially, let p equal 2, the smallest prime number.
//  (4) Enumerate the multiples of p by counting to n from 2p in increments of p, and mark them in the list (these will be 2p, 3p, 4p, ...; the p itself should not be marked).
//  (5) Find the first number greater than p in the list that is not marked. If there was no such number, stop. Otherwise, let p now equal this new number (which is the next prime), and repeat from step 3.
//  (6) When the algorithm terminates, the numbers remaining not marked in the list are all the primes below n.

// #include "../std_lib_facilities.h"
#include <iostream>
#include <vector>
#include <algorithm> // std::fill
#include <math.h> // std::sqrt, std::pow

using namespace std;

// INPUT: an integer n > 1
const int N = 100;

int main() {
    // Array of boolean values, index by integers 2 to n, all set to true
    vector<int> A(N);
    fill(A.begin(), A.end(), 1);
    // just set first two to 0
    A[0] = 0;
    A[1] = 0;

    // DO SIEVE OF ERATOSTHENES ALGORITHM HERE:

    // for i = 2, 3, 4, ..., not exceeding sqrt(n):
    // if A[i] is true:
    // for j = i^2, i^2+i, i^2+2i, i^2+3i, ..., not exceeding n:
    // A[j] := false
    // Output: all i such that A[i] is true
    for (int i = 2; i <= sqrt(N); i++) {
        if (A[i] == 1) {
            int c = 0;
            int j = pow(i, 2.0);
            while (j < N) {
                A[j] = 0;
                c++;
                j = pow(i, 2.0)+c*i;
            }
        }
    }
    
    // PRINT VECTOR
    for (int i = 0; i < A.size(); i++) {
        if (A[i] == 1) cout << i << ' ';
    }
    cout << endl;

    return 0;
}