#include "exercise.h"

void exercise()
{
    // The values and the errors on the Y axis
    const int n_points = 10;
    double x_vals[n_points] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double y_vals[n_points] = {6, 12, 14, 20, 22, 24, 35, 45, 44, 53};
    double y_errs[n_points] = {5, 5, 4.7, 4.5, 4.2, 5.1, 2.9, 4.1, 4.8, 5.43};

    // Instance of the graph
    auto graph = new TGraphErrors(n_points, x_vals, y_vals, nullptr, y_errs);
    graph->SetTitle("Measurement;Length [cm];Arb.Units");

    // Make the plot esthetically better
    graph->SetMarkerStyle(24);
    graph->SetMarkerColor(kBlue);
    graph->SetLineColor(kBlue);

    // Draw the graph !
    graph->Draw("APE");

    // Define a linear function
    auto f = new TF1("Linear law", "-1+x*5", .5, 10.5);
    f->SetLineColor(kRed);
    f->SetLineStyle(2);
    f->Draw("Same");
}