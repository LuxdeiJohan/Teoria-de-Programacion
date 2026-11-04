#include <stdio.h>
#include <stdbool.h>

int main(void) {
    const int DIA_ENE = 31;
    const int DIA_FEB = 28;
    const int DIA_FEB_BISIESTO = 29;
    const int DIA_MAR = 31;
    const int DIA_ABR = 30;
    const int DIA_MAY = 31;
    const int DIA_JUN = 30;
    const int DIA_JUL = 31;
    const int DIA_AGO = 31;
    const int DIA_SEP = 30;
    const int DIA_OCT = 31;
    const int DIA_NOV = 30;

    int dia = 0;
    int mes = 0;
    int anio = 0;
    bool es_bisiesto = false;
    int dia_juliano = 0;
    int contador_operaciones = 0;
    int valor_minimo = 0;

    printf("Ingrese dia (1-31): ");
    scanf("%d", &dia);

    printf("Ingrese mes (1-12): ");
    scanf("%d", &mes);

    printf("Ingrese anio: ");
    scanf("%d", &anio);

    es_bisiesto = (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0));
    contador_operaciones = contador_operaciones + 1;

    dia_juliano = dia;
    contador_operaciones = contador_operaciones + 1;

    if (mes > 1) {
        dia_juliano = dia_juliano + DIA_ENE;
        contador_operaciones = contador_operaciones + 1;
    }
    if (mes > 2) {
        if (es_bisiesto) {
            dia_juliano = dia_juliano + DIA_FEB_BISIESTO;
        } else {
            dia_juliano = dia_juliano + DIA_FEB;
        }
        contador_operaciones = contador_operaciones + 1;
    }
    if (mes > 3) {
        dia_juliano = dia_juliano + DIA_MAR;
        contador_operaciones = contador_operaciones + 1;
    }
    if (mes > 4) {
        dia_juliano = dia_juliano + DIA_ABR;
        contador_operaciones = contador_operaciones + 1;
    }
    if (mes > 5) {
        dia_juliano = dia_juliano + DIA_MAY;
        contador_operaciones = contador_operaciones + 1;
    }
    if (mes > 6) {
        dia_juliano = dia_juliano + DIA_JUN;
        contador_operaciones = contador_operaciones + 1;
    }
    if (mes > 7) {
        dia_juliano = dia_juliano + DIA_JUL;
        contador_operaciones = contador_operaciones + 1;
    }
    if (mes > 8) {
        dia_juliano = dia_juliano + DIA_AGO;
        contador_operaciones = contador_operaciones + 1;
    }
    if (mes > 9) {
        dia_juliano = dia_juliano + DIA_SEP;
        contador_operaciones = contador_operaciones + 1;
    }
    if (mes > 10) {
        dia_juliano = dia_juliano + DIA_OCT;
        contador_operaciones = contador_operaciones + 1;
    }
    if (mes > 11) {
        dia_juliano = dia_juliano + DIA_NOV;
        contador_operaciones = contador_operaciones + 1;
    }

  
    printf("Fecha ingresada: %02d/%02d/%04d\n", dia, mes, anio);
    printf("Dia juliano (1-366): %d\n", dia_juliano);
    printf("Operaciones realizadas: %d\n", contador_operaciones);
   

    valor_minimo = dia;

    if (mes < valor_minimo) {
        valor_minimo = mes;
    }
    if (anio < valor_minimo) {
        valor_minimo = anio;
    }
    if (dia_juliano < valor_minimo) {
        valor_minimo = dia_juliano;
    }
    if (contador_operaciones < valor_minimo) {
        valor_minimo = contador_operaciones;
    }

    int valor_bisiesto_numerico = es_bisiesto ? 1 : 0;
    if (valor_bisiesto_numerico < valor_minimo) {
        valor_minimo = valor_bisiesto_numerico;
    }

    printf("\nValores finales de las variables:\n");
    printf("- dia = %d\n", dia);
    printf("- mes = %d\n", mes);
    printf("- anio = %d\n", anio);
    printf("- dia_juliano = %d\n", dia_juliano);
    printf("- contador_operaciones = %d\n", contador_operaciones);
    printf("- es_bisiesto = %d (%s)\n", valor_bisiesto_numerico, es_bisiesto ? "true" : "false");
    printf("\nValor minimo de todas las variables utilizadas: %d\n", valor_minimo);

}
