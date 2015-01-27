/* 
 * File:   main.cpp
 * Author: Derek Gumaer
 * Purpose: Convert and find MPG
 * Created on January 25, 2015, 9:51 PM
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
    int numShar;//Number of shares
    short wlVal,fNval,fDval;//Whole value of share; fraction value numerator; fraction value denom
    int sharVal;//Value of shares
    //Input share info
    cout<<"How many shares do you own?"<<endl;
    cin>>numShar;
    cout<<"What is the value of your shares? ";
    cout<<"Input whole value, the numerator of fraction, and denominator of fraction"<<endl;
    cin>>wlVal>>fNval>>fDval;
    //Calculate value of shares
    sharVal=numShar*(wlVal+(1.0f*fNval/fDval));
    cout<<sharVal;
    return 0;
}

