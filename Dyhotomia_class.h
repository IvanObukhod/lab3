#ifndef DYHOTOMIA_CLASS
#define DYHOTOMIA_CLASS

class Dyhotomia_class {
public:
    Dyhotomia_class(double a, double b, double eps);
    void setVolums(double a, double b);
    void setTolerance(double eps);
    double calcValueFunction(double x);
    double derivate(double x);
    double calcRoot();
    double alternativeCalcRoot();
private:
    double a, b, eps;
};

#endif