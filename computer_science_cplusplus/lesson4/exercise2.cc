#include <iostream>
#include <cmath>
using namespace std;

int main() {

    // variables
    double a, b, c;

    // user inputs data
    cout << "Enter coefficients a b c: ";
    cin >> a >> b >> c;

    // data input verification
    cout << "Coefficients:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    // calculate discriminant
    double D = pow(b, 2) - 4 * a * c;

    // discriminant check
    cout << "Discriminant value: " << D << endl;

    // solving the equation in three cases
    cout << "Calculating solution..." << endl;
    if (D > 0)
    {
        const double x1 = (-b + sqrt(D)) / (2 * a);
        const double x2 = (-b - sqrt(D)) / (2 * a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (D == 0)
    {
        // x1 = x2
        const double x1 = -b / (2 * a);
        cout << "x1,2 = " << x1 << endl;
    } else
    {
        const double real = -b / (2 * a);
        const double imag1 = sqrt(-D) / (2 * a);
        const double imag2 = -imag1;
        cout << "x1 = " << real << " + i * " << imag1 << endl;
        cout << "x2 = " << real << " + i * " << imag2 << endl;
    }

    return 0;
}
