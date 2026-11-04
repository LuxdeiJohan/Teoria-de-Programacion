
#include <stdio.h>

#define DESC_10 0.05
#define DESC_50 0.10
#define DESC_100 0.15
#define UMBRAL_10 10
#define UMBRAL_50 50
#define UMBRAL_100 100
#define IVA 0.15

int main()
{
    int cantidad;
    float precio_unitario;
    float subtotal;
    float descuento_aplicado;
    float valor_descuento;
    float subtotal_descuento;
    float valor_iva;
    float total;
    float minimo;

    printf("Ingrese la cantidad de articulos: ");
    scanf("%d", &cantidad);

    printf("Ingrese el precio unitario: ");
    scanf("%f", &precio_unitario);

    // Validacion
    if ((cantidad <= 0) || (precio_unitario <= 0))
    {
        printf("Error: los valores deben ser mayores que cero.\n");
    }
    else
    {
    
        subtotal = cantidad * precio_unitario;

        if ((cantidad >= UMBRAL_10) && (cantidad < UMBRAL_50))
        {
            descuento_aplicado = DESC_10;
        }
        else if ((cantidad >= UMBRAL_50) && (cantidad < UMBRAL_100))
        {
            descuento_aplicado = DESC_50;
        }
        else if (cantidad >= UMBRAL_100)
        {
            descuento_aplicado = DESC_100;
        }
        else
        {
            descuento_aplicado = 0.0;
        }

        valor_descuento = subtotal * descuento_aplicado;

        
        subtotal_descuento = subtotal - valor_descuento;

        
        valor_iva = subtotal_descuento * IVA;

      
        total = subtotal_descuento + valor_iva;

        // Mostrar factura
        printf("\n========== FACTURA ==========\n");
        printf("Cantidad de articulos: %d\n", cantidad);
        printf("Precio unitario:       $%.2f\n", precio_unitario);
        printf("Subtotal:              $%.2f\n", subtotal);
        printf("Descuento aplicado:    %.0f%%\n", descuento_aplicado * 100);
        printf("Valor del descuento:   $%.2f\n", valor_descuento);
        printf("Subtotal con descuento:$%.2f\n", subtotal_descuento);
        printf("IVA (15%%):             $%.2f\n", valor_iva);
        printf("-----------------------------\n");
        printf("TOTAL A PAGAR:         $%.2f\n", total);
        printf("=============================\n");

      
        minimo = cantidad;

        if (precio_unitario < minimo)
            minimo = precio_unitario;

        if (subtotal < minimo)
            minimo = subtotal;

        if (descuento_aplicado < minimo)
            minimo = descuento_aplicado;

        if (valor_descuento < minimo)
            minimo = valor_descuento;

        if (subtotal_descuento < minimo)
            minimo = subtotal_descuento;

        if (valor_iva < minimo)
            minimo = valor_iva;

        if (total < minimo)
            minimo = total;

        printf("Valor minimo numerico: %.2f\n", minimo);
    }
}
