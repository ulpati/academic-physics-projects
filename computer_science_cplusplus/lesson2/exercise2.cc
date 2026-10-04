// Exercise 2: Calculate rectangle area and perimeter
// This program calculates and displays the area and perimeter of a rectangle

#include <iostream>
using namespace std;

int main()
{
    // Define rectangle dimensions
    double base = 5.0, height = 2.0;
    
    // Calculate area and perimeter
    double area = base * height;
    double perimeter = 2 * (base + height);

    // Display results
    cout << "Rectangle base: " << base << endl;
    cout << "Rectangle height: " << height << endl;
    cout << "Rectangle area: " << area << endl;
    cout << "Rectangle perimeter: " << perimeter << endl;

    return 0;
}
