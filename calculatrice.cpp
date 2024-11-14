#include "calculatrice.h"
#include <stdexcept> 

double Calculatrice::addition(double x, double y){
    return x+y;
}

double Calculatrice::soustraction(double x, double y){
    return x-y;
}

double Calculatrice::multiplication(double x, double y) {
    return x * y;
}

double Calculatrice::division(double x, double y) {
    if (y == 0) {
        throw std::invalid_argument("Division par zéro");
    }
    return x / y;
}