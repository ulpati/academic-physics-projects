/*
 * Exercise 1: Basic arithmetic operations
 * Demonstrates increment, decrement, division, and modulo operations
 */

#include <iostream>
using namespace std;

int main ()
{
    // Variables: n for user input, r as divisor
    int n, r = 2;

    // Get an integer from the user
    cout << "Enter an integer: ";
    cin >> n;

    // Perform increment and decrement operations
    int increment = n, decrement = n;
    increment++;  // Add 1 to n
    decrement--;  // Subtract 1 from n
    
    // Perform division and modulo operations
    int division = n / r, remainder = n % r;

    // Display all results
    cout << "Increment: " << increment << endl;
    cout << "Decrement: " << decrement << endl;
    cout << "Division : " << division << endl;
    cout << "Remainder: " << remainder << endl;

    return 0;
}
