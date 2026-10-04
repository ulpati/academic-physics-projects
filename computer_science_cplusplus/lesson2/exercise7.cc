/*
 * Exercise 7: Temperature converter (Celsius to Kelvin)
 * Converts a temperature from Celsius to Kelvin using the formula K = C + 273.15
 */

#include <iostream>
using namespace std;

int main ()
{
    // Variable to store temperature in Celsius
    double tCelsius;

    // Get temperature from user
    cout << "Enter temperature in Celsius: ";
    cin >> tCelsius;

    // Convert to Kelvin (add 273.15 to Celsius)
    double tKelvin = tCelsius + 273.15;

    // Display both temperatures
    cout << "Temperature in Celsius: " << tCelsius << endl;
    cout << "Temperature in Kelvin: " << tKelvin << endl;

    return 0;
}
