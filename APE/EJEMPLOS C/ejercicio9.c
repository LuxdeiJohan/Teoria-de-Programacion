
#include <stdio.h>

#define METRO_PIES 3.28084

int main()
{
    float metros;
    float pies;
    float doble;
    int valido;

    printf("Ingrese la distancia en metros: ");
    scanf("%f", &metros);

    pies = metros * METRO_PIES;

    valido = (pies > 0);

    doble = pies * 2;

    printf("\n%.2f metros equivalen a %.2f pies\n", metros, pies);

    printf("El resultado es positivo: %d\n", valido);

    printf("El doble del resultado es: %.2f pies\n", doble);

    printf("\nOperacion finalizada correctamente.\n");
}
