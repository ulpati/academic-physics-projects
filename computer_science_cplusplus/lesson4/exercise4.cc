#include <iostream>
using namespace std;

int main() {

    // variables
    int id;

    // user inputs data
    cout << "Enter ID number: ";
    cin >> id;

    // switch condition
    switch (id)
    {
    case 112233:
        cout << "NAME" << endl;
        break;
    
    default:
        cout << "Student ID not found" << endl;
        break;
    }

    return 0;
}
