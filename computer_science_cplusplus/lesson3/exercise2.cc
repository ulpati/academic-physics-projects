/*
 * Exercise 2: Even or odd number checker
 * Uses modulo operation to determine if a number is even or odd
 */

#include <iostream>
using namespace std;

int main ()
{
    // Variable to store user input
    int n;

    // Get an integer from the user
    cout << "Enter an integer: ";
    cin >> n;

    // Check if number is even or odd using modulo operation
    int remainder = n % 2;
    if (remainder == 0)
    {
        // If remainder is 0, the number is even
        cout << "The number " << n << " is even." << endl;
    } else
    {
        // Otherwise, the number is odd
        cout << "The number " << n << " is odd." << endl;
    }

    return 0;
}
