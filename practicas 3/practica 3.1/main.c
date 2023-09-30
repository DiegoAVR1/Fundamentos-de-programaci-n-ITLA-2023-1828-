#include <stdio.h>

int main() {
    int N, Producto;

    printf("Ingrese un número entero para obtener su tabla de multiplicar: ");
    scanf("%d", &N);

    printf("Tabla de multiplicar de %d:\n", N);
    for (int i = 1; i <= 10; i++) {
        Producto = N * i;
        printf("%d x %d = %d\n", N, i, Producto);
    }

    return 0;
}

