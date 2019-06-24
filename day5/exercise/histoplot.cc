#include "histoplot.h"

void histoplot()
{
    // read data from text file "PI_CH0"
    // this file has 1 column of float data
    // all data are saved in the array 'integrals' 
    std::ifstream in;
    Float_t temp;
    in.open("/home/mingf2/ROOT_workshop/day5/exercise/PI_CH0");
    std::vector<Float_t> integrals;
    while(in >> temp)
    {
        // in >> temp;
        integrals.push_back(temp);
    }
    in.close();

    // Part1: create a histogram using 'Fill'; set the title to "Pulse integral distribution"
    // add your code here
    // hint: to access the elements in 'integrals', use integrals[i]
    TH1 *h1 = new TH1F("h1","Pulse integral distribution", 200, 0, 0);
    for(int i=0; i < integrals.size(); i++){
        h1->Fill(integrals[i]);
    }



    // Part2: fit the histogram to a Gaussian and plot.
    // add your code here
    // hint: to fit the histogram, use 'hist->Fit("formula","","",min,max)
    h1->Fit("gaus","","",10000,15000);
    
    
    h1->Draw();
    

}