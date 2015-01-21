/* 
 * File:   main.cpp
 * Author: Derek Gumaer
 * Created on January 20, 2015, 8:30 PM
 * Purpose: Using random numbers approx pi
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare variables
    float exactEx,approxEx=1,x,term=1,tol=1e-6f;
    int count;
    //Prompt the user for input
    cout<<"Calculate e^x"<<endl;
    cout<<"Input the value of x"<<endl;
    cin>>x;
    //Calculate the approximate e^x
    for(count=1;term>tol;count++){
        term*=x/count;
        approxEx+=term;
    }
    //Calculate the exact value of e^x
    exactEx=exp(x);
    //Compare the exact with approximate
    cout<<"The exact value  = "<<exactEx<<endl;
    cout<<"The approx value = "<<approxEx<<endl;
    cout<<"The number of terms used = "<<count<<endl;
    //Exit stage right!
    
    return 0;
}

