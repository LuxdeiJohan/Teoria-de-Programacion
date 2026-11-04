
#include <stdio.h>
#include <math.h>

int main()
{
    float GALON_LITRO = 3.78541;
    float PI = 3.14159;
    float litros = 0.0, galones = 0.0, resultado = 0.0;

    printf("Ingrese el valor del volumen en galones: ");
    scanf("%f", &galones);

    litros = galones * GALON_LITRO;

    if (litros > 0)
    {
        printf("%.2f galones equivalen a %.2f litros\n", galones, litros);

        resultado = litros * PI;

        printf("El resultado de los litros por PI es: %.2f\n", resultado);

        printf("Tipo de operacion realizada: Multiplicacion por PI.\n");
    }
    else
    {
        printf("Los litros deben ser mayores a 0\n");
    }
}