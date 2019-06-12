#include "test.h"

void test()
{
    auto canvas = new TCanvas("canvas","My plot",500,500);
    TF1 *f1 = new TF1("f1","sin(x)",0,5);
    TF1 *f2 = new TF1("f2","cos(x)",0,5);
    // (*f1).Draw();
    f1->Draw();
    f2->Draw("same");
    canvas->Draw();
}