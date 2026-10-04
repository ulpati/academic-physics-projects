/*
 * Exercise 4: Statistical analysis of velocity data
 * Reads space-time data from file, calculates instantaneous velocities,
 * and computes statistical measures (mean, std dev, max, min)
 */

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

#define N 1000  // Number of data points to read

int main() {

    // Variables to store space-time data and velocities
    double space, time;
    double v[N];  // Array to store calculated velocities

    // Open file for reading
    fstream f;
    f.open("data_moto.dat", ios::in);

    // Check if file opened successfully
    if (!f.good()) {
        cout << "Error reading file data_moto.dat" << endl;
        return 1;
    }

    // Read data and calculate instantaneous velocities
    for (int i = 0; i < N; i++) {
        f >> space >> time;
        v[i] = space / time;  // velocity = distance / time
    }

    f.close();

    // Calculate average velocity
    double sum = 0;
    for (int i = 0; i < N; i++) {
        sum += v[i];  // Accumulate all velocities
    }

    double vmean = sum / N;
    cout << "Average velocity = " << vmean << endl;

    // Calculate standard deviation
    double sum2 = 0;
    for (int i = 0; i < N; i++) {
        sum2 += pow(v[i] - vmean, 2);  // Sum of squared deviations
    }

    double sigma = sqrt(sum2 / (N - 1));  // Sample standard deviation
    cout << "Standard deviation = " << sigma << endl;

    // Find maximum velocity
    double vmax = v[0];  // Initialize with first element
    for (int i = 1; i < N; i++) {
        if (v[i] > vmax) {
            vmax = v[i];  // Update max if current value is larger
        }
    }
    cout << "Maximum velocity = " << vmax << endl;

    // Find minimum velocity
    double vmin = v[0];  // Initialize with first element
    for (int i = 1; i < N; i++) {
        if (v[i] < vmin) {
            vmin = v[i];  // Update min if current value is smaller
        }
    }
    cout << "Minimum velocity = " << vmin << endl;

    return 0;
}
