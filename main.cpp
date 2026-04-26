#include <iostream>
#include "Dyhotomia_class.h"

using namespace std;

int main(){
    double a, b, eps;
    a = 0;
    b = 12;
    eps = 1e-6;
    Dyhotomia_class *dyh = new Dyhotomia_class(a, b, eps);
    cout << "Метод дихотомії: " << dyh->calcRoot() << endl;
    cout << "Метод Ньютона: " << dyh->alternativeCalcRoot() << endl;

    delete dyh;
}