/* 
 * File:   main.cpp
 * Author: Derek Gumaer
 * Created on January 12, 2015, 10:30 AM
 * Purpose: Hmwk, Solution to free fall problem
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//const float GRAVITY=32.174f;//(ft/sec^2)
const float GRAVITY=3.2174e1f;//(ft/sec^2)

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    unsigned int time;//(secs)
    float dist;//distance (ft)
    //Prompt user for input
    cout<<"This program calculates free fall"<<endl;
    cout<<"distance dropped in feet with an"<<endl;
    cout<<"Object starting at rest."<<endl;
    cout<<"Input the free-fall time to drop in seconds."<<endl;
    cout<<"The time input is a positive integer"<<endl;
    cin>>time;
    //Calculate the distance dropped
    //dist=1.0f/2*GRAVITY*time*time;
    //dist=1/2.0f*GRAVITY*time*time;
    //dist=GRAVITY*time*time/2;
    //dist=0.5f*GRAVITY*time*time;
    dist=5e-1f*GRAVITY*time*time;
    //Output the results
    cout<<"Distance dropped = "<<dist<<" (ft)"<<endl;
    //Exit stage right
    return 0;
}

