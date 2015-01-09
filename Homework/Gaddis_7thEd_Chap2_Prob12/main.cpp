/* 
 * File:   main.cpp
 * Author: Derek Gumaer
 * Created on January 8, 2015, 6:28 PM
 * Purpose:
 */

#include <iostream>
#include <iomanip>
using namespace std;
//User Libaries
//Global Constants
const unsigned short CVFTACS=43560;//Percent conversion


//Function Prototypes
//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    float inSqFt,outAcrs;

    //Prompt for input
    cout<<"Input the number of square feet"<<endl;
    cout<<"to convert to Acres"<<endl;
    cin>>inSqFt;
    //Calculate Acres
    outAcrs=inSqFt/CVFTACS;
    //Output the results
    cout<<inSqFt<<"(sq feet) = ";
    cout<<outAcrs<<"(acres)"<<endl;
    //Exit stage right!

    return 0;
}



