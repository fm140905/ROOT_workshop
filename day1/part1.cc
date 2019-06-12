#include "part1.h"

void part1()
{
    TF2 *f = new TF2("func","sin(x) + cos(y)^2", -5.,5.,-10.,10.);
    f->SetTitle("Graph1; X-Axis; Y-Axis");
    f->Draw("surf2");
}