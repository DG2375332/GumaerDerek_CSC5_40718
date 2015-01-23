/* 
 * File:   main.cpp
 * Author: Derek Gumaer
 * Created on January 20, 2015, 7:44 PM
 * Purpose: Show exponential increases
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare variables
    unsigned int wallet=1;//Interget number of pennies
    unsigned short numDays;//Number of days to double
    unsigned int totPay=0;//Total pay after n days doubled
    //Output the number of days to double your wallet
    cout<<"How many days to double the contents of your wallet?"<<endl;
    cout<<"Your wallet starts with $0.01"<<endl;
    cout<<"Maximum days allowed = 30"<<endl;
    cin>>numDays;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"On the first day ";
    cout<<" your wallet     = $"<<wallet/100.0f<<endl;
    //Calculate the result
    for(int day=2;day<=numDays;day++){
        wallet*=2;
        //wallet<<=1;//shifts over 2 places. also times 2
        
        
        
        totPay+=wallet;
        cout<<"After "<<day<<" days";
        cout<<" your wallet         = $"<<wallet/100.0f<<endl;
    }
    //Output the result
    cout<<"After "<<numDays<<" days";
    cout<<" your total wallet    = $"<<totPay/100.0f<<endl;
    return 0;
}

