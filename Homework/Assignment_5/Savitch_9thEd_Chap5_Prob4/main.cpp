/* 
 * File:   main.cpp
 * Author: Derek Gumaer
 * Purpose: Conversions
 * Created on January 26, 2015, 9:47 PM
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
int inmeter();//Input function
//Execution begins here
int main(int argc, char** argv) {
    int choice;
    cout<<"Press 1 and hit enter if you'd like to convert";
    cout<<" feet to meters. Or press 2 if you want to convert";
    cout<<" meters to feet!"<<endl;
    cin>>choice;
    switch(choice){
        case 1:{
            //Declare Variables
            char answer;//
            //Output results in loop
            do{
                infeet();
                cout<<"Would you like to convert again? Y or N"<<endl;
                cin>>answer;
            }while(answer=='Y'||answer=='y');
            //Exit stage right!
            break;
        }
        case 2:{
            //Declare Variables
            char answer;//
            //Output results in loop
            do{
                inmeter();
                cout<<"Would you like to convert again? Y or N"<<endl;
                cin>>answer;
            }while(answer=='Y'||answer=='y');
            //Exit stage right!
            default: cout<<"You chose to exit"<<endl;
            }
        }
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