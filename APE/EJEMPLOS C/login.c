
#include <stdio.h>
#include <string.h>

int main() {
    char correo[100];
    char contrasena[100];

    printf("===== INICIO DE SESION =====\n");

    printf("Ingrese su correo electronico: ");
    scanf("%99s", correo);

    printf("Ingrese una contrasena de prueba: ");
    scanf("%99s", contrasena);

    printf("\nDatos ingresados correctamente.\n");
    printf("Correo: %s\n", correo);
    printf("Contrasena recibida.\n");

    return 0;
}
