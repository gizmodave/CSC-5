/* 
 * File:   main.cpp
 * Author: David Ramirez
 * Created on June 27, 2015, 3:12 PM
 * Purpose: Lab 4, Crime statistics
 */
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//User libraries

//Global constants

//Function prototypes

//Execution begins here!
int main(int argc, char** argv) {
//Declare variables here
    float usVltc=11.88e6,
          enVltc=6.52e6,
          usPop=318e6,
          enPop=64e6,
          crmPop1,
          crmPop2;
//Calculate to get crime percentage
    crmPop1=(usVltc/usPop)*100;
    crmPop2=(enVltc/enPop)*100;
//Output
cout<<fixed<<showpoint;    
cout<<setprecision(2);
cout<<"The US has a population of approximately 318 million,\n";
cout<<"with a crime rate of "<<crmPop1<<"% "<<endl;   
cout<<"England has a population of approximately 64 million,\n";
cout<<"with a crime rate of "<<crmPop2<<"%"<<endl;
return 0;
//end program
}

