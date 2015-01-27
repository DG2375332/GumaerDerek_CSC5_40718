/* 
 * File:   main.cpp
 * Author: Derek Gumaer
 * Purpose: Convert weights
 * Created on January 26, 2015, 11:03 PM
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
int inkilos();//Input function in kilos
int inpound();//Input function in pounds
//Execution begins here
int main(int argc, char** argv) {
    int choice;
    cout<<"Press 1 and hit enter if you'd like to convert";
    cout<<" pounds to kilograms. Or press 2 if you want to convert";
    cout<<" kilograms to pounds!"<<endl;
    cin>>choice;
    switch(choice){
        case 1:{
            //Declare Variables
            char answer;//
            //Output results in loop
            do{
                inpound();
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
                inkilos();
                cout<<"Would you like to convert again? Y or N"<<endl;
                cin>>answer;
            }while(answer=='Y'||answer=='y');
            //Exit stage right!
            default: cout<<"You chose to exit"<<endl;
            }
        }
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
    cout<<"Your pig weighs "<<wtKilo<<" kilograms!"<<endl;
    
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

