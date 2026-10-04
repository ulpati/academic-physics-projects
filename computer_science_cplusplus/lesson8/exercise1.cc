/*
 * Exercise 1: Complex number operations using structs
 * Demonstrates struct definition, functions with structs,
 * and basic complex number arithmetic (addition, modulus)
 */

#include <iostream>
#include <cmath>
using namespace std;

// Declaration of the complex struct to represent complex numbers
struct complex {
    double real;  // Real part
    double imag;  // Imaginary part
};

// Function prototypes
void print(complex v);                    // Prints complex number
double complex_modulus(complex v);        // Calculates modulus |z| = sqrt(real^2 + imag^2)
complex add(complex a, complex b);        // Adds two complex numbers

int main() {

    // Create two complex number variables
    complex a, b;

    // Assign values to complex number a (7 + 2i)
    a.real = 7;
    a.imag = 2;

    // Copy a to b
    b = a;

    // Print complex number a
    cout << "Printing a:" << endl;
    print(a);

    // Print complex number b
    cout << "Printing b:" << endl;
    print(b);

    // Calculate and display the modulus of a
    cout << "Modulus of a = " << complex_modulus(a) << endl;

    // Create a new complex number c as the sum of a and b
    complex c = add(a, b);
    cout << "Printing c:" << endl;
    print(c);

    return 0;
}

//______________________________
// Print complex number in format (real, imag)
void print(complex v)
{
    cout << "(" << v.real << "," << v.imag << ")" << endl;
}

//______________________________
// Calculate modulus: |z| = sqrt(real^2 + imag^2)
double complex_modulus(complex v)
{
    return sqrt(pow(v.real, 2) + pow(v.imag, 2));
}

//_______________________________
// Add two complex numbers: (a.real + b.real) + (a.imag + b.imag)i
complex add(complex a, complex b)
{
    complex s;
    s.real = a.real + b.real;  // Add real parts
    s.imag = a.imag + b.imag;  // Add imaginary parts
    return s;
}
