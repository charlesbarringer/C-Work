#ifndef CYLINDERTYPE_H
#define CYLINDERTYPE_H


class CylinderType
{
    public:
        CylinderType();
        double getRadius();
        double getHeight();
        void setRadius(double R);
        void setHeight(double Q);
        double calculateVolume();
        double calculateSurfacearea();
        CylinderType(double A, double B);
    protected:
    private:
    	double radius;
    	double height;
};

#endif // CYLINDERTYPE_H