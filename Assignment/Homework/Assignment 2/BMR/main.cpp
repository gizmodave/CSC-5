/* 
 * File:   main.cpp
 * Author: drami_000
 *
 * Created on July 6, 2015, 2:33 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    float weight,
            heightI,
            bars = 230,
            nbars,
            bwr,
            age,
            hFeet;
    //short int age;
    //int8_t age;
    char ans;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);

    do {
        cout << "\n\n\n\nBMR calculator\n";
        cout << "Please enter your gender.\n";
        cin>>ans;
        switch (ans) {

            case 'M':
            case 'm':

                cout << "Please enter your age.\n";
                cin>>age;
                cout << "Please enter your height.\n";
                cin>>hFeet;
                cout << "Please enter your weight.\n";
                cin>>weight;

                heightI = hFeet * 12;
                bwr = 66 + (6.3f * weight)+(12.9f * heightI)-(6.8 * age);
                nbars = bwr / bars;

                cout.precision(0);

                cout << "\nCalories to maintain without exercise " << bwr << endl;
                cout << "You can eat " << nbars;
                cout << "candy bars to maintain your weight.";
                break;


            case 'F':
            case 'f':

                cout << "Please enter your age.\n";
                cin>>age;
                cout << "Please enter your height.\n";
                cin>>hFeet;
                cout << "Please enter your weight.\n";
                cin>>weight;

                heightI = hFeet * 12;
                bwr = 655 + (4.3 * weight)+(4.7 * heightI)-(4.7 * age);
                nbars = bwr / bars;

                cout.precision(0);

                cout << "\nCalories to maintain without exercise " << bwr << endl;
                cout << "You can eat " << nbars;
                cout << "candy bars to maintain your weight.";
                break;
                
//            case 'X':
//            case 'x':
//                cout<<"Goodbye.";
//                break;
            default:
                cout<<"Invalid choice\n";
                        
                
        }
       cout << "Would you like to check it again? Y/N\n";
       cin>>ans;
    } 
//    while (ans != 'X' && 'x');
    while (ans == 'y' || ans == 'Y');
    cout << "Good bye.";
   
    return 0;
}

