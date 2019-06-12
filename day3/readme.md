# Graphics Exercises

In this exercise, you will follow the steps:
- Create the initial data set by placing the code below in a macro:
```c++
// The number of points in the data set
const int N = 10;
// The values along X and Y axis
double x_vals[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
double y_vals[N] = {6, 12, 14, 20, 22, 24, 35, 45, 44, 53};
// The errors on the Y axis
double y_errs[N] = {5, 5, 4.7, 4.5, 4.2, 5.1, 2.9, 4.1, 4.8, 5.43};
```
- Create a `TGraphErrors` instance using the aforementioned data.
- Set the titles for the graph (*"Measurement"*) and for the axis ("*length [cm]"* and *"Arb.Units"* for x and y).
- Set line color and marker color to blue. Set marker style to open circle (vaule = 24).
- Draw the graph data in an error bars plot with the draw options: *"APE"*.
- Add a function to compare the data with a line. Use the formula *"-1 + x\*5"*. Use dashed line and set line color to red. Draw the function in the same canvas as the graph. 

