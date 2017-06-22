// ch05 ex05 pg 170
// in addition to ex03 and ex04 convert Kelvin to Celsius

#include <iostream>
#include <exception>

using namespace std;

// converts C to K
double ctok(double c) {
    if (c < -273.15) throw invalid_argument("Absolute zero is -273.15°C");
    double k = c + 273.15;      
    return k;               
}
// converts K to C
double ktoc(double k) {
    if (k < 0) throw invalid_argument("Absolute zero is 0K");
    double c = k - 273.15;      
    return c;
}
int main() {
    int input = 0;            
    double result = 0;
    cout << "(1) Celsius to Kelvin\n(2) Kelvin to Celsius\n";
    cin >> input;
    if (input == 1) {
        cout << "Enter temperature(°C): ";        
        cin >> input;
        try {
            result = ctok(input);    
        } catch (exception &e) {
            cout << "Invalid argument: " << e.what() << endl;
            exit(1);
        }
        cout << result << "K\n";          
    } else if (input == 2) {
        cout << "Enter temperature(K): ";        
        cin >> input;
        try {
            result = ktoc(input);    
        } catch (exception &e) {
            cout << "Invalid argument: " << e.what() << endl;
            exit(1);
        }
        cout << result << "°C\n";                  
    } else {
        cout << "Wrong input." << endl;
        exit(1);
    } 
}