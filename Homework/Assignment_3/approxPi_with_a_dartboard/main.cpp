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
#include <ctime>

using namespace std;
//User Libraries
//Global Constants
const float PI=4*atan(1);
const unsigned int MAXRAND=pow(2,31);
//Function Prototypes
//Execution Begins Here!

int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //How many darts do you want to throw
    unsigned int nDarts,inCirc=0;//
    //Prompt the user
    do{
        cout<<"This is a dart game"<<endl;
        cout<<"How many darts do you want to throw?"<<endl;
        cout<<"0 to 10^6"<<endl;
        cin>>nDarts;
    }while(nDarts>1000000);
    //Play the Game, throw the darts
    for(int dart=1;dart<=nDarts;dart++){
        float x=1.0f*rand()/MAXRAND;//(0,1) x coordinate of the dart
        float y=1.0f*rand()/MAXRAND;//(1,0) y coordinate of the dart
        if(x*x+y*y<=1)inCirc++;
        }
    //Calculate the approximate value of pi
    float approxPi=4.0f*inCirc/nDarts;
    //Output the results
    cout<<"The exact value of pie = "<<PI<<endl;
    cout<<"The approximate value of pi = "<<approxPi<<endl;
    return 0;
}

