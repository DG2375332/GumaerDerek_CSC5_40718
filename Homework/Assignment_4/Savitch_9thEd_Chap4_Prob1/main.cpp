/* 
 * File:   main.cpp
 * Author: Derek Gumaer
 * Purpose: Convert and find MPG
 * Created on January 25, 2015, 6:54 PM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
const float LTTOGAL=0.264179;//Liters in a gallon
//Function Prototype
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float litCon,disTrav,mpg;//Liters consumed; Distance travelled; miles per gallon;
    cout<<"How many liters of gasoline ";
    cout<<"have you consumed?"<<endl;
    cin>>litCon;
    cout<<"How many miles did you travel?"<<endl;
    cin>>disTrav;
    //Convert units
    mpg=litCon*LTTOGAL*disTrav;
    //Output results
    cout<<"Your car got "<<endl;
    cout<<mpg<<" miles per gallon!"<<endl;
    //Exit stage right
    
    return 0;
}

