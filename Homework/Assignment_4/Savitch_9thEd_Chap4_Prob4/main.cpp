/* 
 * File:   main.cpp
 * Author: Derek Gumaer
 * Purpose: Convert and find MPG
 * Created on January 25, 2015, 10:09 PM
 */
//System Libraries
//#include <cstdlib>
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototype
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float prItem,oldVal;//Price of item; val of item 1 year ago
    float intRate;//Interest rate
    //Input price of item
    cout<<"Name the price of an item, include todays value";
    cout<<" and how much it cost 1 year from today."<<endl;
    cin>>prItem>>oldVal;
    intRate=(1.0f*(prItem-oldVal)/oldVal);
    intRate=intRate*100; //into Percent
    //Output
    cout<<"The inflation rate was "<<intRate<<" percent."<<endl;
    
    return 0;
}

