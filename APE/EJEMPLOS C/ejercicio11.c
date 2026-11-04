#include <stdio.h>

#define ONZA_GRAMO 28.3495

int main()
{
    float onzas;
    float gramos;
    float mitad;
    int positivo;

    printf("Ingrese el peso en onzas: ");
    scanf("%f", &onzas);

    gramos = onzas * ONZA_GRAMO;

    positivo = (gramos > 0);

    mitad = gramos / 2;

    printf("\n%.2f onzas equivalen a %.2f gramos\n", onzas, gramos);

    printf("El resultado es positivo: %d\n", positivo);

    printf("La mitad del resultado es: %.2f gramos\n", mitad);

  
}