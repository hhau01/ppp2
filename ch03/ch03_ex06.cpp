// ch03 exercise 6 pg. 86
// enter three integers and then return them sorted separated by commas
// eg. 10 4 6, the output should be 4, 6, 10

// #include "../std_lib_facilities.h"
#include <iostream>
#include <vector>
#include <algorithm> // std::copy, std::sort
#include <iterator> // std::ostream_iterator
#include <string>
#include <sstream> // std::ostringstream

using namespace std;

int main() {
    cout << "Please enter three integers: ";
    vector<int> v_array;
    int count = 0;
    int temp = 0;
    while (count < 3) {
        cin >> temp;
        v_array.push_back(temp);
        ++count;
    }
    // std::sort
    sort(v_array.begin(), v_array.end());

    // std::ostringstream
    ostringstream oss;

    // should check if v_array is empty before v_array.end() - 1
    // std::copy, std::ostream_iterator
    copy(v_array.begin(), v_array.end() - 1, ostream_iterator<int>(oss, ", "));
    oss << v_array.back();

    cout << "Sorted(ascending): " << oss.str() << endl;
    return 0;
}