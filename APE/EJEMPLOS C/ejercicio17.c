#include <stdio.h>

#define PI 3.14159

int main()
{
    float grados;
    float radianes;
    float cubo;
    int valido;


    printf("Ingrese el angulo en grados: ");
    scanf("%f", &grados);

    radianes = (grados * PI / 180);

    valido = (grados >= 0 && grados <= 360);

    cubo = (radianes * radianes * radianes);

    printf("\n%.2f grados equivalen a %.5f radianes\n", grados, radianes);

    if (valido == 1)
    {
        printf("El angulo ingresado es valido.\n");
    }
    else
    {
        printf("El angulo ingresado no es valido.\n");
    }

    printf("El resultado elevado al cubo es: %.5f\n", cubo);

    printf("\nOperacion finalizada correctamente.\n");

    return 0;
}