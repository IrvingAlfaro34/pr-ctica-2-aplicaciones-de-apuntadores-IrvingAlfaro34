// 9. Suma con Apuntadores
#include <stdio.h>

// Función para sumar los elementos de un arreglo usando apuntadores
int sumaArreglo(int *arr, int tamaño) {
    int suma = 0;
    for (int i = 0; i < tamaño; i++) {
        suma += *(arr + i); 
    }
    return suma;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    // Calcular el tamaño del arreglo
    int tamaño = sizeof(numeros) / sizeof(numeros[0]); 

    // Calcular la suma usando la función con apuntadores
    int resultado = sumaArreglo(numeros, tamaño);

    // Mostrar el resultado
    printf("La suma de los elementos del arreglo es: %d\n", resultado);

    return 0;
}