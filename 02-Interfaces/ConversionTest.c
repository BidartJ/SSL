#include "Conversion.h"
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

void test_FahrenheitACelsius(){
    assert(AreNear(Celsius(32.0), 0.0, Tolerancia));
    assert(AreNear(Celsius(212.0), 100.0, Tolerancia));
    printf("Tests de F a C aprobados \n");
    return;
}

void test_celsiusAFahrenheit(){
    assert(AreNear(Fahrenheit(0.0), 32.0, Tolerancia));
    assert(AreNear(Fahrenheit(100.0), 212.0, Tolerancia));
    printf("Tests de C a F aprobados \n");
    return;
}

int main(){
    test_FahrenheitACelsius();
    test_celsiusAFahrenheit();
    printf("Se aprobaron todos los tests de conversion. \n");
return 0;
}