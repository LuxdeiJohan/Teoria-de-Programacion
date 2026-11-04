#include <stdio.h>

int main()
{

    float lado1;
    float lado2;
    float lado3;
    int valido;
    char tipo[20];
    float minimo;

    printf("Ingrese el primer lado:");
    scanf("%f", &lado1);

    printf("Ingrese el segundo lado:");
    scanf("%f", &lado2);

    printf("Ingrese el tercer lado:");
    scanf("%f", &lado3);

  
    valido = (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1);

    if (valido)
    {
        if (lado1 == lado2 && lado2 == lado3)
        {
            sprintf(tipo, "Equilatero");
        }
        else if (lado1 == lado2 ||
                 lado1 == lado3 ||
                 lado2 == lado3)
        {

            sprintf(tipo, "Isosceles");
        }
        else
        {
            sprintf(tipo, "Escaleno");
        }

        printf("\nTriangulo valido.\n");

        printf("Tipo de triangulo: %s\n", tipo);
    }
    else
    {
        sprintf(tipo, "No valido");

        printf("\nLos lados no forman un triangulo valido.\n");

        printf("Tipo de triangulo: %s\n", tipo);
    }

    minimo = lado1;

    if (lado2 < minimo)
        minimo = lado2;

    if (lado3 < minimo)
        minimo = lado3;

    if (valido < minimo)
        minimo = valido;

    printf("Valor minimo numerico = %.2f\n", minimo);

    printf("\nRESUMEN FINAL\n");
    printf("Primer lado: %.2f\n", lado1);
    printf("Segundo lado: %.2f\n", lado2);
    printf("Tercer lado: %.2f\n", lado3);
    printf("Triangulo valido: %d\n", valido);
    printf("Tipo de triangulo: %s\n", tipo);
    printf("Valor minimo numerico: %.2f\n", minimo);


}
