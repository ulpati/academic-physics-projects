#include <iostream>
using namespace std;

int main () {

    // variables
    const int n = 5; // size of the vectors
    double v[n] = {2, 5, 10, 20, 50};
    double w[n] = {10, -5, 3, 1, 100};

    // print values of v
    for (int i = 0; i < n; i++) {
        cout << "v[" << i << "] = " << v[i] << endl;
    }

    // print values of w
    for (int i = 0; i < n; i++) {
        cout << "w[" << i << "] = " << w[i] << endl;
    }

    // create array s
    double s[n];

    // initialize s with values of v
    for (int i = 0; i < n; i++) {
        s[i] = v[i];
    }

    // add values of w
    for (int i = 0; i < n; i++) {
        s[i] += w[i];
    }

    // print s
    cout << "Result v+w:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "s[" << i << "] = " << s[i] << endl;
    }

    return 0;
}
