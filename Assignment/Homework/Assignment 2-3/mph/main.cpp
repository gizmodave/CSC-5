/* 
 * File:   main.cpp
 * Author: drami_000
 *
 * Created on July 4, 2015, 9:26 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string nstnm,
            yname,
            aFood,
            nadj,
            aColor,
            animal,
            num;
    char ans;
    do{
    cout<<"Hello, would you like to play a madlib game.\n\n";
    cout<<"Please enter the first or last name of your instructor: ";
    cin>>nstnm;
    
    cout<<"\nYour name: ";
    cin>>yname;
    
    cout<<"\nSomething you eat: ";
    cin>>aFood;
    
    cout<<"\nA number between 100 and 120: ";
    cin>>num;
    
    cout<<"\nAn adjective: ";
    cin>>nadj;
    
    cout<<"\nA color: ";
    cin>>aColor;
    
    cout<<"\nAn animal: ";
    cin>>animal;
    
    
cout<<"\n\nDear Instructor "<<nstnm<<","<<endl;
cout<<"\nI am sorry that I am unable to turn in my homework at this time.\n";
cout<<"First, I ate a rotten "<<aFood;
cout<<", which made me turn "<<aColor<< " and extremely ill."<<endl;
cout<<"I came down with a fever of "<<num<<". "; 
cout<<"Next, my "<<nadj<<" pet "<<animal;
cout<<" must have smelled\n";
cout<<"the remains of the "<<aFood;
cout<<" on my homework, because he ate it.";
cout<<" I am currently\n";
cout<<"rewriting my homework and hope you will accept it late.";
cout<<"\n\nSincerely, "<<yname<<endl;
cout<<"\nWould you like to play again? Y/N"<<endl;
cin>>ans;
    }
    while (ans == 'y' || ans == 'Y');
    cout<<"Good bye\n";
    return 0;
}

