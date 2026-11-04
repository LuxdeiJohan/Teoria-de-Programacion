#include <stdio.h>

#define MAYORIA_EDAD 18

int main()
{

    int edad;
    int es_mayor;
    int triple;

    printf("Ingrese la edad de la persona: ");
    scanf("%d", &edad);

    es_mayor = (edad >= MAYORIA_EDAD);

    if (es_mayor)
    {
        printf("La persona es mayor de edad.\n");
    }
    else
    {
        printf("La persona es menor de edad.\n");
    }

    if (edad > 0)
    {
        triple = edad * 3;
        printf("El triple de la edad es: %d\n", triple);
    }
    else
    {
        printf("No se puede calcular el triple de una edad no valida.\n");
    }

}