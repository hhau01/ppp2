// ch04 ex17 pg 130
// find the mode that appears in a sequence of strings

// #include "../std_lib_facilities.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string find_mode(vector<string> & vec) {
    string mode = "";
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
    vector<string> seq = {"a", "b", "b", "a", "a", "b", "a", "a", "c"};
    // sort(seq.begin(), seq.end());
    for (auto x : seq) {
        cout << x << ' ';
    }
    cout << endl;
    cout << "Min: " << seq.front() << endl;
    cout << "Max: " << seq.back() << endl;
    cout << "Mode: " << find_mode(seq) << endl;

    return 0;
}