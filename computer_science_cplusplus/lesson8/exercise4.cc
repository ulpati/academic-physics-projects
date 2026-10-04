#include <iostream>
#include <cmath>
using namespace std;

void exercise4() {

    // variables
    const int n = 1000;
    double *w = new double[n];
    for (int i = 0; i < n; i++)
        w[i] = rand() % 100;

    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += w[i];

    cout << "Average value = " << sum / n << endl;

    delete[] w;
}

int main() {
    exercise4();

    return 0;
}
