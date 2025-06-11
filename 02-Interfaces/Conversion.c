#include "Conversion.h"
#include <math.h>
#include <stdbool.h>

const double    Tolerancia= 0.001,
                LimiteSuperiorF = 220,
                LimiteInferiorF = 0,
                LimiteSuperiorC = 110,
                LimiteInferiorC = -30,
                IncrementoF = 10,
                IncrementoC = 10;


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


