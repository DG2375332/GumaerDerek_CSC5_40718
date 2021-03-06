/* 
 * File:   main.cpp
 * Author: Derek Gumaer
 * Created on January 20, 2015, 8:30 PM
 * Purpose: Infinite sequence approx for pi
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//User Libraries
//Global Constants
const float PI=4*atan(1);
//Function Prototypes
//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables
    float approxPi=1;//
    unsigned int terms=1,nTerms=1;//
    //Promt user for number of terms to use
    do{
        cout<<"How many terms in series to use?"<<endl;
        cout<<"Choose an odd number integer <2^32 !"<<endl;
        cin>>nTerms;
    }while(!(nTerms%2));
    //Calculate the approximate value of PI
    for(unsigned int denom=3;terms<=nTerms;denom+=4,terms+=2){
        approxPi+=(-1.0f/(denom)+1.0f/(denom+2));
    }
    approxPi*=4;
    //Output the result
    cout<<"Exact value of PI = "<<PI<<endl;
    cout<<"Approximate value of PI = "<<approxPi<<endl;
    return 0;
}

