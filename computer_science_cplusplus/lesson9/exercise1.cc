/*
 * Exercise 1: Introduction to ROOT plotting
 * Creates a simple plot of a mathematical function using ROOT TF1
 * Demonstrates basic canvas creation, function plotting, and saving
 */

#include <iostream>
#include "TCanvas.h"
#include "TF1.h"
#include "TApplication.h"
#include "TVirtualPad.h"
#include "TAxis.h"
using namespace std;

// Exercise function: plots sin(x^2)/x + 0.01*x^2
void exercise1() {

    // construction of TF1
    TCanvas *c1 = new TCanvas("c1", "Plot", 600, 400);
    TF1 *f1 = new TF1("f1", "sin(x*x)/x + 0.01 * x*x", -3, 3);

    f1->SetTitle("Exercise 1");
    f1->GetXaxis()->SetTitle("x");
    f1->GetYaxis()->SetTitle("y");

    f1->SetLineColor(kBlue);

    f1->Draw();
    c1->SaveAs("plot1.png");
}

int main() {
    exercise1();

    return 0;
}
