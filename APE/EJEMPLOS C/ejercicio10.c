
#include <stdio.h>

int main()
{
    int b;
    int w;
    int son_iguales;
    int son_diferentes;
    float mitad;

    printf("Ingrese el primer numero: ");
    scanf("%d", &b);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &w);

    son_iguales = (b == w);
    son_diferentes = (b != w);

    printf("\n¿Los numeros son iguales?: %d", son_iguales);
    printf("\n¿Los numeros son diferentes?: %d", son_diferentes);

    mitad = son_iguales / 2.0;

    printf("\nLa mitad del resultado obtenido es: %.2f", mitad);

    if (son_iguales == 1)
    {
        printf("\nLos numeros son iguales.");
    }
    else
    {
        printf("\nLos numeros son diferentes.");
    }

    printf(" Proceso con exito.\n");
}
