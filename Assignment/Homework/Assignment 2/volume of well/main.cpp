/* 
 * File:   main.cpp
 * Author: drami_000
 *
 * Created on July 6, 2015, 1:10 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

    float pi = 3.1415,
            cldvol,
            gallons,
            convH,
            galPper = .004329;

    int fammemb,
            persons,

            rad,
            wellH;

    char ans;
    do {
        cout << "Please enter the radius in inches.\n";
        cin>>rad;
        cout << "Now please enter the height in feet.\n";
        cin>>wellH;
        convH = wellH * 12;
        cldvol = pi * rad * rad * convH;
        gallons = cldvol*galPper;

        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(0);

        if (gallons > 250) {
            cout << "\nYour well will hold " << gallons << " gallons of water.\n";
            cout << "You wont need a holding tank.";
        }
        else if (gallons < 250){
            cout << "\nYour well will hold " << gallons << " gallons of water.\n";
            cout << "It looks like you will need a holding tank.\n";

        }
        cout << "\nwould you like to calculate another well? Y/N\n";
        cin>>ans;
    }    
    while (ans == 'y' || ans == 'Y');
    cout << "Good bye.";

    return 0;
}

