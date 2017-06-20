// ch04 ex03 pg. 128
// distance between two cities along a given route
// print total distance, smallest distance, greatest distance, mean distance

// #include "../std_lib_facilities.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // *std::min_element, *std::max_element, std::accumulate

using namespace std;

void print_vec(const vector<double> & vec) {
    for (auto x: vec) {
        cout << x << ' ';
        // cout << x << '\n';
    }
    // cout << '\n';
}
int main() {
    vector<double> distances;
    // TODO: account for negative distances
    for (double temp; cin >> temp;) {
        distances.push_back(temp);
    }
    double total_distance = accumulate(distances.begin(), distances.end(), 0.0);
    cout << "Smallest distance: " << *min_element(distances.begin(), distances.end()) << "\n";
    cout << "Largest distance: " << *max_element(distances.begin(), distances.end()) << "\n";
    cout << "Total distance: " << total_distance << "\n";
    cout << "Mean distance: " << total_distance / distances.size() << "\n";
    cout << "Distances: ";
    print_vec(distances);
    cout << endl;
    return 0;
}