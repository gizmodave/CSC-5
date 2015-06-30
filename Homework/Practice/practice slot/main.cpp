/* 
 * File:   main.cpp
 * Author: David
 *
 * Created on April 10, 2015, 6:34 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    srand(time(0));
    int credits;
    credits = 100;
    int bet;
    int balance;
    int row1, row2, row3, row4, row5, row6, row7, row8, row9;
    int pot1, pot2, pot3, pot4, pot5, pot6, pot7, pot8, pot9;//the slot machine.

    {

        cout << "Hello, please enter the amount you would like to bet\n"
                << "and the hit enter to pull the lever.\n"
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
            cout << "\nCredits: " << balance + pot1;
        } else if (row1 == 3 && row2 == 3 && row3 == 3) {// first row
            cout << "You won!\n";
            cout << "\nPay out: " << pot2;
            cout << "\nCredits: " << balance + pot2;
        } else if (row1 == 7 && row2 == 7 && row3 == 7) {// first row
            cout << "You won!\n";
            cout << "\nPay out: " << pot3;
            cout << "\nCredits: " << balance + pot3;
        } else if (row4 == 0 && row5 == 0 && row6 == 0) {// middle row
            cout << "You won!\n";
            cout << "\nPay out: " << pot4;
            cout << "\nCredits: " << balance + pot4;
        } else if (row4 == 3 && row5 == 3 && row6 == 3) {// middle row
            cout << "You won!\n";
            cout << "\nPay out: " << pot5;
            cout << "\nCredits: " << balance + pot5;
        } else if (row4 == 7 && row5 == 7 && row6 == 7) {// middle row
            cout << "You won!\n";
            cout << "\nPay out: " << pot6;
            cout << "\nCredits: " << balance + pot6;
        } else if (row7 == 0 && row8 == 0 && row9 == 0) {// 3rd row
            cout << "You won!\n";
            cout << "\nPay out: " << pot1;
            cout << "\nCredits: " << balance + pot1;
        } else if (row7 == 3 && row8 == 3 && row9 == 3) {// 3rd row
            cout << "You won!\n";
            cout << "\nPay out: " << pot2;
            cout << "\nCredits: " << balance + pot2;
        } else if (row7 == 7 && row8 == 7 && row9 == 7) {// 3rd row
            cout << "You won!\n";
            cout << "\nPay out: " << pot3;
            cout << "\nCredits: " << balance + pot3;
        } else if (row1 == 0 && row5 == 0 && row9 == 0) {// diagonal left top 
            cout << "You won!\n";
            cout << "\nPay out: " << pot7;       // to bottom right.
            cout << "\nCredits: " << balance + pot7;
        } else if (row1 == 3 && row5 == 3 && row9 == 3) {// diagonal left top
            cout << "You won!\n";
            cout << "\nPay out: " << pot8;       // to bottom right.
            cout << "\nCredits: " << balance + pot8;
        } else if (row1 == 7 && row5 == 7 && row9 == 7) {// diagonal left top
            cout << "You won!\n";
            cout << "\nPay out: " << pot9;       // to bottom right.
            cout << "\nCredits: " << balance + pot9;
        } else if (row7 == 0 && row5 == 0 && row3 == 0) {// diagonal right top
            cout << "You won!\n";
            cout << "\nPay out: " << pot7;       // to bottom left.
            cout << "\nCredits: " << balance + pot7;
        } else if (row7 == 3 && row5 == 3 && row3 == 3) {// diagonal right top
            cout << "You won!\n";
            cout << "\nPay out: " << pot8;       // to bottom left.
            cout << "\nCredits: " << balance + pot8;
        } else if (row7 == 7 && row5 == 7 && row3 == 7) {// diagonal right top
            cout << "You won!\n";
            cout << "\nPay out: " << pot7;       // to bottom left.
            cout << "\nCredits: " << balance + pot7;
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

    return 0;
}

