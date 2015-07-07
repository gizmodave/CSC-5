/* 
 * File:   main.cpp
 * Author: drami_000
 *
 * Created on July 5, 2015, 10:12 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float pay=16.78,
            hours,
            hourly,
            dpndts,
            week,
            wkbfdn,
            overT,
            overTh,
            sswd,
            ss=.006,
            fdwd,
            fedinc=.014,
            stwd,
            stinc=.005;
            
    int undue=10;
    char ans;
    
    do{
       cout<<"Please enter your hours for the week: ";
       cin>>hours;
//       cout<<"\nWhat is your hourly pay?: ";
//       cin>>pay;
       cout<<"\nHow many dependents do you have?: ";
       cin>>dpndts;
       
       
       overT=1.5*(hours-40)*pay;
       overTh=hours-40;
       wkbfdn=((hours-overTh)*pay)+overT;
       
       sswd=((40*pay)+overT)*ss;
       cout<<""<<wkbfdn<<endl;
       
       
       
       
        
        
        
       cout<<"Would you like to calculate another paycheck? Y/N\n";
       cin>>ans;
               
    }
    while(ans == 'y' || ans == 'Y');
    cout<<"Good bye.";
        
    
    
    

    return 0;
}

