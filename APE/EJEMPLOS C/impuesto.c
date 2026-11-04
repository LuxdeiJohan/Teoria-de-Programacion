#include <stdio.h>
\\#include <string.h>
void main() {
    /*Crear un sistema que pida el valor total de la factura y de que tipo es: si es por servicios profecionales se retiene al 10% si es por servicios educativos el 8% se debe devolver el valor retenido*/
    float valor_fact = 0.0;
int seleccion = 0;//1 para profesional y 2 para educativo
float porcentaje = 0.0;
float PROFESIONAL = 0.1;
float EDUCATIVO = 0.08;
float retencion = 0.0;
//ENTRADA DE DATOS
printf("ingresa el valor de la factura");
scanf("%f", &valor_fact);

printf("Ingrese el tipo de factura. \n1. Factura profesional. \n2 Factura educativa.");
scanf("%d", &seleccion);

if (seleccion ==1) {
    retencion = valor_fact * PROFESIONAL;
}
else if(seleccion ==2) {
    retencion = valor_fact * EDUCATIVO;
} else {
    
printf("El valor de la retencion es $%.2f",retencion);

}
}
