/* 
 * File:   main.cpp
 * Author: Derek Gumaer
 * Created on January 12, 2015, 5:10 PM
 * Purpose: Homework Chapter 1 Section 1 Problem 1 and 2
 */


#include <iostream>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes
//Execution begins here

int main(int argc, char** argv) {
    //Variables
    int number_of_pods, peas_per_pod, total_peas;
    //Start Program from figure 1.8
    cout<<"Hello\n"<<endl;
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the number of pods:\n";
    cin>>number_of_pods;
    cout<<"Enter the number of peas in a pod:\n";
    cin>>peas_per_pod;
    total_peas=number_of_pods*peas_per_pod;
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" pea pods\n";
    cout<<"and ";
    cout<<peas_per_pod;
    cout<<" peas in each pod, then\n";
    cout<<"you have ";
    cout<<total_peas;
    cout<<" peas in all the pods.\n";
    cout<<"Good-bye\n"<<endl;
    
    return 0;
}

