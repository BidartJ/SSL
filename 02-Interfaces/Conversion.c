#include "Conversion.h"
#include <math.h>
#include <stdbool.h>

const double Tolerancia= 0.001;
const double LimiteSuperiorF = 220;
const double LimiteInferiorF = 0;
const double LimiteSuperiorC = 110;
const double LimiteInferiorC = -30;
const double IncrementoF = 10;
const double IncrementoC = 10;


double Celsius(double Fahrenheit){
    return ((5.0/9.0)*(Fahrenheit - 32));
}

double Fahrenheit(double Celsius){
    return ((9.0/5.0)*Celsius + 32);
}

bool AreNear(double n1, double n2, double tolerancia){
    double diferencia = fabs(n1 - n2);
    return diferencia < tolerancia;
}


