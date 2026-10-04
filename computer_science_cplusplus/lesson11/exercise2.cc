/*
 * Exercise 2: Gaussian histogram with ROOT
 * Creates a histogram filled with random values from a Gaussian distribution
 * and saves it as an image
 */

#include <iostream>
#include "TCanvas.h"
#include "TH1F.h"
using namespace std;

void exercise2()
{
    // Create canvas for plotting (800x500 pixels)
    TCanvas *c = new TCanvas("c", "Exercise 2", 800, 500);

    // Create histogram with 100 bins from -4 to 4
    TH1F *h1 = new TH1F("h1", "Exercise 2", 100, -4, 4);
    h1->FillRandom("gaus", 5000);  // Fill with 5000 random Gaussian values
    h1->SetFillColor(kOrange);     // Set fill color to orange
    h1->SetLineColor(kBlue);       // Set outline color to blue
    h1->GetXaxis()->SetTitle("x");
    h1->GetYaxis()->SetTitle("frequency");
    h1->Draw();  // Draw histogram

    // Save canvas to PNG file
    c->SaveAs("exercise2.png");
}

int main() {
    exercise2();

    return 0;
}
