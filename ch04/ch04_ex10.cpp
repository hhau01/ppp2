// ch04 ex10 pg. 129
// play ROCK PAPER SCISSORS using sucky random number generator

// #include "../std_lib_facilities.h"
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
    vector<string> moves = {"Rock", "Paper", "Scissors"};
    bool keep_going = true;
    char play = 0;
    int r = 0;
    // seed the random generator with the current time
    srand((int)time(0));
    while (keep_going) {
        cout << "Enter 'r', 'p', 's' to play Rock Paper Scissors! 'q' to quit.\n";
        cin >> play;
        r = rand() % 3;
        cout << "Computer plays: " << moves[r] << "!\n";
        switch (play) {
            case 'r':
                switch (moves[r].at(0)) {
                    case 'R':
                        cout << "Tie!\n";
                        break;
                    case 'P':
                        cout << "Paper beats Rock! You lose!\n";
                        break;
                    case 'S':
                        cout << "Rock beats Scissors! You win!\n";
                        break;
                }
                break;
            case 'p':
                switch (moves[r].at(0)) {
                    case 'P':
                        cout << "Tie!\n";
                        break;
                    case 'R':
                        cout << "Paper beats Rock! You win!\n";
                        break;
                    case 'S':
                        cout << "Scissors beats Paper! You lose!\n";
                        break;
                }
                break;            
            case 's':
                switch (moves[r].at(0)) {
                    case 'S':
                        cout << "Tie!\n";
                        break;
                    case 'P':
                        cout << "Scissors beats Paper! You win!\n";
                        break;
                    case 'R':
                        cout << "Rock beats Scissors! You lose!\n";
                        break;
                }
                break;            
            case 'q':
                keep_going = false;
                cout << "Goodbye!" << endl;
                break;            
            default:
                cout << "Please enter 'r', 'p', or 's'.\n";
                break;            
        }
    }

    return 0;
}