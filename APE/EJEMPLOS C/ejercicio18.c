
#include <stdio.h>
#include <math.h>

#define TASA_CAMBIO 0.27

int main() {
    float soles = 0.0;
    float dolares = 0.0;
    float dolares_redondeado = 0.0;

    printf("Ingrese el monto en soles: ");
    scanf("%f", &soles);

    dolares = soles * TASA_CAMBIO;

    if (dolares > 0)
    {
        dolares_redondeado = roundf(dolares * 100) / 100;

        printf("\n%.2f soles equivalen a %.2f dolares\n",
               soles, dolares_redondeado);
    }
    else
    {
        printf("\nMonto no valido\n");
    }

    printf("\n--- CONCLUSIONES ---\n");
    printf("La conversion de soles a dolares se realizo correctamente.\n");
    printf("Se aplico la tasa de cambio de 0.27.\n");
    printf("El resultado se redondeo a dos decimales.\n");

  
}
