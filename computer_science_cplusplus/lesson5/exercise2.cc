/*
 * Exercise 2: Average calculator
 * Prompts user for n numbers and calculates their average
 * Demonstrates for loops and accumulation patterns
 */

#include <iostream>
using namespace std;

int main () {

    // Ask the user for the number of values to read
    int n;
    cout << "How many numbers do you want to input?" << endl;
    cin >> n;

    // Ask the user for the numbers and accumulate the sum
    double sum = 0, num;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number: ";
        cin >> num;
        sum += num;  // Add each number to the running total
    }

    // Calculate and display the average
    cout << "Average is " << sum / n << endl;

    return 0;
}
