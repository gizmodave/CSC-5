/* 
 * File:   main.cpp
 * Author: David Ramirez
 * Created on July 9, 2015, 5:43 PM
 * Purpose: Buoyancy test
 */

//System libraries
#include <cstdlib>
#include <iostream> //file I/O

using namespace std;
//User libraries

//Global constants

//Function prototypes

int main(int argc, char** argv) {
    //declare variables
    float feet,
            weight,
            buoyant,
            comp,
            y=62.4,
            vol =(4/3)*3.1415*rad*rad*rad,
            diam,
            rad;
    
    do{
        cout << "Please enter the weight in lb and the radius in feet of \n";
        cout << "the sphere that you want to test.\n";
        cout << "lb: 1.2 and radius ft: 7.\n";
        cout << "lb: ";
        cin >> weight;
        cout << "Radius ft: ";
        cin >> feet;
        
   
        diam=2*feet;
        rad=diam/2;
        buoyant=vol*y;
        comp=
        
        
        
                
    }

    return 0;
}


