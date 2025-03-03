// 7. Accediendo a la Memoria
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    
    // Código para imprimir direcciones de memoria aquí

    printf("Direcciones de memoria de los elementos del arreglo:\n")
    for (int i = 0; i < 5; i++)
        {
        printf("arr[%d] = %p\n", i, &arr[i]);
    }
    
    return 0;
}
