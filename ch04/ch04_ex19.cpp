// ch04 ex19 pg 130
// enter set of name-value pairs, add name to names vector and number to scores vector

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<string> names;
    vector<int> scores;
    string name = "";
    int score = 0;
    while (true) {
        cin >> name >> score;
        // unique names only
        if (name == "NoName" && score == 0) break;
        if (find(names.begin(), names.end(), name) != names.end()) {
            cout << "Error: " << name << " already exists." << endl;
            break;
        } else {
            names.push_back(name);
            scores.push_back(score);
        }
    }
    for (int i = 0; i < names.size(); i++) {
        cout << names[i] << ' ' << scores[i] << endl;
    }
    return 0;
}