
#include <stdio.h>

int main()
{
    float base = 0.0;
    float altura = 0.0;
    float area = 0.0;
    float minimo = 0.0;
    int valido = 0;

    printf("Ingrese la base del triangulo: ");
    scanf("%f", &base);

    printf("Ingrese la altura del triangulo: ");
    scanf("%f", &altura);

    valido = (base > 0 && altura > 0);

    if (valido)
    {
        area = (base * altura) / 2;

        minimo = base;

        if (altura < minimo)
        {
            minimo = altura;
        }

        if (area < minimo)
        {
            minimo = area;
        }

        printf("\nEl area del triangulo es: %.2f\n", area);

        printf("El valor minimo numerico es: %.2f\n", minimo);
    }
    else
    {
        printf("\nError: la base y la altura deben ser mayores que cero.\n");
    }
}
