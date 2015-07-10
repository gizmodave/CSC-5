/* 
 * File:   main.cpp
 * Author: David Ramirez
 * Created on July 9, 2015, 6:15 PM
 * Purpose: test the buoyancy equation.
 */
//System libraries
#include <cstdlib>
#include <iostream>

using namespace std;
//User libraries

//Global constants

//Function prototypes
float buoyncy(float y, float vol) {
    float bouyant;
    bouyant = y*vol;
    return bouyant;
}
int main(int argc, char** argv) {
    //declare variables
    float pi = 3.1415,
            feet = 1,
            weight = 78,
            y,
            density,
            vol;
            y = 62.4;
            
    vol = (1.33 * pi) * feet * feet*feet;
    density=weight/vol;
    //output answer
    cout << "Buoyancy: " << buoyncy(y, vol) << " Sphere weight: "
            <<density<<".lb"
            << " Volume: " << vol << "ft^3 "<< endl;
    if (buoyncy(y, vol) >= density)
        cout << "It floats";
    else if (buoyncy(y, vol) < density) {
        cout << "Its going to sink.";
    }
    return 0;
}





