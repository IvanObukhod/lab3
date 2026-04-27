#include <iostream>
#include "equation_class.h"

using namespace std;

int main(){
    double a, b, eps;
    a = 0;
    b = 1.5;
    eps = 1e-6;
    Dyhotomia_class *dyh = new Dyhotomia_class(a, b, eps);
    cout << "Метод дихотомії: " << dyh->dichotomy() << endl;
    cout << "Метод Ньютона: " << dyh->newtonsMethod() << endl;

    delete dyh;
}