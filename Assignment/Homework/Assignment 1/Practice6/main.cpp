/* 
 * File:   main.cpp
 * Author: David, Ramirez
 * Created on June 28, 2015, 11:03 PM
 * Purpose: Assignment 1
 */
#include < iostream>// this error says that it cannot find iostream. it is a syntax error
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int number_of_pods,peas_per_pod,total_peas;
    cout<<"Hello\n";
cout<<"Press return after entering a number.\n";
cout<<"Enter the number of pods:\n";

cin>>number_of_pods;

cout<<"Enter the number of peas in a pod:\n";
cin >> peas_per_pod;
total_peas = number_of_pods + peas_per_pod;
cout << "If you have ";
cout << number_of_pods;
cout << " pea pods\n";
cout << "and ";
cout << peas_per_pod;
cout << " peas in each pod, then\n";
cout << "you have ";
cout << total_peas;
cout << " peas in all the pods.\n";
cout<<"Good-bye\n";

    return 0;
}

