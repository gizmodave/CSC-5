/* 
 * File:   main.cpp
 * Author: drami_000
 *
 * Created on April 7, 2015, 6:05 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    srand(time(0));
    int bet;
    int card1, card2;
    int totalcards;
    int hit;

    hit = 1; // starts random card generator.
    card1 = 1;
    card2 = 1;

    {
    card1 = rand() % 11 * 1;
    card2 = rand() % 11 * 1;
    totalcards = card1 + card2;
    char ans;
    ans = 'y','Y','N','n';  
    int loop = 1;

    do {
        cout << "Please enter betting amount: ";
            cin >> bet;
        cout << "1. hit me! ";
            cin >> hit;

        cout << "Card 1: " << card1 << "  ";
        cout << "Card 2: " << card2 << "\n\n";
   

    if (totalcards > 21) {
        cout << " Bust!";
    }
    else if (totalcards <= 21) {
        cout << "winner winner chicken dinner!\n\n\n";
    }

        cout << "Would you like to play again hit Y for yes and N for no. ";
            cin >> ans;
    switch (ans) 
    {
    loop = 1;
    case 'Y':
    case 'y':
    loop = 0;
    case 'N':
    case 'n':
         
        cout << "That is not a valid option, "
                            "try again and press either y or n" << endl;
                    
        }

    } while (loop);

}


    return 0;
}

