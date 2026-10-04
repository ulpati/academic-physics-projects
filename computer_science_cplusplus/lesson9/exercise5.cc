/*
 * Exercise 5: Data plotting and curve fitting with ROOT
 * Reads data from file and creates two plots with different fits:
 * (A) polynomial fit and (B) custom quadratic fit
 */

#include <iostream>
#include <fstream>
#include "TCanvas.h"
#include "TF1.h"
#include "TApplication.h"
#include "TGraph.h"
#include "TAxis.h"
using namespace std;

// ROOT-based plotting and fitting exercise
void exercise5() {

    // Prepare arrays to store data points
    const int n = 100;  // Number of data points
    double x[n], y[n], y2[n];

    // Open data file
    fstream f;
    f.open("data.dat", ios::in);
    if (!f.good())
    {
        cout << "Error opening file." << endl;
        return;
    }

    // Read data from file (x, y, y2 triplets)
    for (int i = 0; i < n; i++)
    {
        f >> x[i] >> y[i] >> y2[i];
    }

    f.close();

    // First plot: (x, y) with polynomial fit
    TCanvas *c1 = new TCanvas("c1", "Exercise 5A", 600, 400);

    TGraph *g1 = new TGraph(n, x, y);  // Create graph from x and y arrays
    g1->SetTitle("(x,y)");
    g1->GetXaxis()->SetTitle("x");
    g1->GetYaxis()->SetTitle("y");
    g1->Draw("A*");  // Draw with axes and markers

    g1->Fit("poll");  // Fit with polynomial

    c1->SaveAs("plot5A.png");

    // Second plot: (x, y2) with custom quadratic fit
    TCanvas *c2 = new TCanvas("c2", "Exercise 5B", 600, 400);
    
    TGraph *g2 = new TGraph(n, x, y2);  // Create graph from x and y2 arrays
    g2->SetTitle("(x,y2)");
    g2->GetXaxis()->SetTitle("x");
    g2->GetYaxis()->SetTitle("y2");
    g2->Draw("A*");  // Draw with axes and markers

    // Fit with custom quadratic function: f(x) = [0]*x^2 + [1]*x + [2]
    TF1 *f1 = new TF1("f1", "[0] * x^2 + [1] * x + [2]", 0, 1);
    g2->Fit("f1");

    c2->SaveAs("plot5B.png");
}

int main() {
    exercise5();

    return 0;
}
