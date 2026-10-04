#include <iostream>
#include <cmath>
using namespace std;

// declaration of the structure mycomplex
struct mycomplex {
    double real;
    double imag;
};

// function prototype for print
void print(mycomplex const& v);

// calculates the modulus of a complex number
double complex_modulus(mycomplex const& v);

// creates a new object with the sum
mycomplex add(mycomplex const& a, mycomplex const& b);

void exercise5()
{
    // create variables
    mycomplex a, b;

    // assign the complex number to a
    a.real = 7;
    a.imag = 2;

    // assign a to b
    b = a;

    // print a
    cout << "Printing a:" << endl;
    print(a);

    // print b
    cout << "Printing b:" << endl;
    print(b);

    // calculate the modulus of a
    cout << "Modulus of a = " << complex_modulus(a) << endl;

    // create the sum object
    mycomplex c = add(a,b);
    cout << "Printing c:" << endl;
    print(c);
}

int main() {
    exercise5();

    return 0;
}

//______________________________
void print (mycomplex const& v)
{
    cout << "(" << v.real << "," << v.imag << ")" << endl;
}

//______________________________
double complex_modulus(mycomplex const& v)
{
    return sqrt(pow(v.real, 2) + pow(v.imag, 2));
}

//______________________________
mycomplex add(mycomplex const& a, mycomplex const& b)
{
    mycomplex s;
    s.real = a.real + b.real;
    s.imag = a.imag + b.imag;
    return s;
}
