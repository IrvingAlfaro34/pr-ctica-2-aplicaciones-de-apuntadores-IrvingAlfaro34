// 11. Buscar en un Arreglo
#include <stdio.h>

// Función para buscar un número en el arreglo y devolver su dirección de memoria
int *buscarElemento(int *arr, int tamaño, int valor) {
    for (int i = 0; i < tamaño; i++) {
        if (*(arr + i) == valor) { 
            return (arr + i); // 
        }
    }
    return NULL; 
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int tamaño = sizeof(arr) / sizeof(arr[0]); 
    //numero que deseo buscar
    int numeroBuscado = 30;

    // Llamar a la función para buscar el número
    int *direccion = buscarElemento(arr, tamaño, numeroBuscado);

    if (direccion != NULL) {
        printf("El número %d se encontró en la dirección de memoria: %p\n", numeroBuscado, (void*)direccion);
    } else {
        printf("El número %d no se encontró en el arreglo.\n", numeroBuscado);
    }

    return 0;
}
