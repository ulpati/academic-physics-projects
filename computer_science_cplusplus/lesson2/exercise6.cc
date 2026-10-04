/*
 * Exercise 6: Rectangle calculator with different output formats
 * Demonstrates output formatting: fixed-point and scientific notation
 */

#include <iostream>
using namespace std;

int main()
{
    // Variables to store rectangle dimensions
    double base, height;

    // Get base value from user
    cout << "Enter rectangle base value: ";
    cin >> base;
    // Get height value from user
    cout << "Enter rectangle height value: ";
    cin >> height;

    // Calculate area and perimeter
    double area = base * height;
    double perimeter = 2 * (base + height);

    // Display basic output
    cout << "Rectangle base: " << base << endl;
    cout << "Rectangle height: " << height << endl;
    
    // Set precision to 10 decimal places and use fixed-point notation
    cout.precision(10);
    cout << fixed;
    cout << "Rectangle area: " << area << endl;
    cout << "Rectangle perimeter: " << perimeter << endl;
    
    // Switch to scientific notation for the final output
    cout << scientific;
    cout << "Rectangle area = " << area
         << "\tPerimeter = " << perimeter << endl;

    return 0;
}
