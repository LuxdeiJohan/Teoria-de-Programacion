
#include <stdio.h>

#define BONO_CARGA 50.0
#define BONO_ANTIGUEDAD 30.0
#define DESCUENTO_ISSS 0.03 
#define DESCUENTO_AFP 0.0725
#define LIMITE_ANTIGUEDAD 10

int min(int a,int b){
    return(a<b) ? a : b;

}

int main() {

    float salario_bruto;
    int cargas;
    int antiguedad;
    float bonos;
    float descuentos;
    float salario_neto;
    float minimo;

    printf("Ingreso del salario bruto\n");
    scanf("%f", &salario_bruto);

    printf("Numero de cargas familiares\n");
    scanf("%d", &cargas);

    printf ("Anios de antiguedad\n");
    scanf("%d", &antiguedad);

    bonos = cargas * BONO_CARGA + min(antiguedad, LIMITE_ANTIGUEDAD) * BONO_ANTIGUEDAD;
    descuentos = salario_bruto * (DESCUENTO_ISSS + DESCUENTO_AFP);
     salario_neto = salario_bruto + bonos - descuentos;

     if(salario_neto > salario_bruto){
        printf ("Salario neto es mayor que el salario bruto\n");
        
     }else{
         printf ("Salario neto no es mayor que el salario bruto\n");
     }

     printf("salarito neto es: $%.2f\n",salario_neto);
     printf("salarito bruto es: $%.2f\n:",salario_bruto);
     printf("cantidad del bono es: $%.2f\n:",bonos);
     printf("descuento es: $%.2f\n:",descuentos);

     minimo = salario_bruto;

  if (cargas < minimo)
        minimo = cargas;

    if (antiguedad < minimo)
        minimo = antiguedad;

    if (bonos < minimo)
        minimo = bonos;

    if (descuentos < minimo)
        minimo = descuentos;

    if (salario_neto < minimo)
        minimo = salario_neto;

     printf("Valor minimo: %.2f\n", minimo);

    }