#include <iostream>
#include <cmath>
using namespace std;

double scalar(const double a[], const double b[], int n);
double norm(const double a[], int n);
void swap(double &a, double &b);
void transpose(double M[][3], int dim);

int main() {

    // variables
    const int n = 5;
    const double v[n] = {1,2,3,4,5};
    const double w[n] = {10,2,4,3,2};
    double M[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    // calculate scalar product
    cout << "Scalar Product: " << scalar(v, w, n) << endl;

    // calculate the norm
    cout << "Norm: " << norm(v, n) << endl;

    // calculate transposed matrix
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << M[i][j] << " ";
        cout << endl;
    }

    // use swap function to get the transpose
    transpose(M, 3);

    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << M[i][j] << " ";
        cout << endl;
    }

    return 0;
}

// scalar product
double scalar(const double a[], const double b[], int n)
{
    double s = 0;
    for (int i = 0; i < n; i++)
        s += a[i] * b[i];
    return s;
}

// calculate array norm
double norm(const double a[], int n)
{
    double s = scalar(a, a, n);
    return sqrt(s);
}

// swap two values by reference
void swap(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
}

// calculate transposed matrix
void transpose(double M[][3], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        for (int j = i + 1; j < dim; j++)
        {
            swap(M[i][j], M[j][i]);
        }
    }
}
