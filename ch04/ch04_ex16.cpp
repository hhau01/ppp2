// ch04 ex16 pg 130
// find the mode - the number that appears the most times in a sequence

// #include "../std_lib_facilities.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int find_mode(vector<int> & vec) {
    int mode = 0;
    if (vec.size() > 1) {
        sort(vec.begin(), vec.end());
        int start = 0, end = 0, lg_window = 0;
        mode = vec[0];
        for (int i = 1; i < vec.size(); i++) {
            if (vec[i] != vec[i-1] || i == vec.size()-1) {
                end = i;
                if (i == vec.size()-1) end += 1;
                if (end - start > lg_window) {
                    lg_window = end - start;
                    mode = vec[i-1];
                }
                start = i;
            }
        }
    }
    return mode;
}

int main() {
    vector<int> seq = {9, 8, 7, 1, 9, 9, 9, 9, 9, 9, 1, 2, 3, 3, 3};
    for (auto x : seq) {
        cout << x << ' ';
    }
    cout << endl;
    cout << "Mode: " << find_mode(seq) << endl;

    return 0;
}