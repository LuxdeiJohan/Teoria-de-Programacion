#include <stdio.h>
#include <math.h>

int main()
{

    float a;
    float b;
    float c;
    float matizar, x1, x2;

    printf("Ingrese el valor de a:");
    scanf("%f", &a);

    printf("Ingrese el valor de b:");
    scanf("%f", &b);

    printf("Ingrese el valor de c:");
    scanf("%f", &c);

    matizar = (b * b - 4 * a * c);
    if (matizar < 0)
    {
        printf("la ecuacion no tiene solucion\n");
    }
    else
    {
        // TODO
        x1= (-b + sqrt(matizar)/2*a);
        x2= (-b - sqrt(matizar)/2*a);

        printf("el valor de x1 es: %.2f y de x2 es %.2f", x1, x2);

    }
    return 0;
}
