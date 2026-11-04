#include <stdio.h>

int main()
{
    float litros;
    float ml;
    float porcentaje;
    float referencia = 5000.0;
    int valido;

    printf("Ingrese el volumen en litros: ");
    scanf("%f", &litros);

    ml = litros * 1000;

    valido = (ml >= 0);

    porcentaje = (ml / referencia) * 100;

    printf("\n%.2f litros equivalen a %.2f ml\n", litros, ml);

    printf("El resultado es mayor o igual a cero: %d\n", valido);

    printf("El porcentaje respecto al valor de referencia es: %.2f%%\n", porcentaje);

    return 0;
}