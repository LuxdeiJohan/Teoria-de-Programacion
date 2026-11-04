#include <stdio.h>

int main() {

    float c1;
    float c2;
    float c3;
    float nl;

     printf("Ingrese la nota del primer certamen: ");
    scanf("%f", &c1);

    printf("Ingrese la nota del segundo certamen: ");
    scanf("%f", &c2);

    printf("Ingrese la nota de laboratorio: ");
    scanf("%f", &nl);

     if (c1 < 0 || c1 > 100 || c2 < 0 || c2 > 100 || nl < 0 || nl > 100){
        
         printf("Error las notas deben estar entre 0 y 100.\n");

     }
     else{

          c3 = (((60 - (nl * 0.3)) * 3) / 0.7) - c1 - c2;

     }
       if (c3 <= 0) {

            printf("El estudiante ya aprueba con sus notas actuales.\n");
       

        } else if (c3 > 100) {

            printf("No es posible aprobar ni obteniendo 100 en C3.\n");

        } else {

            printf("La nota minima necesaria en C3 es: %.2f\n", c3);

        }
    }
