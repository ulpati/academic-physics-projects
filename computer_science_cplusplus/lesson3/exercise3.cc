/*
 * Exercise 3: User registration system
 * Collects and displays user information (name, surname, ID)
 * Demonstrates use of char arrays and string objects
 */

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    // Variables to store user information
    char name[20];     // Character array for first name
    string surname;    // String object for last name
    int id;            // ID number

    // Collect user information
    cout << "First Name: ";
    cin >> name;
    cout << "Last Name : ";
    cin >> surname;
    cout << "ID Number : ";
    cin >> id;
    
    // Display formatted registration message
    cout << surname << ", " << name << " is registered with "
         << "ID number: " << id << "." << endl;

    return 0;
}
