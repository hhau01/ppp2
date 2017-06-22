// ch05 ex02 pg 169-170
// change ex02 to include a check for when given Celsius is below -273.15

#include <iostream>
#include <exception>

using namespace std;

// converts C to K
double ctok(double c) {
    double k = c + 273.15;      
    return k;               
}
int main() {
    double c = 0;            
    cin >> c;
    if (c < -273.15) {
        cout << "Invalid argument: Absolute zero is -273.15°C" << endl;
        exit(1);
    }
    double k = ctok(c);    
    cout << k << '\n'; 
}