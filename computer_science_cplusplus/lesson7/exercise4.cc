#include <iostream>
#include <cmath>
using namespace std;

// calculate the distance between points (x, y) and (xc, yc)
double distance(double x, double y, double xc, double yc)
{
    return sqrt(pow(x - xc, 2) + pow(y - yc, 2));
}

// check if a point (x, y) is inside the circle
void check_circle(double x, double y, double xc, double yc, double r, bool &status)
{
    double d = distance(x, y, xc, yc);
    if (d <= r)
        status = true;
    else
        status = false;
}

int main() {

    // variables
    const double xc = 1, yc = 1, r = 1;
    double x, y;
    bool status;

    for(;;)
    {
        cout << "Enter coordinates (x,y): " << endl;
        cin >> x >> y;
        
        if (cin.eof()) break;

        check_circle(x, y, xc, yc, r, status);
        if (status)
            cout << "The point is inside the circle." << endl;
        else
            cout << "The point is not inside the circle." << endl;
    }

    return 0;
}
