
#include <stdio.h>

#define PI 3.14159

int main()
{
    float radio;
    float area;
    int numero1;
    int numero2;
    int resto;

    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);

    area = PI * radio * radio;

    printf("El area del circulo es: %.2f\n", area);

    printf("\nIngrese el primer numero: ");
    scanf("%d", &numero1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numero2);

    resto = numero1 % numero2;

    printf("El resto de la division es: %d\n", resto);

    printf("\nOperacion finalizada correctamente.\n");
}
