/*
 * Exercise 1: Multi-option temperature converter
 * Converts Celsius to either Kelvin or Fahrenheit based on user choice
 * Demonstrates conditional branching with if-else statements
 */

#include <iostream>
using namespace std;

int main ()
{
    // Variables for temperature and user choice
    double tCelsius;
    int choice;

    // Get temperature in Celsius from user
    cout << "Enter temperature in Celsius: ";
    cin >> tCelsius;

    // Display menu options
    cout << "Press 1 for conversion to Kelvin." << endl;
    cout << "Press 2 for conversion to Fahrenheit." << endl;
    cin >> choice;

    if (choice == 1)
    {
        // Convert to Kelvin: K = C + 273.15
        double tKelvin = tCelsius + 273.15;

        cout << "T(Celsius) = " << tCelsius << " -> T(Kelvin) = "
             << tKelvin << endl;
    } else
    {
        // Convert to Fahrenheit: F = C × 9/5 + 32
        double tFahrenheit = tCelsius * 9.0 / 5.0 + 32.0;

        cout << "T(Celsius) = " << tCelsius << " -> T(Fahrenheit) = "
             << tFahrenheit << endl;
    }

    return 0;
}
