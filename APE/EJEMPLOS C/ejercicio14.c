#include <stdio.h>

#define TASA_CAMBIO 4000.0

int main() {
    float dolares = 0.0;
    float pesos = 0.0;
    int es_positivo = 0;

    printf("Ingrese el monto en dolares: ");
    scanf("%f", &dolares);

    pesos = (dolares * TASA_CAMBIO);

    es_positivo = (pesos > 0);

    printf("\n%.2f dolares equivalen a %.2f pesos\n", dolares, pesos);

    if (es_positivo)
    {
        printf("El resultado es positivo.\n");
    }
    else
    {
        printf("El resultado es negativo o cero.\n");
    }
}