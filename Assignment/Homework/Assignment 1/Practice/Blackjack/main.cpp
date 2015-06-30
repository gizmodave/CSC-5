/* 
 * File:   main.cpp
 * Author: drami_000
 *
 * Created on April 7, 2015, 5:24 PM
 */
#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */



int card1, card2;
int card_total;
string hitbut;



int main(int argc, char** argv) 
{
    void dealcards();
    int = 1;
    dealcards = 1;
    int 2;
    dealcards();
    cout << "card1: " << endl;
    cout << "card2: " << endl;
        card_total = card1 + card2;
        cout << "Your card total is: " << card_total << endl;
        cin >> 1;
        if(card_total > 21)
        {
            cout << "Bust" endl;
        }
        else( card_total == 21 )
        {
            cout << "You win" endl;
        }
        
    
    

    






    return 0;
}

void dealcards()
{
    srand(time(0));
    card1 = srand() % 11 * 1;
    card2 = srand() % 11 * 1;
    
}