/* 
 * File:   main.cpp
 * Author: drami_000
 *
 * Created on July 7, 2015, 7:25 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float intdue = 0,
            totamnt = 0,
            balance,
            ftki = .015,
            afterki = .01,
            mnpymtp = .01,
            minpymt;
    char ans;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);

    do {
        cout << "Welcome to People's Credit Union.\n"
                << "Please enter your balance.\n";
        cin>>balance; //input our balance here.

        if (balance > 1 && balance < 10) {
            //cout << "between 1 and 100";// check to see if the boolean 
            //expression is working for  1-10.
            cout.precision(2);
            cout << "total amount due is: $" << balance << endl;
            cout << "Your minimum payment is: $" << balance << endl;
        } 
        else if (balance > 10 && balance <= 1000) {
            //cout << "between 1 and 100";// check to see if the boolean 
            //expression is working for  1-1000.
            intdue = balance * ftki;
            totamnt = intdue + balance;
            minpymt = totamnt*mnpymtp;

            cout.precision(2);

            cout << "total amount due is: $" << totamnt << endl;
            cout << "Your minimum payment is: $" << minpymt << endl;

        } 
        else if (balance > 1000) {
            //cout << "over 1000";// check to see if the boolean expression
            //is working for > 1000.
            intdue = balance * afterki;
            totamnt = intdue + balance;
            minpymt = totamnt*mnpymtp;

            cout.precision(2);
            
            cout << "total amount due is: $" << totamnt << endl;
            cout << "Your minimum payment is: $" << minpymt << endl;
        }
        cout << "\n\nWould you like to check another account? Y/N\n";
        cin>>ans;
    }   
    while (ans == 'y' || ans == 'Y');
    cout << "Goodbye.";
    return 0;
}

