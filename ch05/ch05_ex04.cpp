// ch05 ex02 pg 169-170
// change ex02 to include a check in the function ctok for when given Celsius is below -273.15

#include <iostream>
#include <exception>

using namespace std;

// converts C to K
double ctok(double c) {
    if (c < -273.15) throw invalid_argument("Absolute zero is -273.15°C");
    double k = c + 273.15;      
    return k;               
}
int main() {
    double c = 0;            
    cin >> c;
    double k = 0;
    try {
        k = ctok(c);    
    } catch (exception &e) {
        cout << "Invalid argument: " << e.what() << endl;
        exit(1);
    }
    cout << k << '\n';       
}