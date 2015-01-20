/* 
 * File:   main.cpp
 * Author: Derek Gumaer
 * Created on January 19, 2015, 7:22 PM
 */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float hrWork;//Number of hours worked
    float hrPay=16.78;//$ per hour
    float overPay=25.17;//Overtime $per hour
    char dpnds;//Number of dependants
    float grsPay;//Gross pay
    float SStax=.94;//Social security tax %6 taken off gross pay
    float FediTax=.86;//Federal income tax %14 taken off gross pay
    float SiTax=.95;//State income tax %5 taken off gross pay
    int uniDues=10;//Union dues of 10$
    float overWork;//Number of overtime hours worked
    //Prompt for the input
    cout<<"How many hours did you work this week?"<<endl;
    cin>>hrWork;
    //Calculate
    overWork=hrWork-40;
    if(hrWork<=40) grsPay=(hrWork*hrPay)*SStax*FediTax*SiTax-uniDues;
    else grsPay=((overWork*overPay)+((hrWork-overWork)*hrPay))*SStax*FediTax*SiTax-uniDues;
    cout<<grsPay<<endl;
    //Output the result

    //Exit stage right
    return 0;
}


