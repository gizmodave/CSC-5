/* 
 * File:   main.cpp
 * Author: David Ramirez
 * Created on July 7, 2015, 9:16 PM
 * Purpose: horoscopes homework
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
    string gap = "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    char ans;

    do {
        cout << "Please enter the month and day of your birthday.\n";
        cout << "Month: ";
        cin>>month;
        cout << "\nDay: ";
        cin>>day;


        //Aries
        if (month == 3 && day >= 21 && day <= 31 ||
                month == 4 && day >= 1 && day <= 19) {
            cout << "\nAries\n";
            cout << "\nToday you'll find a dime on the floor\n";
            cout << " and it will bring you good luck.\n";
            if (month == 4 && day > 17 && day < 20) {
                cout <<gap;
                cout << "It looks like your birthday is at the cusp.\n";
                cout <<gap;
                cout << "Here is what Taurus has for you.\n";
                cout << "Beware because today you'll meet your\n";
                cout << "arch nemesis.\n";
                cout <<gap;
            }
        }            
        //Taurus
        else if (month == 4 && day >= 20 && day <= 31 ||
                month == 5 && day >= 1 && day <= 20) {
            cout << "\nTaurus\n";
            cout << "\nBeware because today you'll meet your\n";
            cout << "arch nemesis.\n";
            if (month == 5 && day > 18 && day < 21) {
                cout <<gap;
                cout << "It looks like your birthday is at the cusp.\n";
                cout <<gap;
                cout << "Here is what Gemini has for you.\n";
                cout << "Be patient today, because you'll be tested\n";
                cout << "but don't worry tomorrow brings good news!\n";
                cout <<gap;
            }
        }            
        //Gemini
        else if (month == 5 && day >= 21 && day <= 31 ||
                month == 6 && day >= 1 && day <= 21) {
            cout << "\nGemini\n";
            cout << "Be patient today, because you'll be tested\n";
            cout << "but don't worry tomorrow brings good news!\n";
            if (month == 6 && day > 19 && day < 22) {
                cout <<gap;
                cout << "It looks like your birthday is at the cusp.\n";
                cout <<gap;
                cout << "Here is what Cancer has for you.\n";
                cout << "You will catch on fire.\n";
                cout <<gap;
            }
        }
        //Cancer
        else if (month == 6 && day >= 22 && day <= 31 ||
                month == 7 && day >= 1 && day <= 22) {
            cout << "\nCancer\n";
            cout << "You will catch on fire.\n";
            if (month == 7 && day > 20 && day < 23) {
                cout <<gap;
                cout << "It looks like your birthday is at the cusp.\n";
                cout <<gap;
                cout << "Here is what Leo has for you.\n";
                cout << "You will succeed on your current path.\n";
                cout <<gap;
            }
        }
        //Leo
        else if (month == 7 && day >= 23 && day <= 31 ||
                month == 8 && day >= 1 && day <= 22) {
            cout << "\nLeo\n";
            cout << "You will succeed on your current path.\n";
            if (month == 8 && day > 20 && day < 23) {
                cout <<gap;
                cout << "It looks like your birthday is at the cusp.\n";
                cout <<gap;
                cout << "Here is what Virgo has for you.\n";
                cout << "Work is making you miserable,\nperhaps its time ";
                cout << "for a new career.\n";
                cout <<gap;
            }
        }
        //Virgo
        else if (month == 8 && day >= 23 && day <= 31 ||
                month == 9 && day >= 1 && day <= 22) {
            cout << "\nVirgo\n";
            cout << "Work is making you miserable,\nperhaps its time ";
            cout << "for a new career.\n";
            if (month == 9 && day > 20 && day < 23) {
                cout <<gap;
                cout << "It looks like your birthday is at the cusp.\n";
                cout <<gap;
                cout << "Here is what Libra has for you.\n";
                cout << "Do not go outside today, danger is everywhere!\n";
                cout <<gap;
            }
        }            
        //Libra
        else if (month == 9 && day >= 23 && day <= 31 ||
                month == 10 && day >= 1 && day <= 22) {
            cout << "\nLibra\n";
            cout << "Do not go outside today, danger is everywhere!\n";
            if (month == 10 && day > 20 && day < 23) {
                cout <<gap;
                cout << "It looks like your birthday is at the cusp.\n";
                cout <<gap;
                cout << "Here is what Scorpio has for you.\n";
                cout << "A fish will fall from the sky and\n";
                cout << " strike you in the head.\n";
                cout <<gap;
            }
        }            
        //Scorpio
        else if (month == 10 && day >= 23 && day <= 31 ||
                month == 11 && day >= 1 && day <= 21) {
            cout << "\nScorpio\n";
            cout << "A fish will fall from the sky and\n";
            cout << " strike you in the head.\n";
            if (month == 11 && day > 19 && day < 22) {
                cout <<gap;
                cout << "It looks like your birthday is at the cusp.\n";
                cout <<gap;
                cout << "Here is what Sagittarius has for you.\n";
                cout << "You'll find a furry friend.\n";
                cout <<gap;
            }
        }            
        //Sagittarius
        else if (month == 11 && day >= 22 && day <= 31 ||
                month == 12 && day >= 1 && day <= 21) {
            cout << "\nSagittarius\n";
            cout << "You'll find a furry friend.\n";
            if (month == 12 && day > 19 && day < 22) {
                cout <<gap;
                cout << "It looks like your birthday is at the cusp.\n";
                cout <<gap;
                cout << "Here is what Capricorn has for you.\n";
                cout << "Cheer up there is someone out there for you.\n";
                cout <<gap;
            }
        }            
        //Capricorn
        else if ((month == 12 && day >= 22 && day <= 31) ||
                (month == 1 && day >= 1 && day <= 19))
            cout << "\nCapricorn\n";
            cout << "Cheer up there is someone out there for you.\n";
            if (month == 1 && day > 17 && day < 20) {
                cout <<gap;
                cout << "It looks like your birthday is at the cusp.\n";
                cout <<gap;
                cout << "Here is what Aquarius has for you.\n";
                cout << "Cheer up. Tomorrow brings riches.\n";
                cout <<gap;
        }            
        //Aquarius
        else if (month == 1 && day >= 20 && day <= 31 ||
                month == 2 && day >= 1 && day <= 18) {
            cout << "\nAquarius\n";
            cout << "Cheer up. Tomorrow brings riches.\n";
            if (month == 2 && day > 16 && day < 19) {
                cout <<gap;
                cout << "It looks like your birthday is at the cusp.\n";
                cout <<gap;
                cout << "Here is what Pisces has for you.\n";
                cout << "Your hard work will soon pay off today.\n";
                cout <<gap;
            }
        }            
        //Pisces
        else if (month == 2 && day >= 19 && day <= 31 ||
                month == 3 && day >= 1 && day <= 20) {
            cout << "\nPisces\n";
            cout << "Your hard work will soon pay off today.\n";
            if (month == 3 && day > 18 && day < 21) {
                cout <<gap;
                cout << "It looks like your birthday is at the cusp.\n";
                cout <<gap;
                cout << "Here is what Aries has for you.\n";
                cout << "Today you'll find a dime on the floor\n";
                cout << " and it will bring you good luck.\n";
                cout <<gap;
            }
        }
        cout << "\nwould you like to check another date? Y/N\n";
        cin>>ans;

    } while (ans == 'y' || ans == 'Y');
    cout << "Good bye.";



    return 0;
}


