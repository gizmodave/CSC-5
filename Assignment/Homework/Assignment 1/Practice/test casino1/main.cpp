/* 
 * File:   main.cpp
 * Author: drami_000
 *
 * Created on April 4, 2015, 12:19 PM
 */

#include <cstdlib>
#include <string> 
#include <iostream>


using namespace std;

/*
 * 
 */

void clear()
{
    for (int i=0; i < 15; i++)
        cout << endl;
}

int main(int argc, char** argv) {
    srand(time(0));
    
    int played_credits;
    string player_name;
    int ans;
    int bet;
    int balance;
     
    //played_credits = balance;
    int credits = 100;
    char repeat = 'y';
   int row1, row2, row3, row4, row5, row6, row7, row8, row9;
    int pot1, pot2, pot3, pot4, pot5, pot6, pot7, pot8, pot9;
    int pay1,pay2,pay3,pay4,pay5,pay6,pay7,pay8,pay9,pay10,pay11;
    int fbalance;
    
    
    
    
    
    
    cout << "\n*************** Welcome ***************\n"
         << "***************** to ******************\n"
         << "**************** Prism ****************\n\n";
    cout << "Please enter your name: ";
    cin >> player_name; 
    cout << "welcome " << player_name << 
            ", Please choose a game from the menu.\n\n";
    clear();
    while(repeat == 'Y' || repeat == 'y')
 {  
        
    cout << "----------------- Menu -----------------\n"
            << "               1. Slots.\n"
            << "               2. Blackjack.\n";
     //     << "               3. "
     //     << "               4. "
     //     << "               5. "
    if(credits == balance){
    cout << "Credits: $ " << balance << "\n" // The players balance
            << "Please enter the game you would like to play: "; 
    }
    else if(balance > credits){
        cout << "Credits: $ " << balance << "\n" // The players balance
            << "Please enter the game you would like to play: ";
    }
    else if(balance < credits){
        cout << "Credits: $ " << balance << "\n" // The players balance
            << "Please enter the game you would like to play: ";
    }
    cin >> ans;
    clear();
    switch(ans){
        case 1:
             cout << "**************** 5 card poker ***************\n"
                 "************** good luck! *************\n";
             
    
    //the slot machine.

            {
                if (credits=100) {
                    cout << "\n\nCredits: $ " << credits << "\n"; // The players balance

                } else if (balance > credits) {
                    cout << "\n\nCredits: $ " << balance << "\n"; // The players balance

                } else if (balance < credits) {
                    cout << "\n\nCredits: $ " << balance << "\n"; // The players balance

                }
        cout << "Hello," << player_name <<
                " .Please enter the amount you would like to bet\n"
                << "and then hit enter to pull the lever.\n"
                << "Bet amount: ";
        cin >> bet;
        balance = credits - bet;
        pot1 = bet * 3 + 3; // pay outs for rows 1 and 2.
        pot2 = bet * 4 + 9; //
        pot3 = bet * 5 + 12; // 
        pot4 = bet * 6; // pot 4-6 are for the center row.
        pot5 = bet * 8; //
        pot6 = bet * 10; //
        pot7 = bet * 3; // pot 7-9 are for winning diagonally.
        pot8 = bet * 4; //
        pot9 = bet * 5; // 
        pay1 = balance + pot1;
        pay2 = balance + pot2;
        pay3 = balance + pot3;
        pay4 = balance + pot4;
        pay5 = balance + pot5;
        pay6 = balance + pot6;
        pay7 = balance + pot7;
        pay8 = balance + pot8;
        pay9 = balance + pot9;        
        row1 = rand() % 7; // generates a random number from 0-7 in each slot
        row2 = rand() % 7; // for each row and column.
        row3 = rand() % 7;
        row4 = rand() % 7;
        row5 = rand() % 7;
        row6 = rand() % 7;
        row7 = rand() % 7;
        row8 = rand() % 7;
        row9 = rand() % 7;

        cout << "\n   ======================\n";
        cout << "   ====================== @\n";
        cout << "   ===1~| " <<
                row1 << " | " << row2 << " | " << row3 << " |==== |\n";
        cout << "   ===2~| " <<
                row4 << " | " << row5 << " | " << row6 << " |==== |\n";
        cout << "   ===3~| " <<
                row7 << " | " << row8 << " | " << row9 << " |==== |\n";
        cout << "   ==|================|== =\n";
        cout << "   ==|================|==\n";
        cout << "   ==|________________|==";
        
        
    if (row1 == 0 && row2 == 0 && row3 == 0) {// first row
            cout << "You won!\n";
            cout << "\nPay out: " << pot1;
            cout << "\nCredits: " << pay1;
    } else if (row1 == 3 && row2 == 3 && row3 == 3) {// first row
            cout << "You won!\n";
            cout << "\nPay out: " << pot2;
            cout << "\nCredits: " << pay2;
    } else if (row1 == 7 && row2 == 7 && row3 == 7) {// first row
            cout << "You won!\n";
            cout << "\nPay out: " << pot3;
            cout << "\nCredits: " << pay3;
    } else if (row4 == 0 && row5 == 0 && row6 == 0) {// middle row
            cout << "You won!\n";
            cout << "\nPay out: " << pot4;
            cout << "\nCredits: " << pay4;
    } else if (row4 == 3 && row5 == 3 && row6 == 3) {// middle row
            cout << "You won!\n";
            cout << "\nPay out: " << pot5;
            cout << "\nCredits: " << pay5;
    } else if (row4 == 7 && row5 == 7 && row6 == 7) {// middle row
            cout << "You won!\n";
            cout << "\nPay out: " << pot6;
            cout << "\nCredits: " << pay6;
    } else if (row7 == 0 && row8 == 0 && row9 == 0) {// 3rd row
            cout << "You won!\n";
            cout << "\nPay out: " << pot1;
            cout << "\nCredits: " << pay1;
    } else if (row7 == 3 && row8 == 3 && row9 == 3) {// 3rd row
            cout << "You won!\n";
            cout << "\nPay out: " << pot2;
            cout << "\nCredits: " << pay2;
    } else if (row7 == 7 && row8 == 7 && row9 == 7) {// 3rd row
            cout << "You won!\n";
            cout << "\nPay out: " << pot3;
            cout << "\nCredits: " << pay3;
    } else if (row1 == 0 && row5 == 0 && row9 == 0) {// diagonal left top 
            cout << "You won!\n";
            cout << "\nPay out: " << pot7;       // to bottom right.
            cout << "\nCredits: " << pay7;
    } else if (row1 == 3 && row5 == 3 && row9 == 3) {// diagonal left top
            cout << "You won!\n";
            cout << "\nPay out: " << pot8;       // to bottom right.
            cout << "\nCredits: " << pay8;
    } else if (row1 == 7 && row5 == 7 && row9 == 7) {// diagonal left top
            cout << "You won!\n";
            cout << "\nPay out: " << pot9;       // to bottom right.
            cout << "\nCredits: " << pay9;
    } else if (row7 == 0 && row5 == 0 && row3 == 0) {// diagonal right top
            cout << "You won!\n";
            cout << "\nPay out: " << pot7;       // to bottom left.
            cout << "\nCredits: " << pay7;
    } else if (row7 == 3 && row5 == 3 && row3 == 3) {// diagonal right top
            cout << "You won!\n";
            cout << "\nPay out: " << pot8;       // to bottom left.
            cout << "\nCredits: " << pay8;
    } else if (row7 == 7 && row5 == 7 && row3 == 7) {// diagonal right top
            cout << "You won!\n";
            cout << "\nPay out: " << pot7;       // to bottom left.
            cout << "\nCredits: " << pay7;
    } else if (row1 != 0 && row1 != 3 && row1 != 7 || // 
                row2 != 0 && row2 != 3 && row2 != 7 || // lost.
                row3 != 0 && row3 != 3 && row3 != 7 || // checks each row to 
                row4 != 0 && row4 != 3 && row4 != 7 || // see if it doesn't
                row5 != 0 && row5 != 3 && row5 != 7 || // equal the winning
                row6 != 0 && row6 != 3 && row6 != 7 || // rows. Then "couts"
                row7 != 0 && row7 != 3 && row7 != 7 || // what you lost and
                row8 != 0 && row8 != 3 && row8 != 7 || // remaining credits.
                row9 != 0 && row9 != 3 && row9 != 7 || //
                row1 != 0 && row5 != 3 && row9 != 7 ||
                row7 != 0 && row5 != 3 && row3 != 7) {
            cout << "\n\n Lost: " << bet << "\n";
            cout << " Credits: " << balance << endl; //the credits you lost.
        }
    }
    break;
    case 2:
    
        cout << "*************** blackjack ***************\n"
        << "*************** good luck! ***************\n\n";
     //   cout ""
    //   
    //int credit_left;
    int pot10, pot11, pot12;
    int card1, card2, card3, card4;
    int totalcards;
    int dealerscard;
    //int won1;
    //won1 = credit_left + pot2;
    {
        card1 = rand() % 13 + 1; //
        card2 = rand() % 13 + 1; // 
        card3 = rand() % 13 + 1; //
        card4 = rand() % 13 + 1; //
        totalcards = card1 + card2; // generates the players total cards.
        dealerscard = card3 + card4; // generates the total cards for the dealer.
    if(credits == balance){
    cout << "\n\nCredits: $ " << balance << "\n"; // The players balance
            
    }
    else if(balance > credits){
        cout << "\n\nCredits: $ " << balance << "\n"; // The players balance
            
    }
    else if(balance < credits){
        cout << "\n\nCredits: $ " << balance << "\n"; // The players balance
            
    }
        cout << "Hello, " << player_name << 
                ". Please place your bet and hit enter to begin.\n";
        cout << "Bet amount: ";
        cin >> bet;
        balance = credits - bet;
        pot10 = bet * 5; //pot for getting blackjack which is getting 21 exactly.
        pot11 = bet * 2; //beating the dealer with out passing 21.
        pay10 = balance + pot10;
        pay11 = balance + pot11;       
        cout << "Card 1: " << card1 << " | ";
        cout << "Card 2: " << card2 << "\n\n";
        cout << "Your cards: " << totalcards << "\n\n";
        cout << "Dealer has: " << dealerscard << "\n\n";
        cout << "Dealers card 1: " << card3 << " | ";
        cout << "card 2: " << card4 << endl;
    if (totalcards < dealerscard) {
            cout << "\nBust!";
            cout << "\n\nLost: " << bet <<
                    "\n\ncredit: " << balance << endl;
    }
    else if (totalcards > 21) {
        cout << "\nBust!";
        cout << "\n\nLost: " << bet <<
                    "\n\ncredit: " << balance << endl;
    }
    else if (dealerscard == 21) {
        cout << "\nBust!";
        cout << "\n\nLost: " << bet <<
                    "\n\ncredit: " << balance << endl;
    }
    else if (dealerscard > 21 && totalcards <21) {
        cout << "\nwinner!";
        cout << "\n\nYou won: " << pot11 <<
                    "\n\ncredit: " << pay11 << endl;
    }
    else if (totalcards == 21) {
        cout << "\nBlackjack!";
        cout << "\n\nYou won: " << pot10 <<
                    "\n\ncredit: " << pay10 << endl;
    }
    else if (totalcards > dealerscard) {
        cout << "\nwinner!";
        cout << "\n\nYou won: " << pot11 <<
                    "\n\ncredit: " << pay11 << endl;
        }
    }              
    break;
                        
  }                    
    cout << "\n\nwould you like to play again? y/n ";
    cin >> repeat;
    clear();
            
}      
   
return 0;
}  


