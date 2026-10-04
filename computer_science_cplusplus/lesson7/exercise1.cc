/*
 * Exercise 1: Pointer basics and dynamic memory
 * Demonstrates pointer operations, dereferencing, addresses,
 * and dynamic array allocation
 */

#include <iostream>
using namespace std;

int main() {

    // Point 1: Create a double variable and a null pointer
    double x = 5.5;
    double *p = NULL;  // Initialize pointer to NULL

    // Point 2: Print variable and pointer addresses
    cout << "x = " << x << endl;        // Value of x
    cout << "&x = " << &x << endl;      // Address of x
    cout << "p = " << p << endl;        // Value of p (address it points to)
    cout << "&p = " << &p << endl;      // Address of p itself

    // Point 3: Make pointer p point to variable x
    p = &x;  // p now stores the address of x
    cout << "p = " << p << endl;        // Address p points to (same as &x)
    cout << "*p = " << *p << endl;      // Value at address p points to (same as x)

    // Point 4: Modify x indirectly through pointer p
    cout << "Enter a double: ";
    cin >> *p;  // Write to the memory location p points to (modifies x)

    // Verify that x has been modified
    cout << "x = " << x << endl;

    // Point 5: Dynamically allocate an array and display addresses
    int n = 10;
    double *v = new double[n];  // Allocate array on heap
    cout << "&v = " << &v << endl;  // Address of pointer v itself
    for (int i = 0; i < n; i++)
        cout << "&v[" << i << "] = " << &v[i] << endl;  // Address of each element

    // Free dynamically allocated memory
    delete[] v;

    return 0;
}
