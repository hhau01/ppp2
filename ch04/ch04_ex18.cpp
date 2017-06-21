// ch04 ex18 pg 130
// solve quadratic equations: ax^2 + bx + c = 0
// x = (-b +/- sqrt(b^2-4ac))/(2a)

#include <iostream>
#include <math.h>

using namespace std;

void solve_quadratic_eq(double a, double b, double c) {
    cout << "\nx1 = " << (-b + sqrt(pow(b, 2.0)-4*a*c))/(2*a) << ", x2 = " << (-b - sqrt(pow(b, 2.0)-4*a*c))/(2*a) << endl;
}

int main() {
    double a = 0, b = 0, c = 0;
    cout << "Quadratic equation 'ax^2 + bx + c = 0'\nEnter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    solve_quadratic_eq(a, b, c);

    return 0;
}