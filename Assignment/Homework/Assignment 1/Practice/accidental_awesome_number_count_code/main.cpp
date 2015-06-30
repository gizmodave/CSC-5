/* 
 * 
 * Author: David Ramirez
 *
 * Created on March 10, 2015, 11:45 AM
 */

#include <cstdlib>
#include <iostream>
//
using namespace std;
//
int main(int argc, char** argv) 
{
        // prompt the user for test score.
        cout << "Please enter your test score: ";
        // 
        //
        int num;
        cin >> num;
        
        
        for(int i = 0; i < 10; i++)
        {
            cout << num << endl;
            num++;
        }
        if (num >= 0 && num <= 59.9)
        {
            cout << " Guess what F stands for here" << endl;
        }
        else if (num >= 60 && num <= 62.9)
        {
            cout << " Missed it by that much...." << endl;
        }
        else if (num >= 63 && num <= 66.9)
        {
            cout << " You got a D" << endl;
        }
        else if (num >= 67 && num <= 69.9)
        {
            cout << " You got a D +" << endl;
        }
        else if (num >= 70 && num <= 72.9)
        {
            cout << " You got a C-" << endl;
        }
        else if (num >= 73 && num <= 76.9)
        {
            cout << " You got a C" << endl;
        }
        else if (num >= 77 && num <= 79.9)
        {
            cout << " You got a C+." << endl;
        }
        else if (num >= 80 && num <= 82.9)
        {
            cout << " You got a B-" << endl;
        }
        else if (num >= 83 && num <= 86.9)
        {
            cout << " You got a B" << endl;
        }
        else if (num >= 87 && num <= 89.9)
        {
            cout << " You got a B+" << endl;
        }
        else if (num >= 90 && num <=92.9)
        {
            cout << " You got an A-." << endl;
        }
        else if (num >= 93 && num <= 98.9)
        {
            cout << " You got an A" << endl;
        }
        else if (num >= 100){
            cout << "You got an A+" << endl;
           
        }             
 
    return 0;
}

