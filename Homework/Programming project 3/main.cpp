/* 
 * File:   main.cpp
 * Author: David Ramirez
 * Created on June 29, 2015, 7:21 PM
 * Purpose: Homework 1
 */
//System libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//User libraries

//Global constants

//Function prototypes
int main(int argc, char** argv) {
    //declare variables
    float quart=.25f,//defines the quarters value as a float
          dimes=.10f,//defines the 
          nckls=.05,//defines the
          chng,//holds the sum of the output
          chngQ,//Holds the product of qInp and quart as a decimal value
          chngD,//Holds the product of dInp and dimes as a decimal value
          chngN;//Holds the product of nInp and nckls as a decimal value
    int qInp,//User input
        dInp,//User input
        nInp;//User input
    //Manipulate the output        
    cout<<fixed<<showpoint;    
    cout<<setprecision(2);
    //Input unknown values here
    cout<<"Please enter your change in,\n";
    cout<<"Quarters: ";
    cin>>qInp;
    cout<<"Now dimes: ";
    cin>>dInp;
    cout<<"and finally nickels: ";
    cin>>nInp;
    //Calculate the unknown variables
    chngQ=qInp*quart;//we do the math here for quarters,dimes, and nickels
    chngD=dInp*dimes;
    chngN=nInp*nckls;
    chng=chngQ+chngD+chngN;//Add all our products up
    //Output unknowns
    cout<<"Your change is: $"<<chng<<endl;        
    //End program

    return 0;
}

