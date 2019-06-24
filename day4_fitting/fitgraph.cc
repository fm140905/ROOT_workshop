#include "fitgraph.h"

void fitgraph()
{
    auto g = new TGraph();
    double x,y;
    for (int i = 0; i < 20; i++)
    {
        x  = 2 * i;
        y = -8 * x * x * x + 4 * x + gRandom->Uniform(1, 5);
        g->SetPoint(i,x,y);
    }

    TF1 *f = new TF1("f", "[0]*x*x*x + [1]*x^2+[2]*x+[3]", 0. ,40.);
    f->SetParNames("cubic","quadratic","linear","constant");
    f->SetParameters(1, 1, 1, 1);


    g->Fit(f);

    g->SetTitle("My Fit Function");
    g->SetLineColor(kGreen);
    g->SetMarkerStyle(47);
    g->Draw("AP");
    
}