/*
 * Exercise 3: Two separate function plots with ROOT
 * Creates two canvases with different mathematical functions:
 * (A) parabola x^2 and (B) sinc function sin(x)/x
 */

#include <iostream>
#include "TCanvas.h"
#include "TF1.h"
#include "TApplication.h"
#include "TAxis.h"
using namespace std;

void exercise3() {
    // First canvas: plot parabola x^2
    TCanvas *c1 = new TCanvas("c1", "Exercise 3A", 600, 400);

    TF1 *f1 = new TF1("f1", "x^2", -5, 5);  // Parabola from -5 to 5
    f1->SetTitle("Exercise 3A");
    f1->GetXaxis()->SetTitle("x");
    f1->GetYaxis()->SetTitle("y");
    f1->Draw();

    c1->SaveAs("plot3A.png");  // Save first plot

    // Second canvas: plot sinc function sin(x)/x
    TCanvas *c2 = new TCanvas("c2", "Exercise 3B", 600, 400);
    TF1 *f2 = new TF1("f2", "sin(x)/x", -5, 5);  // Sinc function from -5 to 5
    f2->SetTitle("Exercise 3B");
    f2->GetXaxis()->SetTitle("x");
    f2->GetYaxis()->SetTitle("y");
    f2->Draw();

    c2->SaveAs("plot3B.png");  // Save second plot
}

int main() {
    exercise3();
    
    return 0;
}
