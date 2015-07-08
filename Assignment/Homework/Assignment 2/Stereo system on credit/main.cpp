/* 
 * File:   main.cpp
 * Author: drami_000
 *
 * Created on July 5, 2015, 9:08 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float ntrst,
            mhpy,
            mntrst,
            ntstsub,
            prncl,
            prnpy,
            oldprl;
    int yr = 12;
            
    char ans;
           
    do{
        cout<<"Hello, please enter the principle of your loan.\n";
        cout<<"principle: ";
        cin>>prncl;
        cout<<"\nEnter your monthly payments: ";
        cin>>mhpy;
        cout<<"\nEnter your interest rate: ";
        cin>>ntrst;
        
        
        mntrst=ntrst/yr;
        ntstsub=(mhpy-((mntrst*prncl)/100));
        prnpy=prncl/ntstsub;
        
        
        cout<<ntstsub;
        cout<<"\nprinciple: "<<prnpy<<endl;
        
        
        cout<<"\nblah blah: ";
        cin>>ans;
                
    }
    while (ans == 'y' || ans == 'Y');
    cout<<"Good bye.";

    return 0;
}

