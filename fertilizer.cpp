//------------------------------------------------------
//Student: Charles Barringer
//
//Assignment: Lab 3
//
//Description: Fertilizer amount needed
//
//Program: fertilizer.cpp
//
//Complete Date: 6 November, 2016
//
//Developed: Using Microsoft Visual C++ Express 2010
//
//------------------------------------------------------
//-- C++ header files --
//------------------------------------------------------

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
        double cost;
        double area;
        
        double bagSize;
        
        cout << fixed << showpoint << setprecision(2);
        
        cout << "Enter the amount of fertilizer, in pounds, in one bag: ";
        cin >> bagSize;
        cout << endl;
        
        cout << "Enter the cost of the " << bagSize << " pound fertilizer bag: ";
        cin >> cost;
        cout << endl;
        
        cout << "Enter the area, in square feet, that can be fertilized in one bag: ";
        cin >> area;
        cout<< endl;
        
        cout << "the cost of the fertilizer per pound is: $" << bagSize / cost << endl;
        cout << "The cost of fertilizing per square foot is: $" << area / cost << endl;
             
        return 0;
}