/* 
 * File:   main.cpp
 * Author: Derek Gumaer
 * Purpose: 
 * Created on January 25, 2015, 10:38 PM
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
    //Declare variable
    float prItem,yrItem1,yrItem2,oldVal;//Price of item; val of item in 1 year; in 2 years
    float intRate;//Interest rate
    //Input price of item
    cout<<"Name the price of an item, include todays value";
    cout<<" and how much it cost 1 year ago."<<endl;
    cin>>prItem>>oldVal;
    intRate=(1.0f*(prItem-oldVal)/oldVal);
    //intRate=intRate*100; //into Percent
    //Output
    yrItem1=prItem*(1.0f+intRate);
    yrItem2=yrItem1*(1.0f+intRate);
    cout<<"The inflation rate was "<<intRate*100<<" percent."<<endl;
    cout<<"Your item will cost "<<yrItem1<<" in 1 year, and ";
    cout<<yrItem2<<" in 2 years!"<<endl;
    
    return 0;
}

