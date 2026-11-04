#include <stdio.h>
#include <math.h>

int main (){
    float x1,y1,x2,y2;
    float r1,r2,suma,diferencia;

    printf("Ingrese los valores del centro 1 (x1,y1):");
    scanf ("%f %f",&x1, &y1)

    printf("Ingrese el radio uno r1");
    scanf ("%f", &r1);

    printf("Ingrese los valores del centro 2 (x2,y2):");
    scanf ("%f %f", &x2, &y2);
    
    printf("Ingrese el radio dos r2");
    scanf("%f", &r2)

    if (r1 <= 0 || r2 <= 0) {
        printf("Error: los radios deben ser positivos.\n");
        return 1;
    }

        d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    suma = r1 + r2;
    diferencia = fabs(r1 - r2);

    if (d == 0 && r1 == r2) {
        printf("Circunferencias coincidentes.\n");
    } else if (d > suma) {
        printf("Circunferencias exteriores.\n");
    } else if (d == suma) {
        printf("Tangentes exteriores.\n");
    } else if (d > diferencia) {
        printf("Circunferencias secantes.\n");
    } else if (d == diferencia) {
        printf("Tangentes interiores.\n");
    } else {
        printf("Interiores sin interseccion.\n");
    }

    return 0;


}










