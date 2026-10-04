#include <iostream>
using namespace std;

int main() {

    // variables
    int age;
    double height, weight;
    string size;

    // user inputs data
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter height in meters: ";
    cin >> height;
    cout << "Enter weight in Kg: ";
    cin >> weight;

    // calculate bike size
    if (age <= 10)
    {
        size = "XS";
    }
    else if (age > 10 && age <= 18)
    {
        if (height <= 1.10)
        {
            size = "XS";
        } else if (height > 1.10 && height <= 1.30 && weight <= 40)
        {
            size = "S";
        } else if (height > 1.10 && height <= 1.30 && weight > 40)
        {
            size = "M";
        } else if (height > 1.30 && height <= 1.60)
        {
            size = "M";
        } else if (height > 1.60)
        {
            cout << "Sorry, size not available" << endl;
        }
    }
    else 
    {
        if (height <= 1.40 || weight <= 40)
        {
            size = "XS";
        } else if (height > 1.40 && height <= 1.60)
        {
            size = "S";
        } else if (height > 1.60 && height <= 1.70)
        {
            size = "M";
        } else if (height > 1.70 && height <= 1.90)
        {
            size = "L";
        } else if (height > 1.90)
        {
            size = "XL";
        } else
        {
            cout << "Sorry, size not available" << endl;
        }
        
    }

    cout << "Suggested bike frame: " << size << endl;

    return 0;
}
