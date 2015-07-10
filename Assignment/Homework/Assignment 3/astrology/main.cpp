/* 
 * File:   main.cpp
 * Author: David Ramirez
 * Created on July 7, 2015, 9:16 PM
 * Purpose: horoscopes homework.
 */
//System libraries.
#include <cstdlib>// Standard library.
#include <iostream>// File I/O.

using namespace std;
//user libraries.

//Global constants.

//Function prototypes.

int main(int argc, char** argv) {
//Declare your variables.
    short month,//Birth month.
            day,//Birth day.
            aries = 3 || 4,//Here we use a boolean operator in a short.
            taurus = 4 || 5,//Technically this wouldn't work outside 
            gemini = 5 || 6,//of a boolean expression. Because it would conflict
            cancer = 6 || 7,//with other declared variables with a similar
            leo = 7 || 8,//value. But We can use it here because the user inputs
            virgo = 8 || 9,//the day which is another check point besides the
            libra = 9 || 10,//month inside the boolean expression. 
            scorpio = 10 || 11,//For example our first check is month=4
            sagitar = 11 || 12,//which is aries our first boolean expression 
            capcorn = 12 || 1,//then the day=21 which is greater than 19 so
            aqurius = 1 || 2,//the first boolean expression is false ignore the 
            pisces = 2 || 3;//rest of the expression and move to the next one.
                            //Here taurus=4 according to our variable, so we 
                            //check this boolean expression. The month is true
                            //now check to see if the day is true day>=21 which 
                            //it is. The boolean expression is all true so output
                            //your items from this expression.
    string gap = "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    char ans;
    do {//The loop returns you here.
        //Type your input here.
        cout << "Would you like to see todays horoscope?\n";
        cout << "Please enter the month and day of your birthday.\n";
        cout << "Example: Month: 3 and Day: 12\n";
        cout << "\nMonth: ";
        cin>>month;
        cout << "\nDay: ";
        cin>>day;
//Check users month and date against each boolean expression.
        //Aries March 21-April 19
        if ((month == 3 && day >= 21 && day <= 31) ||//boolean expression.
                (month == 4 && day >= 1 && day <= 19)) {
            cout << "\nAries\n";
            cout << "\nToday you'll find a dime on the floor\n";
            cout << " and it will bring you good luck.\n";
            //Check to see if you are within 2 days of next months horoscopes.
            //If true, also cout items from here.
            if (month == 4 && day > 17 && day < 20) {
                cout <<gap;
                cout << "It looks like your birthday is at the cusp\n";
                cout << "of next months sign.";
                cout <<gap;
                cout << "Here is what Taurus has for you.\n";
                cout << "Beware because today you'll meet your\n";
                cout << "arch nemesis.\n";
                cout <<gap;
            }
        }            
        //Taurus April 20–May 20
        else if ((month == 4 && day >= 20 && day <= 31) ||
                (month == 5 && day >= 1 && day <= 20)) {
            cout << "\nTaurus\n";
            cout << "\nBeware because today you'll meet your\n";
            cout << "arch nemesis.\n";
            //Check to see if you are within 2 days of next months horoscopes.
            //If true, also cout items from here.
            if (month == 5 && day > 18 && day < 21) {
                cout <<gap;
                cout << "It looks like your birthday is at the cusp\n";
                cout << "of next months sign.";
                cout <<gap;
                cout << "Here is what Gemini has for you.\n";
                cout << "Be patient today, because you'll be tested\n";
                cout << "but don't worry tomorrow brings good news!\n";
                cout <<gap;
            }
        }            
        //Gemini May 21–June 21
        else if ((month == 5 && day >= 21 && day <= 31) ||
                (month == 6 && day >= 1 && day <= 21)) {
            cout << "\nGemini\n";
            cout << "Be patient today, because you'll be tested\n";
            cout << "but don't worry tomorrow brings good news!\n";
            //Check to see if you are within 2 days of next months horoscopes.
            //If true, also cout items from here.
            if (month == 6 && day > 19 && day < 22) {
                cout <<gap;
                cout << "It looks like your birthday is at the cusp\n";
                cout << "of next months sign.";
                cout <<gap;
                cout << "Here is what Cancer has for you.\n";
                cout << "You will catch on fire.\n";
                cout <<gap;
            }
        }
        //Cancer June 22–July 22
        else if ((month == 6 && day >= 22 && day <= 31) ||
                (month == 7 && day >= 1 && day <= 22)) {
            cout << "\nCancer\n";
            cout << "You will catch on fire.\n";
            //Check to see if you are within 2 days of next months horoscopes.
            //If true, also cout items from here.
            if (month == 7 && day > 20 && day < 23) {
                cout <<gap;
                cout << "It looks like your birthday is at the cusp\n";
                cout << "of next months sign.";
                cout <<gap;
                cout << "Here is what Leo has for you.\n";
                cout << "You will succeed on your current path.\n";
                cout <<gap;
            }
        }
        //Leo July 23–August 22 
        else if ((month == 7 && day >= 23 && day <= 31) ||
                (month == 8 && day >= 1 && day <= 22)) {
            cout << "\nLeo\n";
            cout << "You will succeed on your current path.\n";
            //Check to see if you are within 2 days of next months horoscopes.
            //If true, also cout items from here.
            if (month == 8 && day > 20 && day < 23) {
                cout <<gap;
                cout << "It looks like your birthday is at the cusp\n";
                cout << "of next months sign.";
                cout <<gap;
                cout << "Here is what Virgo has for you.\n";
                cout << "Work is making you miserable,\nperhaps its time ";
                cout << "for a new career.\n";
                cout <<gap;
            }
        }
        //Virgo August 23–September 22
        else if ((month == 8 && day >= 23 && day <= 31) ||
                (month == 9 && day >= 1 && day <= 22)) {
            cout << "\nVirgo\n";
            cout << "Work is making you miserable,\nperhaps its time ";
            cout << "for a new career.\n";
            //Check to see if you are within 2 days of next months horoscopes.
            //If true, also cout items from here.
            if (month == 9 && day > 20 && day < 23) {
                cout <<gap;
                cout << "It looks like your birthday is at the cusp\n";
                cout << "of next months sign.";
                cout <<gap;
                cout << "Here is what Libra has for you.\n";
                cout << "Do not go outside today, danger is everywhere!\n";
                cout <<gap;
            }
        }            
        //Libra September 23–October 22 
        else if ((month == 9 && day >= 23 && day <= 31) ||
                (month == 10 && day >= 1 && day <= 22)) {
            cout << "\nLibra\n";
            cout << "Do not go outside today, danger is everywhere!\n";
            //Check to see if you are within 2 days of next months horoscopes.
            //If true, also cout items from here.
            if (month == 10 && day > 20 && day < 23) {
                cout <<gap;
                cout << "It looks like your birthday is at the cusp\n";
                cout << "of next months sign.";
                cout <<gap;
                cout << "Here is what Scorpio has for you.\n";
                cout << "A fish will fall from the sky and\n";
                cout << " strike you in the head.\n";
                cout <<gap;
            }
        }            
        //Scorpio October 23–November 21
        else if ((month == 10 && day >= 23 && day <= 31) ||
                (month == 11 && day >= 1 && day <= 21)) {
            cout << "\nScorpio\n";
            cout << "A fish will fall from the sky and\n";
            cout << " strike you in the head.\n";
            //Check to see if you are within 2 days of next months horoscopes.
            //If true, also cout items from here.
            if (month == 11 && day > 19 && day < 22) {
                cout <<gap;
                cout << "It looks like your birthday is at the cusp\n";
                cout << "of next months sign.";
                cout <<gap;
                cout << "Here is what Sagittarius has for you.\n";
                cout << "You'll find a furry friend.\n";
                cout <<gap;
            }
        }            
        //Sagittarius November 22–December 21
        else if ((month == 11 && day >= 22 && day <= 31) ||
                (month == 12 && day >= 1 && day <= 21)) {
            cout << "\nSagittarius\n";
            cout << "You'll find a furry friend.\n";
            //Check to see if you are within 2 days of next months horoscopes.
            //If true, also cout items from here.
            if (month == 12 && day > 19 && day < 22) {
                cout <<gap;
                cout << "It looks like your birthday is at the cusp\n";
                cout << "of next months sign.";
                cout <<gap;
                cout << "Here is what Capricorn has for you.\n";
                cout << "Cheer up there is someone out there for you.\n";
                cout <<gap;
            }
        }            
        //Capricorn December 22–January 19 
        else if ((month == 12 && day >= 22 && day <= 31) ||
                (month == 1 && day >= 1 && day <= 19)){
            cout << "\nCapricorn\n";
            cout << "Cheer up there is someone out there for you.\n";
            //Check to see if you are within 2 days of next months horoscopes.
            //If true, also cout items from here.
            if (month == 1 && day > 17 && day < 20) {
                cout <<gap;
                cout << "It looks like your birthday is at the cusp\n";
                cout << "of next months sign.";
                cout <<gap;
                cout << "Here is what Aquarius has for you.\n";
                cout << "Cheer up. Tomorrow brings riches.\n";
                cout <<gap;
        }            
        //Aquarius January 20–February 18 
        else if ((month == 1 && day >= 20 && day <= 31) ||
                (month == 2 && day >= 1 && day <= 18)) {
            cout << "\nAquarius\n";
            cout << "Cheer up. Tomorrow brings riches.\n";
            //Check to see if you are within 2 days of next months horoscopes.
            //If true, also cout items from here.
            if (month == 2 && day > 16 && day < 19) {
                cout <<gap;
                cout << "It looks like your birthday is at the cusp\n";
                cout << "of next months sign.";
                cout <<gap;
                cout << "Here is what Pisces has for you.\n";
                cout << "Your hard work will soon pay off today.\n";
                cout <<gap;
            }
        }            
        //Pisces February 19–March 20
        else if ((month == 2 && day >= 19 && day <= 31) || 
                 (month == 3 && day >= 1 && day <= 20)) {
            cout << "\nPisces\n";
            cout << "Your hard work will soon pay off today.\n";
            //Check to see if you are within 2 days of next months horoscopes.
            //If true, also cout items from here.
            if (month == 3 && day > 18 && day < 21) {
                cout <<gap;
                cout << "It looks like your birthday is at the cusp\n";
                cout << "of next months sign.";
                cout <<gap;
                cout << "Here is what Aries has for you.\n";
                cout << "Today you'll find a dime on the floor\n";
                cout << " and it will bring you good luck.\n";
                cout <<gap;
            }
        }        
    } 
        cout << "\nwould you like to check another date? Y/N\n";
        cin>>ans;
    }
    //start your loop here.
    while (ans == 'y' || ans == 'Y');
            cout << "Good bye.";
    //If your answer is not 'y' or 'Y' exit program.   
    return 0;
    }



