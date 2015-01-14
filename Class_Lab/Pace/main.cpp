/* 
 * File:   main.cpp
 * Author: Derek Gumaer *
 * Created on January 13, 2015, 6:34 AM
 * savitch 9th prob 3
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const int CNVHRMN=60;//conversion from hours to mins
const int CNVMNSC=60;//conversion from mins to seconds

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float mph;//miles per hour on a treadmill
    float hpm;//pace as hours per mile
    float fmpm;//miles per minute as a float
    int impm;//miles per minute as an integer
    float fmspm;//fraction left for seconds per mile
    //Prompt for the input
    cout<<"How many miles are you running"<<endl;
    cout<<"in an hour?"<<endl;
    cout<<"Format answer as a float."<<endl;
    cin>>mph;
    //Calculate the relevant pace
    hpm=1/mph;
    fmpm=hpm*CNVHRMN;
    impm=static_cast<int>(fmpm);
    fmspm=(fmpm-impm)*CNVMNSC;
    //Output the result
    cout<<mph<<" = ";
    cout<<impm<<" (mins)";
    cout<<fmspm<<" (secs) per mile"<<endl;
    
    return 0;
}

