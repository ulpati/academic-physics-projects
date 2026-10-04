#include <iostream>
#include <fstream>
#include <cmath>

#include "TApplication.h"
#include "TCanvas.h"
#include "TGraphErrors.h"
#include "TF1.h"
#include "TAxis.h"
#include "TStyle.h"

using namespace std;

int main(int argc, char **argv)
{
    // prepare the TApplication
    TApplication app("App", &argc, argv);

    // open file
    fstream f;
    f.open("data2.dat", ios::in);
    if (!f.good())
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    const int N = 100;
    double t, y;
    TGraphErrors *data = new TGraphErrors(N);
    for (int i = 0; i < N; i++)
    {
        f >> t >> y;
        data->SetPoint(i, t, y);
        data->SetPointError(i, 0, 0.1);
    }

    f.close();

    // create canvas
    TCanvas *c = new TCanvas("c", "Exercise 2", 600, 400);

    data->SetTitle("Exercise 2");
    data->GetXaxis()->SetTitle("time (s)");
    data->GetYaxis()->SetTitle("y (t)");
    data->Draw("A*"); // * to plot with *

    TF1 *fit = new TF1("fit", "0.5 * [0] * x^2");
    data->Fit(fit);
    gStyle->SetOptFit(); // adds a caption

    c->SaveAs("es2.png");

    // run the application
    app.Run();

    // delete memory
    delete c;
    delete data;
    delete fit;

    return 0;
}
