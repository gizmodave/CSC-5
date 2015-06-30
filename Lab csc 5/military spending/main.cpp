/* 
 * File:   main.cpp
 * Author: David Ramirez
 * Created on June 24, 2015, 12:53 PM
 * Purpose: Homework, Military spending
 */

#include <cstdlib>
#include <iostream>

using namespace std;
//User Libraries
 
//Global constants
 
//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables Here
    float fedbdt,msdg,pcnt;
    fedbdt= 3.8e12;
    msdg= 606e9;
    //Input Values Here
 
    //Process Input Here
    pcnt= msdg/fedbdt*100;//Calculates the percentage of the military spending
    //Output Unknowns Here
    cout<<"The federal budget is 3.8 trillion dollars."<<endl;
    cout<<"We spend 606 billion of it on the military."<<endl;
    cout<<"Which is "<<pcnt<<"% of the federal budget."<<endl;
    //Exit Stage Right!
    return 0;
}

