// ch05 ex06 pg 170
// convert Fahrenheit to Celsius and vice versa using formula in 4.3.3: F = 9.0/5.0 * C + 32

#include <iostream>
#include <exception>

using namespace std;

// converts C to F
double ctof(double c) {
    if (c < -273.15) throw invalid_argument("Absolute zero is -273.15°C");
    double f = 9.0/5 * c + 32;      
    return f;               
}
// converts F to C
double ftoc(double f) {
    if (f < -459.67) throw invalid_argument("Absolute zero is 459.67°F");
    double c = (f - 32) * 5.0/9;      
    return c;
}
int main() {
    int input = 0;            
    double result = 0;
    cout << "(1) Celsius to Fahrenheit\n(2) Fahrenheit to Celsius\n";
    cin >> input;
    if (input == 1) {
        cout << "Enter temperature(°C): ";        
        cin >> input;
        try {
            result = ctof(input);    
        } catch (exception &e) {
            cout << "Invalid argument: " << e.what() << endl;
            exit(1);
        }
        cout << result << "°F\n";          
    } else if (input == 2) {
        cout << "Enter temperature(°F): ";        
        cin >> input;
        try {
            result = ftoc(input);    
        } catch (exception &e) {
            cout << "Invalid argument: " << e.what() << endl;
            exit(1);
        }
        cout << result << "°C\n";                  
    } else {
        cout << "Please enter (1) Celsius to Fahrenheit or (2) Fahrenheit to Celsius." << endl;
        exit(1);
    } 
}