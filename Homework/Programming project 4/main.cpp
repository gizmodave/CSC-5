/* 
 * File:   main.cpp
 * Author: David
 *
 * Created on June 29, 2015, 7:36 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
const float mTf=.3048f;
const float accel = 32*mTf; 
int main(int argc, char** argv) {
    float distF,
          time,
          distM;
   
    cout<<"Please enter the time in seconds.\n";
    cout<<"Seconds: ";cin>>time;
    distM=(((accel*time)*2))/2;
    distF=distM/mTf;
    cout<<distM<<" Meters per second or,\n";
    cout<<distF<<" Feet per second.\n";
    

    return 0;
}

