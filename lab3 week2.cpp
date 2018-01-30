#include <iostream>
#include "CylinderType.h"

using namespace std;

int main()
{

double cylHeight;
double cylRadius;
double shipCost;
double paintCost;
CylinderType myCyl= CylinderType();

cout<< "Please input the Height in feet.";
cin>> cylHeight; 
myCyl.setHeight(cylHeight);
cout<< "Please input the Radius in feet.";
cin>> cylRadius;
myCyl.setRadius(cylRadius);
cout<< "Please input the shipping cost per liter.";
cin>> shipCost;
cout<< "Please input the cost of paint per square foot.";
cin>> paintCost;


cout << "The shipping cost is $" << myCyl.calculateVolume()*28.32*shipCost << "." ;
cout << "The cost to paint is $" << myCyl.calculateSurfacearea()*paintCost << "." ;

	return 0;
}




