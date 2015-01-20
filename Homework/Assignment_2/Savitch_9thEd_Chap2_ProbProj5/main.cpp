/* 
 * File:   main.cpp
 * Author: Derek Gumaer
 * Created on January 19, 2015, 5:56 PM
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
    int maxCap;//Maximum capacity
    int pplAtnd;//Number of people attending
    int overCap;//Number of people over max capacity
    //Prompt for the input
    cout<<"Whats the maximum capacity of the room?"<<endl;
    cin>>maxCap;
    cout<<"How many people will be attending?"<<endl;
    cin>>pplAtnd;
    //Calculate
    overCap=pplAtnd-maxCap;
    //Output the result
    if(pplAtnd>maxCap)cout<<"You have "<<overCap<<" people to many! Only "<<maxCap<<" can fit."<<endl;
    else cout<<pplAtnd<<" are attending! Everyone can fit."<<endl;
    //Exit stage right
    return 0;
}


