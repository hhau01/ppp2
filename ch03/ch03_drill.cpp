// ch03 Drill pg. 83-84

// #include "../std_lib_facilities.h"
#include <iostream>
#include <string>

using namespace std;

inline void keep_window_open()
{
	cin.clear();
	cout << "Please enter a character to exit\n";
	char ch;
	cin >> ch;
	return;
}
inline void simple_error(string s)	// write ``error: s�� and exit program
{
	cerr << "error: " << s << '\n';
	keep_window_open();		// for some Windows environments
	exit(1);
}

int main() {
    // initial questions
    cout << "Enter the name of the person you want to write to:\n";
    string first_name;
    cin >> first_name;
    cout << "Name of another friend:\n";
    string friend_name;
    cin >> friend_name;
    cout << "Enter friend's sex ((m)ale or (f)emale):\n";
    // can add check if user input is m|M or f|F
    char friend_sex = 0;
    cin >> friend_sex;
    cout << "Enter age of the recipient:\n";
    int age = 0;
    cin >> age;
    if (age <= 0 || age >= 110) {
        simple_error(" You're kidding!");
    }

    // start letter
    cout << "\n\nDear " << first_name << ",\n\n";
    cout << "\tHow are you? I am fine. I miss you. ";
    cout << "Have you seen " << friend_name << " lately? ";
    cout << "If you see " << friend_name;
    // if friend is male
    if (friend_sex == 'm') {
        cout << " please ask him to call me.";
    } 
    // if friend is female
    else if (friend_sex == 'f') {
        cout << " please ask her to call me.";
    }
    
    cout << "\nI hear you just had a birthday and you are " << age << " years old. ";
    
    // if friend is under 12
    if (age <= 12) {
        cout << "Next year you will be " << age + 1 << ".";
    }
    // if friend is 17
    else if (age == 17) {
        cout << "Next year you will be able to vote.";
    }
    // if friend is over 70
    else if (age > 70) {
        cout << "I hope you are enjoying retirement";
    }
    cout << "\n\nSincerely,\nHenry" << endl;

    return 0;
}