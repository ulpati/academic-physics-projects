#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main ()
{
    char name[20];
    string surname;
    int id;
    fstream finput;
    fstream foutput;

    finput.open("myinput.dat", ios::in);

    if (!finput.good())
    {
        cout << "Cannot open myinput.dat" << endl;
        return -1;
    }

    finput >> name;
    finput >> surname;
    finput >> id;

    finput.close();

    cout << surname << ", " << name << " is registered with "
         << "ID number: " << id << "." << endl;

    foutput.open("result.dat", ios::out);

    if (foutput.good())
    {
        foutput << surname << ", " << name << " is registered"
                << " with ID number: " << id
                << "." << endl;
    } else
    {
        cout << "Error: file is not good!" << endl;
    }

    foutput.close();

    return 0;
}
