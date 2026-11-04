
#include <stdio.h>

int main() {
    int a, b, original_a, original_b;
    int cociente, residuo;
    int operacion = 1;
    int mcd, mcm;

    printf("Ingrese el primer numero (0 a 999): ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero (0 a 999): ");
    scanf("%d", &b);

    if (a < 0 || a >= 1000 || b < 0 || b >= 1000) {
        printf("Error: los numeros deben estar entre 0 y 999.\n");
    } else if (a == 0 && b == 0) {
        printf("El MCD y el MCM no estan definidos para (0,0).\n");
    } else {
        original_a = a;
        original_b = b;

        if (a < b) {
            int temporal = a;
            a = b;
            b = temporal;
        }

        if (b != 0) {
            cociente = a / b;
            residuo = a % b;

            printf("\nOperacion: %d\n", operacion);
            printf("Cociente: %d\n", cociente);
            printf("Residuo: %d\n", residuo);
            printf("Ecuacion: %d = %d * %d + %d\n",
                   a, cociente, b, residuo);

            a = b;
            b = residuo;
            operacion++;
        }

        if (b != 0) {
            cociente = a / b;
            residuo = a % b;

            printf("\nOperacion: %d\n", operacion);
            printf("Cociente: %d\n", cociente);
            printf("Residuo: %d\n", residuo);
            printf("Ecuacion: %d = %d * %d + %d\n",
                   a, cociente, b, residuo);

            a = b;
            b = residuo;
            operacion++;
        }

        if (b != 0) {
            cociente = a / b;
            residuo = a % b;

            printf("\nOperacion: %d\n", operacion);
            printf("Cociente: %d\n", cociente);
            printf("Residuo: %d\n", residuo);
            printf("Ecuacion: %d = %d * %d + %d\n",
                   a, cociente, b, residuo);

            a = b;
            b = residuo;
        }

        if (b == 0) {
            mcd = a;
            mcm = (original_a == 0 || original_b == 0)
                  ? 0
                  : (original_a / mcd) * original_b;

            printf("\nMCD = %d\n", mcd);
            printf("MCM = %d\n", mcm);
        } else {
            printf("\nEl MCD no se encontro en tres pasos.\n");
            printf("Se necesitan mas operaciones.\n");
        }
    }

    return 0;
}
