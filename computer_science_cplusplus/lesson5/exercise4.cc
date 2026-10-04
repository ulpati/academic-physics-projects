/*
 * Exercise 4: File-based average calculator
 * Reads numbers from a file and calculates their average
 * Demonstrates file I/O and handling unknown number of data entries
 */

#include <iostream>
#include <fstream>
using namespace std;

int main () {

    // Open file for reading
    fstream f;
    f.open("data.dat", ios::in);

    // Check if file was opened successfully
    if (!f.good()) {
        cout << "Problem with the file!" << endl;
        return -1;
    }

    // Variables for reading data and calculating sum
    double num, sum = 0.0;

    // Option 1: Known number of data to read (commented out)
/*  int n = 1000;
    for (int i = 0; i < n; i++)
    {
        f >> num;
        sum += num;
    }
*/

    // Option 2: Unknown number of data to read
    int n = 0;
    for (;;)  // Infinite loop, will break on EOF
    {
        f >> num;
        if (f.eof()) break;  // Exit loop when end of file is reached
        sum += num;          // Add number to running total
        n++;                 // Count the numbers
    }

    f.close();

    // Calculate and display the average
    cout << "The average is " << sum / n << endl;

    return 0;
}
