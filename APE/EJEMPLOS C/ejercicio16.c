#include <stdio.h>

#define PIE_METRO 0.3048

int main()
{
    float pies = 0.0;
    float metros = 0.0;
    float maximo = 0.0;
    int positivo = 0;

    printf("Ingrese la altura en pies: ");
    scanf("%f", &pies);

    metros = (pies * PIE_METRO);

    positivo = (metros > 0);

    maximo = pies;

    if (metros > maximo)
    {
        maximo = metros;
    }

    printf("\n%.2f pies equivalen a %.2f metros\n", pies, metros);

    printf("El resultado es positivo: %d\n", positivo);

    printf("El valor maximo de las variables numericas es: %.2f\n", maximo);

    return 0;
}