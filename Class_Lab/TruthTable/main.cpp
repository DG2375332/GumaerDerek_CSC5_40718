/* 
 * File:   main.cpp
 * Author: Derek Gumaer *
 * Created on January 13, 2015, 6:34 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare 2 boolean variables
    //bool X,Y;//declared and initialzed in for loops
    //Variables
    int a=2;
    int b=3;
    int temp=a;
    //Output the Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y ";
    cout<<"X^Y^X !(X||Y) !X&&!Y !(X&&Y) !X||!Y"<<endl;
    //Fill in the first row
    for(int X=1;X>=0;X--){
        for(int Y=1;Y>=0;Y--){
            cout<<(X?'T':'F')<<" ";
            cout<<(Y?'T':'F')<<"  ";
            cout<<(!X?'T':'F')<<"  ";
            cout<<(!Y?'T':'F')<<"   ";
            cout<<(X&&Y?'T':'F')<<"    ";
            cout<<(X||Y?'T':'F')<<"   ";
            cout<<(X^Y?'T':'F')<<"    ";
            cout<<(X^Y^Y?'T':'F')<<"     ";//start
            cout<<(X^Y^X?'T':'F')<<"       ";
            cout<<(!(X||Y)?'T':'F')<<"     ";
            cout<<(!X&&!Y?'T':'F')<<"       ";
            cout<<(!(X&&Y)?'T':'F')<<"       ";
            cout<<(!X||!Y?'T':'F')<<"      ";
            cout<<endl;
        }
    }

    
    //Show values for swap
    cout<<"A = "<<a<<endl;
    cout<<"B = "<<b<<endl;

    //Swap
    a=b;
    b=temp;
    cout<<"Swap a=b"<<endl;
    cout<<"     b=temp"<<endl;
    cout<<"A = "<<a<<endl;
    cout<<"B = "<<b<<endl;
    
    //Swap back
    cout<<"Lets swap back"<<endl;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"A = "<<a<<endl;
    cout<<"B = "<<b<<endl;
    
    return 0;
} 
