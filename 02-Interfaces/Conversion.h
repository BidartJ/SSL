#ifndef CONVERSION_H
#define CONVERSION_H

#include <stdbool.h>

double Celsius(double Fahrenheit);
double Fahrenheit(double Celsius);
bool AreNear(double n1, double n2, double tolerancia);
extern const double Tolerancia;
extern const double LimiteSuperiorF;
extern const double LimiteInferiorF;
extern const double LimiteSuperiorC;
extern const double LimiteInferiorC;
extern const double IncrementoF;
extern const double IncrementoC;

#endif