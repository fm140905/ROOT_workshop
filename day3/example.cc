#include "example.h"

void example()
{
    TCanvas *canvas = new TCanvas("example_canvas","example",500,500); // create a new canvas
    TF1 *f1 = new TF1("f1","sin(x)",0.,5.); // create a function f1
    f1->SetTitle("sine and cosine;time;volatge"); // set title
    f1->SetLineColor(kBlue);
    TF1 *f2 = new TF1("f2","cos(x)",0.,5.);
    canvas->Draw();
    f1->Draw();
    f2->Draw("same");// draw f2 on the same canvas
}