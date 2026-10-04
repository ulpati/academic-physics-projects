/*
 * Exercise 5: Rectangle area and perimeter calculator
 * Prompts user for base and height, then calculates and displays area and perimeter
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

    // Calculate area (base * height) and perimeter (2 * (base + height))
    double area = base * height;
    double perimeter = 2 * (base + height);

    // Display the results
    cout << "Rectangle base: " << base << endl;
    cout << "Rectangle height: " << height << endl;
    cout << "Rectangle area: " << area << endl;
    cout << "Rectangle perimeter: " << perimeter << endl;

    return 0;
}
