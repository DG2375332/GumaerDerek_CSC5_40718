/* 
 * File:   main.cpp
 * Author: Derek Gumaer
 * Purpose: Convert kilograms and grams to pounds
 * Created on January 26, 2015, 10:26 PM
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
int inkilos();//Input function of in kilos
//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    char answer;//
    //Output results in loop
    do{
        inkilos();
        cout<<"Would you like to convert again? Y or N"<<endl;
        cin>>answer;
    }while(answer=='Y'||answer=='y');
    //Exit stage right!
    return 0;
}

int inkilos(){//int lengFt,int lengIn
    //Declare variables
    float wtPnds,wtOz;//Length in feet; length in inches
    float totWt;//Total length
    float wtKilo, wtGram;//Length in meters; length in centimeters
    cout<<"How much does your pig weigh in kilograms? ";
    cout<<"Input kilograms, then grams"<<endl;
    cin>>wtKilo>>wtGram;
    
    totWt=wtKilo+(1.0f*wtGram/GRCVKLO);
    wtPnds=totWt*PNDCVKLO;
    cout<<"Your pig weighs "<<wtPnds<<" pounds!"<<endl;
    
} 
