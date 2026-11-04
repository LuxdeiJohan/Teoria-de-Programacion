#include <stdio.h>

int main() {
     float n_profundidad;
     float presion;
     float densidad = 1000;
     float gravedad = 9.81;

     
    printf("Ingrese la profundidad del agua en metros:");
    scanf("%f", &n_profundidad);

    presion = (densidad * gravedad * n_profundidad);

    printf("La presion del agua es: %.2f Pa\n", presion);



}