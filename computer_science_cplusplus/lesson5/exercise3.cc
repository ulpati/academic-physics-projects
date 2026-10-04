#include <iostream>
using namespace std;

int main () {

    // variables
    int number;
    int even = 0, odd = 0;

    cout << "Enter integers: ";

    // solution using for loop
    for (;;)
    {
        cin >> number;
        if (cin.eof()) break;

        if (number % 2 == 0)
            even++;
        else
            odd++;
    }

    // solution using while loop
/*
    cin >> number;
    while (!cin.eof())
    {
        if (number % 2 == 0)
            even++;
        else
            odd++;

        cin >> number;
    }
*/

    // print final results
    cout << endl;
    cout << "Total even numbers: " << even << endl;
    cout << "Total odd numbers: " << odd << endl;

    return 0;
}
