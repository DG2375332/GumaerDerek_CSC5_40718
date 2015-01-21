/* 
 * File:   main.cpp
 * Author: Derek Gumaer
 * Created on January 20, 2015, 5:27 PM
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
    int f1=32,f2=212;//
    float c1=0,c2=100;//
    float cEqua, cInterp;
    //Loop to create a table
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Fahrenheit   Eq celsius    Interp Celsius"<<endl;
    for(int fahr=f1;fahr<=f2;fahr+=5){
        cEqua=5.0f/9*(fahr-32);
        cInterp=c1+(c2-c1)/(f2-f1)*(fahr-f1);
        cout<<setw(6)<<fahr<<setw(14)<<cEqua<<setw(16)<<cInterp<<endl;
        
    }
    //Output
    return 0;
}

