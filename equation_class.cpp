#include "equation_class.h"
#include "cmath"

Dyhotomia_class::Dyhotomia_class(double a, double b, double eps){
    this->a = a; 
    this->b = b;
    this->eps = eps;
}

double Dyhotomia_class::calcValueFunction(double x){
    return exp(x) - exp(-x) - 2;
}

void Dyhotomia_class::setVolums(double a, double b){
    this->a = a;
    this->b = b;
}
    
void Dyhotomia_class::setTolerance(double eps){
    this->eps = eps;
}

double Dyhotomia_class::derivate(double x){
    return (calcValueFunction(x + eps) - calcValueFunction(x)) / eps;
}

double Dyhotomia_class:: newtonsMethod(){
    if(calcValueFunction(a) * calcValueFunction(b) > 0){
        return NAN;
    }

    double dx = eps + 1;
    double x = b;
    while(dx > eps){
        dx = calcValueFunction(x) / derivate(x);
        x -= dx;
    }

    return x;
}

double Dyhotomia_class::dichotomy(){
    double a = this->a;
    double b = this->b;
    if(calcValueFunction(a) * calcValueFunction(b) > 0){
        return NAN;
    }

    double c = (b + a) / 2;
    
    while(b - a > eps){
        (calcValueFunction(a) * calcValueFunction(c) > 0 ? a : b) = c;

        c = (b + a) / 2;
    }
    
    return c;
}
 