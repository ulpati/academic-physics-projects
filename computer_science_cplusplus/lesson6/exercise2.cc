/*
 * Exercise 2: Vector operations - dot product and normalization
 * Demonstrates dynamic memory allocation, dot product calculation,
 * and vector normalization using pointers
 */

#include <iostream>
#include <cmath>
using namespace std;

int main () {

    // Declare size and dynamically allocate arrays for vectors
    const int n = 5;
    double * v = new double [n];
    v[0] = 2;
    v[1] = 5;
    v[2] = 10;
    v[3] = 20;
    v[4] = 50;

    double * w = new double [n];
    w[0] = 10;
    w[1] = -5;
    w[2] = 3;
    w[3] = 1;
    w[4] = 100;

    // Calculate dot product: s = Sum_i v_i * w_i
    double s = 0;
    for (int i = 0; i < n; i++) {
        s += v[i] * w[i];  // Multiply corresponding elements and accumulate
    }
    cout << "Dot product v*w = " << s << endl;

    // Create a new vector z, copying v but setting element 2 to 0
    double * z = new double [n];
    for (int i = 0; i < n; i++) {
        if (i == 2) {
            z[i] = 0;      // Set third element to 0
        } else {
            z[i] = v[i];   // Copy from v
        }
    }

    // Normalize z: ||z|| = sqrt( Sum_i z_i ^ 2 )
    // If ||z|| != 1, divide z by ||z|| to make it unit length
    double norm = 0;
    for (int i = 0; i < n; i++) {
        norm += z[i] * z[i];  // Sum of squares
    }
    norm = sqrt(norm);  // Take square root to get the magnitude
    cout << "Norm of z = " << norm << endl;

    // Divide each element by norm and print normalized vector
    for (int i = 0; i < n; i++) {
        z[i] /= norm;  // Normalize: divide by magnitude
        cout << "z[" << i << "] = " << z[i] << endl;
    }

    // Free dynamically allocated memory
    delete[] v;
    delete[] w;
    delete[] z;

    return 0;
}
