/* 
 * File:   main.cpp
 * Author: Derek Gumaer
 * Purpose: Meters and centimeters to feet and inches
 * Created on January 26, 2015, 8:40 PM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
const float MTCVFT=0.3048;//Meters in a foot
const float CTCVMET=100;//Centimeters in a meter
const float INCVFT=12;//Inches in a foot
//Function Prototype
int inmeter();//Input function
//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    char answer;//
    //Output results in loop
    do{
        inmeter();
        cout<<"Would you like to convert again? Y or N"<<endl;
        cin>>answer;
    }while(answer=='Y'||answer=='y');
    //Exit stage right!
    return 0;
}

int inmeter(){//int lengFt,int lengIn
    //Declare variables
    float lengFt,lengIn;//Length in feet; length in inches
    float totLen;//Total length
    float lengMt, lengCm;//Length in meters; length in centimeters
    cout<<"How long in meters and centimeters is the boat? ";
    cout<<"Input meters, then centimeters"<<endl;
    cin>>lengMt>>lengCm;
    totLen=lengMt+(1.0f*lengCm/CTCVMET);
    lengFt=totLen*MTCVFT;
    //Convert ft,in to meters, centimeters
    //totLen=lengFt+(1.0f*lengIn/INCVFT);
    //lengMt=totLen*MTCVFT;
    cout<<"Your boat is "<<lengFt<<" feet long!"<<endl;
    
} 
