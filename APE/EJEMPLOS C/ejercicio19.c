
#include <stdio.h>
#include <math.h>

#define LIBRA_KG 0.453592

int main(){
    float libras = 0.0;
    float kg = 0.0;
    float kg_log = 0.0;

    printf("Ingrese el peso en libras: ");
    scanf("%f", &libras);

    kg = libras * LIBRA_KG;

    if (kg > 0)
    {
        printf("%.2f libras equivalen a: %.4f kg\n", libras, kg);

        kg_log = log10(kg);

        printf("El logaritmo en base 10: %.4f\n", kg_log);
    }
    else
    {
        printf("El peso no es valido\n");
    }
     printf("\n--- VALORES DE LAS VARIABLES ---\n");
    printf("Libras: %.2f\n", libras);
    printf("Kilogramos: %.4f\n", kg);
    printf("Logaritmo: %.4f\n", kg_log);
    printf("Factor de conversion: %.6f\n", LIBRA_KG);

}
