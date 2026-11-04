
#include <stdio.h>

int main() {
    float yardas = 0.0;
    float pies = 0.0;
    float cociente = 0.0;

    
    printf("Ingrese la distancia en yardas: ");
    scanf("%f", &yardas);

    pies = yardas * 3;

    if (pies > 0)
    {
  
        cociente = pies / 1.5;

       
        printf("\n%.2f yardas equivalen a %.2f pies\n", yardas, pies);

        printf("El cociente del resultado entre 1.5 es: %.2f\n", cociente);
    }
    else
    {
        printf("\nLa distancia ingresada no es valida\n");
    }

    
    printf("\n--- CONCLUSIONES ---\n");
    printf("La conversion de yardas a pies se realizo correctamente.\n");
    printf("Se verifico que el resultado sea mayor que cero.\n");
    printf("Se calculo el cociente utilizando el factor 1.5.\n");

  
    
}
