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
            hFeet;
    int age;
    char gender,
            ans;

    do {
        cout << "BMR calculator\n";
        cout << "Please enter your gender.\n";
        cin>>gender;

        if (gender == 'm' || gender == 'M') {

            cout << "Please enter your age.\n";
            cin>>age;
            cout << "Please enter your height.\n";
            cin>>hFeet;
            cout << "Please enter your weight.\n";
            cin>>weight;

            heightI = hFeet * 12;
            bwr = 66 + (6.3f * weight)+(12.9f * heightI)-(6.8 * age);
            nbars = bwr / bars;

            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(0);

            cout << "\nCalories to maintain without exercise " << bwr <<endl;
            cout << "You can eat " << nbars;
            cout << "to maintain your weight.";
        }
        else if (gender == 'f' || gender == 'F') {

            cout << "Please enter your age.\n";
            cin>>age;
            cout << "Please enter your height.\n";
            cin>>hFeet;
            cout << "Please enter your weight.\n";
            cin>>weight;

            heightI = hFeet * 12;
            bwr = 655 + (4.3 * weight)+(4.7 * heightI)-(4.7 * age);
            nbars = bwr / bars;

            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(0);

            cout << "\nCalories to maintain without exercise " << bwr <<endl;
            cout << "You can eat " << nbars;
            cout << "to maintain your weight.";

        }
        cout << "\nWould you like to check it again? Y/N\n";
        cin>>ans;
    } 
    while (ans == 'y' || ans == 'Y');
    cout << "Good bye.";

    return 0;
}

