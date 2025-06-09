#include "Conversion.h"
#include <stdio.h>

int main(){
    printf("Tabla de Celsius a Fahrenheit: \n");
    for(double i=LimiteInferiorC; i<LimiteSuperiorC; i+=IncrementoC)
    {
        printf("%f c -> %f f \n", i, Fahrenheit(i));
    }

    printf("Tabla de Fahrenheit a Celsius: \n");
    for(double i=LimiteInferiorF; i<LimiteSuperiorF; i+=IncrementoF)
    {
        printf("%f c -> %f f \n", i, Celsius(i));
    }

return 0;
}