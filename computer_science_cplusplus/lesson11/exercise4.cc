#include <iostream>
#include <fstream>
#include <cmath>
#include "TApplication.h"
#include "TCanvas.h"
#include "TH1F.h"
#include "TAxis.h"
#include "TStyle.h"
using namespace std;

int main(int argc, char** argv) {

    TApplication app("App", &argc, argv);

    // canvas
    TCanvas *c = new TCanvas("c", "Exercise 4", 800, 500);
    TH1F *h1 = new TH1F("h1", "Histogram", 50, -20, 25);

    fstream f;
    f.open("data4.dat", ios::in);
    if (!f.good())
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    double data;
    while (true)
    {
        f >> data;
        if (f.eof()) break;
        h1->Fill(data);
    }

    f.close();

    h1->SetFillColor(kOrange);
    h1->SetLineColor(kBlue);
    h1->Draw();
    h1->SetTitle("Data Distribution");

    c->SaveAs("exercise4.png");

    // Show plot on screen
    c->Draw();

    app.Run();

    delete c;
    delete h1;

    return 0;
}
