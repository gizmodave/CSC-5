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
    int credits;
    credits = 100;
    int credit_left;
    int pot1, pot2, pot3;
    int card1, card2, card3, card4;
    int totalcards;
    int dealerscard;
    int won1;
    won1 = credit_left + pot2;
    int bet;

    {
        card1 = rand() % 13 + 1; //
        card2 = rand() % 13 + 1; // 
        card3 = rand() % 13 + 1; //
        card4 = rand() % 13 + 1; //
        totalcards = card1 + card2; // generates the players total cards.
        dealerscard = card3 + card4; // generates the total cards for the dealer.



        cout << "Please place your bet and hit enter to begin.\n";
        cout << "Bet amount: ";
        cin >> bet;
        credit_left = credits - bet;
        pot1 = bet * 5; //pot for getting blackjack which is getting 21 exactly.
        pot2 = bet * 2; //beating the dealer with out passing 21.




        cout << "Card 1: " << card1 << " | ";
        cout << "Card 2: " << card2 << "\n\n";
        cout << "Your cards: " << totalcards << "\n\n";
        cout << "Dealer has: " << dealerscard << "\n\n";
        cout << "Dealers card 1: " << card3 << " | ";
        cout << "card 2: " << card4 << endl;
        if (totalcards < dealerscard) {
            cout << "\nBust!";
            cout << "\n\nLost: " << bet <<
                    "\n\ncredit: " << credit_left << endl;
        }
        else if (totalcards > 21) {
            cout << "\nBust!";
            cout << "\n\nLost: " << bet <<
                    "\n\ncredit: " << credit_left << endl;
        }
        else if (dealerscard == 21) {
            cout << "\nBust!";
            cout << "\n\nLost: " << bet <<
                    "\n\ncredit: " << credit_left << endl;
        }
        else if (dealerscard > 21) {
            cout << "\nwinner!";
            cout << "\n\nYou won: " << pot2 <<
                    "\n\ncredit: " << credit_left + pot2 << endl;
        }
        else if (totalcards == 21) {
            cout << "\nBlackjack!";
            cout << "\n\nYou won: " << pot1 <<
                    "\n\ncredit: " << credit_left + pot1 << endl;
        }
        else if (totalcards > dealerscard) {
            cout << "\nwinner!";
            cout << "\n\nYou won: " << pot2 <<
                    "\n\ncredit: " << credit_left + pot2 << endl;
        }

    }
    return 0;
}

