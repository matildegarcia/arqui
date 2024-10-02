// ejemplo carga de rom de 10 entradas y 8 salidas
// valores posibles de entrada 2^10 = 1024, y 8 salidas.

#include <stdio.h>
#include <stdint.h>  // Para trabajar con enteros de tamaño específico, como uint8_t

// Tamaño de la ROM
#define ROM_SIZE 1024  // 2^10 direcciones (10 entradas)
#define BYTE_SIZE 8    // 8 bits de salida

// Función para inicializar la ROM con un patrón o tabla de verdad específica
void inicializarROM(uint8_t *rom) {
    // Aquí inicializamos la ROM con un patrón o tabla arbitraria
    // Ejemplo: llenarla con valores que sigan un patrón
    for (int i = 0; i < ROM_SIZE; i++) {
        rom[i] = (i % 256);  // Valor arbitrario: el valor de la dirección módulo 256
    }
}
