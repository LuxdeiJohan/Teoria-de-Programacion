#include <stdio.h>
#include <math.h>

int main(){

    float y2;
    float y1;
    float x2;
    float x1;
    float m;


    printf("Ingrese y2 del punto A:");
    scanf("2%f", &y2);

    printf("Ingrese y1 del punto A:");
    scanf("2%f", &y1);

    printf("Ingrese x2 del punto B:");
    scanf("2%f", &x2);

    printf("Ingrese x1 del punto B:");
    scanf("2%f", &x1);

    m = ((y2 - y1) / (x2 - x1));

    printf("El valor de la pendiente es 2%.f");

} 

