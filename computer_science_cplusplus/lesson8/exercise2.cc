#include <iostream>
#include "functions.h"
using namespace std;

int main() {

    double a = 5, b = 2;

    cout << "Initial values:" << endl;
    cout << a << " " << b << endl;

    cout << "First swap with swap1:" << endl;
    swap1(a, b);
    cout << a << " " << b << endl;

    cout << "Second swap with swap2:" << endl;
    swap2(&a, &b);
    cout << a << " " << b << endl;

    return 0;
}
