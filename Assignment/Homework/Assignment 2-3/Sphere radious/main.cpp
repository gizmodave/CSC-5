/* 
 * File:   main.cpp
 * Author: drami_000
 *
 * Created on July 5, 2015, 7:43 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>


using namespace std;

const float PI=3.1415;

int main(int argc, char** argv) {
    float rad,
            surA,
            cRence,
            vm;
    char ans;
    do{
    cout<<"Enter radius of the sphere.\n";
    cin>>rad;
    vm=((4.0/3.0)*PI*rad*rad*rad);
    surA=4*PI*rad*rad;
    cRence=2*PI*rad;
    
    cout<<"The sphere's volume is: "<<vm<<" M^2"<<endl;
    cout.setf(ios::fixed); 
    cout.setf(ios::showpoint); 
    cout.precision(3);
    cout<<"With a surface area of: "<<surA<<" M^3"<<endl;
    cout<<"and circumference of: "<<cRence<<" M"<<endl;
    cout<<"~~~~~~~~~~~~Legend~~~~~~~~~~~\n";
    cout<<"M = meters\n";
    cout<<"^ = 10 to a power of a number\n";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";        
    cout<<"Would you like to check another sphere?\n";
    cout<<"Y/N: ";
    cin>>ans;
    }
    while ( ans=='y' || ans=='Y');
    cout<<"\nGood bye.";

    return 0;
}

