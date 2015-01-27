/* 
 * File:   main.cpp
 * Author: Derek Gumaer
 * Purpose: Feet and inches to meters and centimeters
 * Created on January 26, 2015, 7:31 PM
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
int infeet();//Input function
//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    char answer;//
    //Output results in loop
    do{
        infeet();
        cout<<"Would you like to convert again? Y or N"<<endl;
        cin>>answer;
    }while(answer=='Y'||answer=='y');
    //Exit stage right!
    return 0;
}

int infeet(){//int lengFt,int lengIn
    //Declare variables
    float lengFt,lengIn;//Length in feet; length in inches
    float totLenS;//Total length
    float lengMt, lengCm;//Length in meters; length in centimeters
    cout<<"How long in feet and inches is the boat? ";
    cout<<"Input feet, then inches"<<endl;
    cin>>lengFt>>lengIn;
    //Convert ft,in to meters, centimeters
    totLenS=lengFt+(1.0f*lengIn/INCVFT);
    lengMt=totLenS*MTCVFT;
    cout<<"Your boat is "<<lengMt<<" meters long!"<<endl;
    
} 
