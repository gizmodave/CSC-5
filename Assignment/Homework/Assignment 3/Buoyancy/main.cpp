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
float buoyncy(float y, float vol) {
    float bouyant;
    bouyant = y*vol;
    return bouyant;
}
int main(int argc, char** argv) {
    //declare variables
    float feet,
            pi=3.1415,
            weight,
            buoyant,
            comp,
            y=62.4,
            objwght,
            vol;
            
    char ans;
    do{
        cout << "Please enter the weight in lb and the radius in feet of \n";
        cout << "the sphere that you want to test.\n";
        cout << "lb: 1.2 and radius ft: 7.\n";
        cout << "lb: ";
        cin >> weight;
        cout << "Radius ft: ";
        cin >> feet;
        
        
        vol = 4/3 * pi*feet*feet*feet;
        objwght=weight/3;
    //output answer
    cout << "Buoyancy: " << buoyncy(y, vol) << " Sphere weight: "
            <<objwght<< " Volume: " << vol << " ft^3 "<< endl;
    if (buoyncy(y, vol) >= objwght)
        cout << "\nIt floats.\n";
    else if (buoyncy(y, vol) < objwght) {
        cout << "\nIts going to sink.\n";
                  
    }
    cout<<"\nwould you like to check another sphere? Y/N\n";
    cin>>ans;
    }
    while(ans == 'y'|| ans == 'Y');
    cout<<"\nGood bye.";

    return 0;
}


