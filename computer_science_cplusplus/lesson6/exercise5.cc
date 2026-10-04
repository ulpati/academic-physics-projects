#include <iostream>
#include <fstream>
using namespace std;

int main () {

    // variables
    const int n = 10000;
    double mass[n];

    // open data file
    fstream f;
    f.open("data_higgs.dat", ios::in);

    if(!f.good())
    {
        cout << "Error reading file data_higgs.dat" << endl;
        return 1;
    }

    // read
    for (int i = 0; i < n; i++)
        f >> mass[i];

    f.close();

    // sort array in ascending order using selection sort
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (mass[i] > mass[j])
            {
                double tmp = mass[i];
                mass[i] = mass[j];
                mass[j] = tmp;
            }

    // print minimum and maximum
    const double massmin = mass[0];
    const double massmax = mass[n - 1];
    cout << "Minimum mass = " << massmin << endl;
    cout << "Maximum mass = " << massmax << endl;

    // create binning and histogram frequencies
    int nbins = int((massmax - massmin) / 5) + 1;
    double *bins = new double[nbins];
    int *freq = new int[nbins];

    // initialize bins
    for (int i = 0; i < nbins; i++)
    {
        bins[i] = mass[0] + i * 5.0;
        freq[i] = 0;
    }

    // histogram
    for (int i = 0; i < n; i++)
        for (int b = 0; b < nbins; b++)
            if (mass[i] <= bins[b + 1])
            {
                freq[b]++;
                break;
            }

    cout << endl;
    cout << "Histogram:" << endl;
    for (int b = 0; b < nbins; b++)
        cout << "M = " << bins[b] << " GeV -> freq = "
             << freq[b] << endl;

    // find index with max frequency
    int fmax = 0;
    int freqmax = freq[0];
    for (int b = 0; b < nbins; b++)
        if (freq[b] > freqmax)
        {
            fmax = b;
            freqmax = freq[b];
        }

    cout << endl;
    cout << "Most frequent bin value M = " << bins[fmax]
         << " GeV with freq = " << freq[fmax] << endl;

    delete[] bins;
    delete[] freq;

    return 0;
}
