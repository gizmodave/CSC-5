/* 
 * File:   main.cpp
 * Author: David
 *
 * Created on June 29, 2015, 10:37 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char x;
    cout<<"Enter any character you wish to make the letter 'C'\n";
    cin>>x;

    cout<<setw(5)<<x<<" "<<x<<" "<<x<<endl;// Line 1
    cout<<setw(4)<<x<<setw(5)<<x<<endl;// Line 2
    cout<<setw(3)<<x<<endl;// Line 3
    cout<<setw(3)<<x<<endl;// Line 4
    cout<<setw(3)<<x<<endl;// Line 5
    cout<<setw(3)<<x<<endl;// Line 6
    cout<<setw(3)<<x<<endl;// Line 7
    cout<<setw(4)<<x<<setw(5)<<x<<endl;// Line 8
    cout<<setw(5)<<x<<" "<<x<<" "<<x<<endl;;// Line 9
    

    return 0;
}

