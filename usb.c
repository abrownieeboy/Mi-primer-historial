#include <stdio.h>

/*Define los datos que tendra cada memoria USB*/
struct MemoriaUSB {
    char modelo[20];
    int almacenamiento;   // un solo número, no arreglo para almacenar la capacidad de almacenamientoo
    float precio;
};

int main() {

    /*Arreglo*/
    // Agrupa las características de cada memoria USB
    struct MemoriaUSB usb[4];

    // Recorre los registros para capturar los datos del usuario
    for (int i = 0; i < 4; i++) {

        printf("--Registrar USB %d oziozi--\n", i + 1);
        printf("Registra el modelo: ");
        scanf("%19s", usb[i].modelo);
        printf("Registra el almacenamiento (solo numeros por favor): ");
        scanf("%d", &usb[i].almacenamiento);
        printf("Registra el precio: ");
        scanf("%f", &usb[i].precio);
    }

    /* el for imprime los datos*/
    printf("\n--- USBs Registrados ---\n");
    for (int i = 0; i < 4; i++) {
        printf("\n--- USB %d ---\n", i + 1);
        printf("Modelo: %s\n", usb[i].modelo);
        printf("Almacenamiento: %d GB\n", usb[i].almacenamiento);   // al ser int, se usa %d
        printf("Precio: $%.2f\n", usb[i].precio);
    }

    int capacidad;
    int contador = 0;

    printf("\nCuantos GB necesitas papu :v?\n");
    scanf("%d", &capacidad);

    printf("--- Resultados ---\n");

    /* el for busca los USBs con la capacidad deseada */
    /* el if compara y busca que coincida con la capacidad solicitada */
    for (int i = 0; i < 4; i++) {
        if (usb[i].almacenamiento >= capacidad) {
            contador++;
            printf("Modelo: %s\n", usb[i].modelo);
            printf("Almacenamiento: %d GB\n", usb[i].almacenamiento);
            printf("Precio: $%.2f\n\n", usb[i].precio);
        }
    }

    if (contador == 0) {   // 3: usa contador, fuera del for
        printf("No se encontraron USBs lo sientooo :,v\n");
    }

    return 0;   
}