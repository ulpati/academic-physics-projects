/*
 * Exercise 6: 2D point analysis with struct and dynamic memory
 * Reads 2D coordinates from file, calculates distances from origin,
 * and computes the mean distance
 */

#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

// Struct to represent a 2D point with coordinates and distance from origin
struct point2d {
    double *coordinate;  // Dynamic array for x and y coordinates
    double distance;     // Distance from origin
};

// Calculate Euclidean distance from origin: sqrt(x^2 + y^2)
void compute_distance(point2d &p)
{
    p.distance = sqrt(pow(p.coordinate[0], 2) + pow(p.coordinate[1], 2));
}

// Calculate mean distance of all points
double mean(point2d *v, int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += v[i].distance;  // Accumulate all distances
    return sum / n;  // Return average
}

void exercise6() {
    
    const int n = 1000;  // Number of points to read
    point2d points[n];   // Array of point structures

    // Open input file
    fstream f;
    f.open("data.dat", ios::in);
    if (!f.good())
    {
        cout << "Error opening file data.dat" << endl;
        return;
    }

    // Load coordinates from file and compute distances
    for (int i = 0; i < n; i++)
    {
        points[i].coordinate = new double[2];  // Allocate space for x, y
        f >> points[i].coordinate[0] >> points[i].coordinate[1];  // Read x, y
        compute_distance(points[i]);  // Calculate distance from origin
    }

    f.close();

    // Display mean distance
    cout << "Mean = " << mean(points, n) << endl;

    // Free dynamically allocated memory for each point's coordinates
    for (int i = 0; i < n; i++)
        delete[] points[i].coordinate;
}

int main() {
    exercise6();

    return 0;
}
