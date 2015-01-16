/* 
 * File:   main.cpp
 * Author: Derek Gumaer
 * Created on January 8, 2015, 8:16 PM
 * Purpose: Homework
 */


#include <iostream>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes
//Execution begins here

int main(int argc, char** argv) {
    //Declare and Initialize variables
    float gasTank=20;//max Gallons in gas tank
    float inTown=21.5;//Miles per gallon Town
    float onHWay=26.8;//Miles per gallon Highway
    //Calculate the total miles in and out of town
    float disTown=gasTank*inTown;
    float disHWay=gasTank*onHWay;
    //Output the results
    cout<<"Distance in town on tank of gas    = ";
    cout<<disTown<<"(miles)"<<endl;
    cout<<"Distance in Highway on tank of gas = ";
    cout<<disHWay<<"(miles)"<<endl;
    return 0;
}

