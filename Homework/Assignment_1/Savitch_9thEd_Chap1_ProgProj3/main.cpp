/* 
 * File:   main.cpp
 * Author: Derek Gumaer
 * Created on January 11, 2015, 10:08 PM
 * Purpose: Homework Chapter 1 Project 3
 */

#include <iostream>
using namespace std;

//User Libaries
//Global Constants
const char VALQTR =25;//Value of a quarter=25 cents
const char VALDIME=10;//Value of a quarter=25 cents
const char VALNCKL= 5;//Value of a quarter=25 cents

//Function Prototypes
//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char q,d,n; //q is Quarters, d is Dimes, n is Nickels
    short total;//total amount in cents
    //Input how many of each coins
    cout<<"This program counts your change!"<<endl; 
    cout<<"Limit each number of coin input to a range of 0-9"<<endl;
    cout<<"How many Quarters do you have?"<<endl;
    cin>>q;
    cout<<"How many Dimes do you have?"<<endl;
    cin>>d;
    cout<<"How many Nickels do you have?"<<endl;
    cin>>n;
    //Calculate the sum of the coins
    total = static_cast<unsigned short>
         ((q-48)*VALQTR   + 
          (d-48)*VALDIME  + 
          (n-48)*VALNCKL);
    //output the results
    cout<<"You have ";
    cout<<total;
    cout<<" cents in change."<<endl;
    //Exit stage right
    return 0;
}
