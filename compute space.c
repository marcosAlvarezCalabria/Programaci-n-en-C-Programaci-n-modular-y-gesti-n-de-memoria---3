#include <stdio.h>

int main(void) {
    int amountNumber = 0, suma = 0, amountDate = 0, multiplier = 0, index = 1, invalid = 0;
    char kindOfDate;

    // Leer el número total de entradas
    scanf("%d", &amountNumber);

    // Bucle para procesar cada entrada
    while (index <= amountNumber) {

        // Leer la cantidad
        scanf("%d", &amountDate);
        
        // Leer el tipo de dato
        scanf(" %c", &kindOfDate); // El espacio antes de %c evita problemas con el buffer de entrada
        
        // Determinar el multiplicador basado en el tipo de dato
        if (kindOfDate == 'c') {
            multiplier = 1;
        } else if (kindOfDate == 'd') {
            multiplier = 8;
        } else if (kindOfDate == 'i') {
            multiplier = 4;
        } else {
            invalid = 1;
            break; // Salir del bucle si el tipo de dato es inválido
        }
        
        // Sumar la cantidad multiplicada al total
        suma += (amountDate * multiplier);

        index++;
    }

    // Verificar si hubo un tipo de dato inválido
    if (invalid == 1) {
        printf("Invalid tracking code type\n");
    } else {
        printf("%d bytes\n", suma);
    }

    return 0;
}
