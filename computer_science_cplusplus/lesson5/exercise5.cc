/*
 * Exercise 5: Fibonacci sequence generator
 * Calculates and displays the first n elements of the Fibonacci sequence
 * where each element is the sum of the two preceding ones
 */

#include <iostream>
using namespace std;

int main () {

    // variables
    int n, element; // int defined as 32-bit [-2^31, 2^31-1]
    int first = 0, second = 1;

    cout << "Enter the number of elements of the Fibonacci "
         << "sequence (n > 2): ";
    cin >> n;

    // calculation
    cout << "First " << n << " elements of the Fibonacci "
         << "sequence:" << endl;
    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
            element = i;
        else
        {
            element = first + second;
            first = second;
            second = element;
        }
        cout << element << endl;
    }

    return 0;
}
