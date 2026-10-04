/*
 * Exercise 1: Loop structures demonstration
 * Shows how to use for, while, and do/while loops in C++
 */

#include <iostream>
using namespace std;

int main () {

    // for loop
    for (int i = 0; i < 5; i++)
    {
        cout << "Hello World for index = " << i << endl;
    }

    // while loop
    int counter = 0;
    while (counter < 5)
    {
        cout << "Hello World while index = " << counter << endl;
        counter++;
    }

    // do/while loop
    counter = 0;
    do {
        cout << "Hello World do/while index = "
             << counter << endl;
        counter++;
    }
    while (counter < 5);

    return 0;
}
