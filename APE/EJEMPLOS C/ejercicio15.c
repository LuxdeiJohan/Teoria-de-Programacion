#include <stdio.h>

#define FACTOR 0.393701

int main(){
    float cm = 0.0;
    float pulgadas = 0.0;
    float cubo = 0.0;
    int positivo = 0;

    printf("Ingrese la medida en centimetros: ");
    scanf("%f", &cm);

    pulgadas = (cm * FACTOR);

    positivo = (pulgadas > 0);

    cubo = (pulgadas * pulgadas * pulgadas);

    printf("\n%.2f cm equivalen a %.2f pulgadas\n", cm, pulgadas);

    printf("El resultado es positivo: %d\n", positivo);

    printf("El resultado elevado al cubo es: %.4f\n", cubo);

}