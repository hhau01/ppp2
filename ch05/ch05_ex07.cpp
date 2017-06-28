// ch05 ex07 pg 170
// solve quadratic equations: ax^2 + bx + c = 0
// x = (-b +/- sqrt(b^2-4ac))/(2a)
// include error handling:
// * b2-4ac less than zero
// * when it detects an equation with no real roots, print message "No real roots found."

#include <iostream>
#include <math.h>

using namespace std;

void solve_quadratic_eq(double a, double b, double c) {
    if (pow(b, 2.0)-4*a*c < 0) throw invalid_argument("No real roots found. b^2-4ac < 0.");
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
    try {
        solve_quadratic_eq(a, b, c);
    } catch(exception &e) {
        cout << e.what() << endl;
        exit(1);
    }

    return 0;
}