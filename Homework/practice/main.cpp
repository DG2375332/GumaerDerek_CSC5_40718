/* 
 * File:   main.cpp
 * Author: Derek Gumaer
 * Created on January 8, 2015, 6:28 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;
//User Libaries
//Global Constants
const char CONVPCT = 100; //percent conversion


//Function Prototypes
//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    float skPrice=2.177e1f; // stock price in $'s
    unsigned short nShares=600;//number of shares of stock
    char comish=2;//2 percent sales commission
    //Calculate sales price, commission, and total in $'s
    float slPrice=nShares*skPrice;
    float cmPrice=slPrice*comish/CONVPCT;
    float totPaid=slPrice+cmPrice;
    //Output the results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Sales price = $"<<setw(8)<<slPrice<<endl;
    cout<<"Commision   = $"<<setw(8)<<cmPrice<<endl;
    cout<<"Total Paid  = $"<<setw(8)<<totPaid<<endl;
    return 0;
}



