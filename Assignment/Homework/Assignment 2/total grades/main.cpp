/* 
 * File:   main.cpp
 * Author: drami_000
 *
 * Created on July 6, 2015, 11:16 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;



int main(int argc, char** argv) {
    int numT,
            xscore1,
            xscore2,
            xscore3,
            xscore4,
            xscore5,
            pscore1,
            pscore2,
            pscore3,
            pscore4,
            pscore5,
            pscr;

    float percent,
            tpscore,
            tscore;
    
    char ans;
    
    do {
        cout << "How many exercises to input?: ";
        cin>>numT;

        if (numT == 1) {
            cout << "\nScore received for exercise 1: ";
            cin>>xscore1;
            cout << "Total points possible for exercise 1: ";
            cin>>pscore1;
            tscore = xscore1;
            tpscore = pscore1;
            percent = (tscore / tpscore)*100;

            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);

            cout << "Your total is " << tscore << " out of " << tpscore << ", ";
            cout << "or " << percent << "%." << endl;

        }
        else if (numT == 2) {
            cout << "\nScore received for exercise 1: ";
            cin>>xscore1;
            cout << "Total points possible for exercise 1: ";
            cin>>pscore1;
            cout << "\nScore received for exercise 2: ";
            cin>>xscore2;
            cout << "Total points possible for exercise 2: ";
            cin>>pscore2;

            tscore = xscore1 + xscore2;
            tpscore = pscore1 + pscore2;
            percent = (tscore / tpscore)*100;

            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);


            cout << "\nYour total is " << tscore << " out of " << tpscore << ", ";
            cout << "or " << percent << "%." << endl;
            
        }
        else if (numT == 3) {
            cout << "\nScore received for exercise 1: ";
            cin>>xscore1;
            cout << "Total points possible for exercise 1: ";
            cin>>pscore1;
            cout << "\nScore received for exercise 2: ";
            cin>>xscore2;
            cout << "Total points possible for exercise 2: ";
            cin>>pscore2;
            cout << "\nScore received for exercise 3: ";
            cin>>xscore3;
            cout << "Total points possible for exercise 3: ";
            cin>>pscore3;

            tscore = xscore1 + xscore2 + xscore3;
            tpscore = pscore1 + pscore2 + pscore3;
            percent = (tscore / tpscore)*100;

            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);


            cout << "\nYour total is " << tscore << " out of " << tpscore << ", ";
            cout << "or " << percent << "%." << endl;
            
        }
        else if (numT == 4) {
            cout << "\nScore received for exercise 1: ";
            cin>>xscore1;
            cout << "Total points possible for exercise 1: ";
            cin>>pscore1;
            cout << "\nScore received for exercise 2: ";
            cin>>xscore2;
            cout << "Total points possible for exercise 2: ";
            cin>>pscore2;
            cout << "\nScore received for exercise 3: ";
            cin>>xscore3;
            cout << "Total points possible for exercise 3: ";
            cin>>pscore3;
            cout << "\nScore received for exercise 4: ";
            cin>>xscore4;
            cout << "Total points possible for exercise 4: ";
            cin>>pscore4;

            tscore = xscore1 + xscore2 + xscore3 + xscore4;
            tpscore = pscore1 + pscore2 + pscore3 + pscore4;
            percent = (tscore / tpscore)*100;

            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);


            cout << "\nYour total is " << tscore << " out of " << tpscore << ", ";
            cout << "or " << percent << "%." << endl;
        }
        else if (numT == 5) {
            cout << "\nScore received for exercise 1: ";
            cin>>xscore1;
            cout << "Total points possible for exercise 1: ";
            cin>>pscore1;
            cout << "\nScore received for exercise 2: ";
            cin>>xscore2;
            cout << "Total points possible for exercise 2: ";
            cin>>pscore2;
            cout << "\nScore received for exercise 3: ";
            cin>>xscore3;
            cout << "Total points possible for exercise 3: ";
            cin>>pscore3;
            cout << "\nScore received for exercise 4: ";
            cin>>xscore4;
            cout << "Total points possible for exercise 4: ";
            cin>>pscore4;
            cout << "\nScore received for exercise 5: ";
            cin>>xscore5;
            cout << "Total points possible for exercise 5: ";
            cin>>pscore5;

            tscore = xscore1 + xscore2 + xscore3 + xscore4 + xscore5;
            tpscore = pscore1 + pscore2 + pscore3 + pscore4 + pscore5;
            percent = (tscore / tpscore)*100;

            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);


            cout << "\nYour total is " << tscore << " out of " << tpscore << ", ";
            cout << "or " << percent << "%." << endl;
        }

        cout << "\nwould you like to check another? Y/N\n";
        cin>>ans;
    } 
    while (ans == 'y' || ans == 'Y');
    cout << "good bye";

    return 0;
}

