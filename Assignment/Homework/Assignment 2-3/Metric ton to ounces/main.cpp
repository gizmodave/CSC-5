/* 
 * File:   main.cpp
 * Author: David Ramirez
 * Created on July 4, 2015, 7:33 PM
 * Purpose: converting ounces to metric tons
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char** argv) {
    float metTonc=35273.92,
            cBox,
            cBxmt1,
            cBxmt2;
    char ans;
    
    do{
    cout<<"Hello please enter the ounces of your cereal box to begin.\n";
    cout<<"Ounces: ";
    
    cin>>cBox;
    cBxmt1=cBox/metTonc;
    cBxmt2=metTonc/cBox;
    
    cout.setf(ios::fixed); 
    cout.setf(ios::showpoint); 
    cout.precision(5);
    
    cout<<"\nOne cereal box is "<<cBxmt1;
    cout<<" metric ton.\n";
    
    cout.setf(ios::fixed); 
    cout.setf(ios::showpoint); 
    cout.precision(2);
    
    cout<<"It would take "<<cBxmt2;
    cout<<" boxes of cereal to equal 1 metric ton.\n";
    cout<<"\nWould you like to do it again? Y/N\n";
    cin>>ans;
    }
    while (ans == 'y' || ans == 'Y');
    cout<<"Good bye\n";
       
    return 0;
}

