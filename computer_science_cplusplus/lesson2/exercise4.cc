/*
 * Exercise 4: Basic math operations and trigonometric functions
 * Demonstrates constant variable declaration and usage of sin() function
 */

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    // Define constant values for angle and arithmetic operations
    const int angle = 9;
    const int a = 2, b = 3, sum = a + b;

    // Calculate and display sine of the angle (in radians)
    cout << "sin(9) = " << sin(angle) << endl;
    // Display the sum of a and b
    cout << "sum = " << sum << "\n";

    return 0;
}
