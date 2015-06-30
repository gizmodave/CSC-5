/* 
 * File:   main.cpp
 * Author: drami_000
 *
 * Created on April 4, 2015, 12:19 PM
 */

#include <cstdlib>

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
int main(int argc, char** argv) 
{
    
    string player_name;
    int menu, main_menu, credits, betting_amount;
    int balance = 100;
    srand(time(0));
        
       
    cout << "*************** Welcome ***************\n"
         << "***************** to ******************\n"
         << "**************** casino ****************\n\n";
    cout << "Please enter your name: ";
    cin >> player_name; clear();
   
    
    cout << "welcome " << player_name << 
            ", Please choose a game from the menu.\n\n";
    
    
    
    cout << "----------------- Menu -----------------\n"
            << "               1. 5 card Poker.\n"
            << "               2. Blackjack.\n";
     //     << "               3. "
     //     << "               4. "
     //     << "               5. "
    
    cout << "Credits: $ " << balance << "\n" // The players balance
            << "Please enter the game you would like to play: "; 
    
            
            
    cin >> menu;clear();
    
    if(menu == 1)
    {
        cout << "**************** 5 card poker ***************\n"
                << "************* good luck! *************\n";
        
    }
        
        
        
        
        
        
        
        
        
    
    else if(menu == 2)
    {
        cout << "*************** blackjack ***************\n"
        << "*************** good luck! ***************\n";
    }
            
       
    
    return 0;
}
