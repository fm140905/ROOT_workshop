#include "errorgraph.h"

void errorgraph()
{
    // The number of points in the data set
    const int N = 10;
    // The values along X and Y axis
    double x_vals[N] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    double y_vals[N] = {7, 4, 3, 4, 7, 12, 19, 28, 39, 52};
    // The errors on the Y axis
    double y_errs[N] = {0.5, 0.5, 0.7, 1.5, 2.2, 5.1, 2.9, 4.1, 4.8, 5.43};

    // Instance of the graph
    auto graph = new TGraphErrors(N, x_vals, y_vals, 0, y_errs);
    graph->SetMarkerStyle(20);
    // Draw the graph !
    graph->Draw("APE");
}