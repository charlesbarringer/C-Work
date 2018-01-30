//------------------------------------------------------
//Student: Charles Barringer
//
//Assignment: Lab 4
//
//Description: Profit Projection
//
//Program: Linda.cpp
//
//Complete Date: 6 November, 2016
//
//Developed: Using Microsoft Visual C++ Express 2010
//
//------------------------------------------------------
//-- C++ header files --
//------------------------------------------------------

#include <iostream>

using namespace std;

int main()
{
        int income; 
        int netprofit;
        int merccost;
        int rent;
        int salary;
        int lights;
        
        cout << "Please input yearly income: ";
        cin >> income;
        cout << endl;
        
        cout << "Please input your yearly rent: ";
        cin >> rent;
        cout << endl;
        
        cout << "Please input your yearly salaries: ";
        cin >> salary;
        cout << endl;
        
        cout << "Please input your yearly electric costs: ";
        cin >> lights;
        cout << endl;
        
        merccost= ((income-rent-salary-lights) * 0.10) * 1.15;
        cout << "For your net profit to be $" << (income-rent-salary-lights) * 0.10 << "you must price your merchandise at $" << merccost << "." << endl;
        
        return 0;
        
}