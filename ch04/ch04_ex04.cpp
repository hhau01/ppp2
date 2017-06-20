// ch04 ex04 pg. 128
// number guessing game 1 - 100, 7 iterations to guess

// #include "../std_lib_facilities.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int iteration = 0;
    int guess = 50, the_floor = 1, the_ceiling = 100;
    char answer = 0;
    while (iteration < 7) {
        cout << "Is the number you're thinking of less than " << guess << "?\n";
        // hacky way to guess 100
        if (guess == 99) {
            guess = 100;
            the_floor = 100;
            the_ceiling = 100;
        }
        cin >> answer;
        // TODO: check for other answers
        if (answer == 'y') the_ceiling = guess;
        else the_floor = guess;           
        guess = (the_ceiling + the_floor) / 2;
        cout << "Guess: " << guess << endl;
        iteration++;
    }
    return 0;
}