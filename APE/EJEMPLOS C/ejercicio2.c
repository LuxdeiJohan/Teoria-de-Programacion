#include <stdio.h>
int main()
{
    int PIN_CORRECTO = 1234;
    int MAX_INTENTOS = 3;
    int pin_ingresado = 0;
    int intentos = 0;
    int acceso_permitido = 0;
    double minimo = 0.0;

    if ((intentos < MAX_INTENTOS) && (!acceso_permitido))
    {
        printf("Ingrese PIN: ");
        scanf("%d", &pin_ingresado);
        acceso_permitido = (pin_ingresado == PIN_CORRECTO);
        intentos = intentos + 1;
        if (acceso_permitido)
        {
            printf("Acceso permitido. Intento %d\n", intentos);
        }
        else
        {
            printf("PIN incorrecto. Intento %d de %d\n", intentos, MAX_INTENTOS);
        }
    }
    if ((intentos < MAX_INTENTOS) && (!acceso_permitido))
    {
        printf("Ingrese PIN: ");
        scanf("%d", &pin_ingresado);
        acceso_permitido = (pin_ingresado == PIN_CORRECTO);
        intentos = intentos + 1;
        if (acceso_permitido)
        {
            printf("Acceso permitido. Intento %d\n", intentos);
        }
        else
        {
            printf("PIN incorrecto. Intento %d de %d\n", intentos, MAX_INTENTOS);
        }
    }
    if ((intentos < MAX_INTENTOS) && (!acceso_permitido))
    {
        printf("Ingrese PIN: ");
        scanf("%d", &pin_ingresado);
        acceso_permitido = (pin_ingresado == PIN_CORRECTO);
        intentos = intentos + 1;
        if (acceso_permitido)
        {
            printf("Acceso permitido. Intento %d\n", intentos);
        }
        else
        {
            printf("PIN incorrecto. Intento %d de %d\n", intentos, MAX_INTENTOS);
        }
    }
    if (!acceso_permitido)
    {
        printf("Acceso denegado: intentos agotados.\n");
    }

    minimo = pin_ingresado;

    if (intentos < minimo)
    {
        minimo = intentos;
    }

    if (acceso_permitido < minimo)
    {
        minimo = acceso_permitido;
    }

    if (PIN_CORRECTO < minimo)
    {
        minimo = PIN_CORRECTO;
    }

    if (MAX_INTENTOS < minimo)
    {
        minimo = MAX_INTENTOS;
    }
    printf("Valor minimo de todas las variables: %.2f\n", minimo);
}
