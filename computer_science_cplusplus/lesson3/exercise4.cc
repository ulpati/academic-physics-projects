/*
 * Exercise 4: User registration with file output
 * Collects user information and writes it to a file
 * Demonstrates file I/O operations and error checking
 */

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main ()
{
    // Variables to store user information
    char name[20];     // Character array for first name
    string surname;    // String object for last name
    int id;            // ID number
    fstream foutput;   // File stream object for output

    // Collect user information from console
    cout << "First Name: ";
    cin >> name;
    cout << "Last Name : ";
    cin >> surname;
    cout << "ID Number : ";
    cin >> id;
    
    // Display registration message to console
    cout << surname << ", " << name << " is registered with "
         << "ID number: " << id << "." << endl;

    // Open output file and write registration information
    foutput.open("result.dat", ios::out);
    if (foutput.good())
    {
        // Write formatted message to file
        foutput << surname << ", " << name << " is registered"
                << " with ID number: " << id
                << "." << endl;
    } else
    {
        // Display error message if file cannot be opened
        cout << "Error: file is not good!" << endl;
    }
    foutput.close();

    return 0;
}
