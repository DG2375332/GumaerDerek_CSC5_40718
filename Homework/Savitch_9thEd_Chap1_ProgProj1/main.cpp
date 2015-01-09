/* 
 * File:   main.cpp
 * Author: Derek Gumaer
 * Created on January 8, 2015, 6:28 PM
 */

#include <iostream>
using namespace std;

//User Libaries
//Global Constants
//Function Prototypes
//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    int op1,op2,sum=0,prod=1;
    //Prompt for the two operands
    cout<<"Input 2 integers having a range of [-2^3],"<<endl;
    cin>>op1>>op2;
    //Calculate the sum and the product
    sum=sum+op1;
    sum=sum+op2;
    prod=prod*op1;
    prod=prod*op2;
    //Output the results
    cout<<op1<<" +  "<<op2<<" = "<<sum<<endl;
    cout<<op1<<" *  "<<op2<<" = "<<prod<<endl;       
            
    return 0;
}

