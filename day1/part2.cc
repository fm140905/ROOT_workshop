#include "part2.h"

void part2()
{
    TCanvas *canvas = new TCanvas("canvas","My Plots",2000,1000);
    TF1 *f1 = new TF1("f1","tan(x) +5 ", -6., 6.);
    // f1->SetLineColor(kGreen);
    TF1 *f2 = new TF1("f2","x", -6.,6.);
    // f2->SetLineColor(kRed);

    canvas->Draw();
    f1->Draw();
    f2->Draw("same");
}