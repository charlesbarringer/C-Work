#include "CylinderType.h"


CylinderType::CylinderType()
{
	setRadius(0);
	setHeight(0);
	//ctor
}

double CylinderType::getRadius()
{
	return radius;
}
double CylinderType::getHeight()
{
	return height;
}
void   CylinderType::setRadius(double R)
{
	radius = R;
}
void   CylinderType::setHeight(double Q)
{
	height = Q;
}
double CylinderType::calculateVolume()
{
	return (radius*radius)*height*3.14;
}
double CylinderType::calculateSurfacearea()
{
	return (2 * 3.14*radius*height) + (2 * 3.14*(radius*radius));
}

CylinderType::CylinderType(double A, double B)

{
	setRadius(A);
	setHeight(B);

}
//dtor