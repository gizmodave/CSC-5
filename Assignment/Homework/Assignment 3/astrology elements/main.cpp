/* 
 * File:   main.cpp
 * Author: drami_000
 *
 * Created on July 7, 2015, 9:16 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    short int month,
            day,
            aries = 3 || 4,
            taurus = 4 || 5,
            gemini = 5 || 6,
            cancer = 6 || 7,
            leo = 7 || 8,
            virgo = 8 || 9,
            libra = 9 || 10,
            scorpio = 10 || 11,
            sagitar = 11 || 12,
            capcorn = 12 || 1,
            aqurius = 1 || 2,
            pisces = 2 || 3;
    char ans;

do {
    cout << "Please enter the month and day of your birthday.\n";
    cout << "Month: ";
    cin>>month;
    cout << "\nDay: ";
    cin>>day;

    
        //Aries
        if (month == 3 && day > 21 && day < 31 ||
                month == 4 && day > 1 && day < 19) {
            cout << "\nAries\n";
            cout<<"Today you'll find a dime on the floor\n"
                    <<" and it will bring you good luck.\n";
        }            
        //Taurus
        else if (month == 4 && day > 20 && day < 31 ||
                month == 5 && day > 1 && day < 20) {
            cout << "\nTaurus\n";
            cout<<"Beware because today you'll meet your\n"
                    <<"arch nemesis.\n";
        }            
        //Gemini
        else if (month == 5 && day > 21 && day < 31 ||
                month == 6 && day > 1 && day < 21) {
            cout << "\nGemini\n";
            cout <<"Be patient today, because you'll be tested\n"
                    <<"but don't worry tomorrow brings good news!\n";
        }            
        //Cancer
        else if (month == 6 && day > 22 && day < 31 ||
                month == 7 && day > 1 && day < 22) {
            cout << "\nCancer\n";
            cout<<"You will catch on fire.\n";
        }            
        //Leo
        else if (month == 7 && day > 23 && day < 31 ||
                month == 8 && day > 1 && day < 22) {
            cout << "\nLeo\n";
            cout<<"You will succeed on your current path.\n";
        }            
        //Virgo
        else if (month == 8 && day > 23 && day < 31 ||
                month == 9 && day > 1 && day < 22) {
            cout << "\nVirgo\n";
            cout<<"Work is making you miserable,\nperhaps its time "
                    <<"for a new career.\n";
        }            
        //Libra
        else if (month == 9 && day > 23 && day < 31 ||
                month == 10 && day > 1 && day < 22) {
            cout << "\nLibra\n";
            cout<<"Do not go outside today, danger is everywhere!\n";
        }            
        //Scorpio
        else if (month == 10 && day > 23 && day < 31 ||
                month == 11 && day > 1 && day < 21) {
            cout << "\nScorpio\n";
            cout<<"A fish will fall from the sky and\n"
                    <<" strike you in the head.\n";
                    
        }            
        //Sagittarius
        else if (month == 11 && day > 22 && day < 31 ||
                month == 12 && day > 1 && day < 21) {
            cout << "\nSagittarius\n";
            cout<<"You'll find a furry friend.\n";
        }            
        //Capricorn
        else if ((month == 12 && day > 22 && day < 31) ||
                (month == 1 && day > 1 && day < 20)) {
            cout << "\nCapricorn\n";
            cout<<"Cheer up there is someone out there for you.\n";
        }            
        //Aquarius
        else if (month == 1 && day > 21 && day < 31 ||
                month == 2 && day > 1 && day < 18) {
            cout << "\nAquarius\n";
            cout<<"Cheer up. Tomorrow brings riches.\n";
        }            
        //Pisces
        else if(month == 2 && day > 19 && day < 31 ||
                month == 3 && day > 1 && day < 20) {
            cout << "\nPisces\n";
            cout<<"Your hard work will soon pay off today.\n";
        }
        cout << "would you like to check another date? Y/N\n";
        cin>>ans;
    }    
    while (ans == 'y' || ans != 'Y');
    cout << "Good bye.";



    return 0;
}

