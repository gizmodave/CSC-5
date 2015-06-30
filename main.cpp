/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on August 20, 2014, 2:45 PM
 */
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    // get two numbers from the user
    // calculate the avg
    int x,y;
    
    // get input from the user
    cout << "Enter two numbers";
    
    // cin >> x;
    //cin >> y;
    cin >> x >> y;
    
    
    double avg = static_cast<double>(x+y) / 2.0;
    
    // output the average
    cout << "The average is:" << avg;
    return 0;
    
}

