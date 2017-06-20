// ch04 ex06 pg. 129
// USING INTS 2^x grains of rice until 1000, 1000000, 1000000000

// #include "../std_lib_facilities.h"
#include <iostream>
#include <vector>

using namespace std;

const int num_of_squares = 64;

// void print_vec(const vector<int> & vec) {
//     for (auto x : vec) {
//         cout << x << ' ';
//     }
//     cout << endl;
// }

int main() {
    // vector<int> grain_vector;
    int grains = 1, thousand = 0, million = 0, billion = 0;
    // grain_vector.push_back(grains);
    // 64 squares - overflow after 30 squares
    for (int i = 1; i < num_of_squares; i++) {
        // int to keep track of which square you are on (i)
        // int to keep the number of grains on the current square (grains)
        // int to keep track of the grains on all previous squares (grain_vector)
        grains <<= 1;
        // grain_vector.push_back(grains);
        if (grains >= 1000 && thousand == 0) thousand = i;
        else if (grains >= 1000000 && million == 0) million = i;
        else if (grains >= 1000000000 && billion == 0) billion = i;
    }
    cout << "Thousand grains reached at " << thousand << " squares." << endl;
    cout << "Million grains reached at " << million << " squares." << endl;
    cout << "Billion grains reached at " << billion << " squares." << endl;
    // cout << "Grain Vector: ";
    // print_vec(grain_vector);
    return 0;
}