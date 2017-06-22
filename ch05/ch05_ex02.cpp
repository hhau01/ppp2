// ch05 ex02 pg 169-170
// FIND THE ERRORS: converts temperature from Celsius to Kelvin
// 
// converts C to K
// double ctok(double c) {
//     int k = c + 273.15;      // int will truncate 273.15, should be a double
//     return int               // should return a double variable, also missing a semicolon ;
// }
// int main() {
//     double c = 0;            //
//     cin >> d;                // d is not declared, should be c
//     double k = ctok("c");    // argument should be a double not a string
//     Cout << k << '/n';       // cout should be all lowercase, the escape symbol should be \ 
// }
#include <iostream>

using namespace std;

// converts C to K
double ctok(double c) {
    double k = c + 273.15;      
    return k;               
}
int main() {
    double c = 0;            
    cin >> c;
    double k = ctok(c);    
    cout << k << '\n';       
}