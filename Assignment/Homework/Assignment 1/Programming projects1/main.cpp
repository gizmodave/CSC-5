/* 
 * File:   main.cpp
 * Author: David Ramirez
 * Created on June 29, 2015, 1:45 PM
 * Purpose: Homework, Programming projects 1
 */
//System Libraries
#include <cstdlib>//your standard library.
#include <iostream>// your input/output library.
using namespace std;
//User Libraries.
 
//Global constants.
 
//Function Prototypes.
int main(int argc, char** argv) {
    //Declare Variables Here.
    int a,//User enters the first number to get added.
        b,//User enters the second number to get added.
        c;//This holds the sum of "a" and "b".  
    //Input Values Here.
    cout<<"Please enter 2 numbers,\n";
    cout<<"and press enter.\n";
    cin>>a;//user input.
    cin>>b;//user input.
    //Process Input Here.
    c=a+b;//We calculate after we receive user input, 
    //because we didn't specify what "a" and "b" was when we declared variables.
    //Output the answer.
    cout<<"Answer: "<<c<<endl;
    //end program.
    return 0;
}

