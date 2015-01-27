/* 
 * File:   main.cpp
 * Author: Derek Gumaer
 * Purpose: Convert pounds and ounces to kilograms
 * Created on January 26, 2015, 10:04 PM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
const float PNDCVKLO=2.2046;//Pounds to Kilograms
const float GRCVKLO=1000;//Grams in a kilogram
const float OZCVPND=16;//Ounces to pound
//Function Prototype
int inpound();//Input function of in pounds
//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    char answer;//
    //Output results in loop
    do{
        inpound();
        cout<<"Would you like to convert again? Y or N"<<endl;
        cin>>answer;
    }while(answer=='Y'||answer=='y');
    //Exit stage right!
    return 0;
}

int inpound(){//int lengFt,int lengIn
    //Declare variables
    float wtPnds,wtOz;//Length in feet; length in inches
    float totWt;//Total length
    float wtKilo, wtGram;//Length in meters; length in centimeters
    cout<<"How much does your pig weigh in pounds? ";
    cout<<"Input pounds, then ounces"<<endl;
    cin>>wtPnds>>wtOz;
    totWt=wtPnds+(1.0f*wtOz/OZCVPND);
    wtKilo=totWt*PNDCVKLO;
    //Convert ft,in to meters, centimeters
    //totLen=lengFt+(1.0f*lengIn/INCVFT);
    //lengMt=totLen*MTCVFT;
    cout<<"Your pig weighs "<<wtKilo<<" kilograms!"<<endl;
    
} 
