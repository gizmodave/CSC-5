/* 
 * File:   main.cpp
 * Author: David Ramirez
 * Created on June 24, 2015, 11:15 AM
 * Purpose:  First Program to calculate a paycheck
 */

//System Libraries
#include <iostream>  //File I/O
using namespace std; //std namespace -> iostream

//User Libraries

//Global constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables Here
    float hours,rate,pay,afttx,ss,mdcr,sstotal,mdcrtotal,ncmtx,ncmtxtotal,
    fdltx,fdltxtotal;
    ss = .062;//This is the rate of the current tax for SS 6.20%
    mdcr = .0145;//This is the rate of the current tax for medicare 1.45%
    ncmtx = .093;//This is the rate of the current tax for state income 9.30%
    fdltx = .25;//This is the rate of the current tax for federal income 25%
    //Input Values Here
    hours=40.0;//Hours Worked Units = hours
    rate=35; //Pay Rate     Units = $'s/hour
    //Process Input Here
    pay=hours*rate;//Units = $'s
    sstotal= ss*pay; // Calculates deduction for Social Security
    mdcrtotal=mdcr*pay;// Calculates deduction for Medicare 
    ncmtxtotal=ncmtx*pay;// Calculates deduction for Income earned
    fdltxtotal= fdltx*pay;
    afttx= pay-sstotal-mdcrtotal-ncmtxtotal-fdltxtotal; // Calculates Total deductions
    //Output Unknowns Here
    cout<<"Hours worked = "<<hours<<"(hrs)"<<endl;
    cout<<"Pay Rate     = $"<<rate<<"/(hrs)"<<endl;
    cout<<"My Paycheck  = $"<<pay<<endl;
    cout<<"--------Deductions--------"<<endl;
    cout<<"SS = $-"<<sstotal<<endl;
    cout<<"Medicare = $-"<<mdcrtotal<<endl;
    cout<<"State income tax = $-"<<ncmtxtotal<<endl;
    cout<<"Federal income tax = $-"<<fdltxtotal<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"After all deductions = $"<<afttx<<endl;
    //Exit Stage Right!
    return 0;
}