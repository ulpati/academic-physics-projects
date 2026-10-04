/*
 * Exercise 2: Multiple function plotting with ROOT
 * Uses ROOT library to plot three different mathematical functions
 * on the same canvas and save as an image
 */

#include <iostream>
#include "TCanvas.h"
#include "TF1.h"
#include "TApplication.h"
#include "TAxis.h"
using namespace std;

void exercise2() {

    // Create canvas for plotting (600x400 pixels)
    TCanvas *c1 = new TCanvas("c1", "Exercise 2", 600, 400);

    // Create and configure first function: f1(x) = -sin(x^2)/x + 0.01*x^2
    TF1 *f1 = new TF1("f1", "-sin(x*x)/x + 0.01*x*x", -3, 3);
    f1->SetTitle("Exercise 2");
    f1->GetXaxis()->SetTitle("x");
    f1->GetYaxis()->SetTitle("y");
    f1->SetLineColor(kBlue);  // Set line color to blue
    f1->Draw();  // Draw first function

    // Create and draw second function: f2(x) = 0.1*sin(4x)/x
    TF1 *f2 = new TF1("f2", "0.1*sin(4*x)/x", -3, 3);
    f2->Draw("same");  // Draw on same canvas

    // Create and draw third function: f3(x) = 0.5*x (linear)
    TF1 *f3 = new TF1("f3", "0.5*x", -3, 3);
    f3->SetLineColor(kGreen);  // Set line color to green
    f3->Draw("same");  // Draw on same canvas
    
    // Save canvas to PNG file
    c1->SaveAs("plot2.png");
}

int main() {
    exercise2();

    return 0;
}
