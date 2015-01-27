/* 
 * File:   main.cpp
 * Author: Derek Gumaer
 * Purpose: Convert and find MPG
 * Created on January 25, 2015, 9:30 PM
 */
//System Libraries
//#include <cstdlib>
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
const float LTTOGAL=0.264179;//Liters in a gallon
//Function Prototype
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float litCon,litCon2,disTrav,disTrav2,mpg,mpg2;//Liters consumed; Distance travelled; miles per gallon;
    cout<<"How many liters of gasoline ";
    cout<<"have you consumed? How about your friends car?"<<endl;
    cin>>litCon>>litCon2;
    cout<<"How many miles did you travel? How about your friend?"<<endl;
    cin>>disTrav>>disTrav2;
    //Convert units
    mpg=litCon*LTTOGAL*disTrav;
    mpg2=litCon2*LTTOGAL*disTrav2;
    //Output results
    cout<<"Your car got "<<endl;
    cout<<mpg<<" miles per gallon!"<<endl;
    cout<<"Your friends car got "<<endl;
    cout<<mpg2<<" miles per gallon!"<<endl;
    if(mpg>mpg2)cout<<"Your car got better miles per gallon!"<<endl;
    else cout<<"Your friends car got better miles per gallon!"<<endl;
    //Exit stage right
    
    return 0;
}

