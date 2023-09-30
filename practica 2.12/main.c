#include <stdio.h>

int main() {
    int NUM, D1, D2, D3, D4;

    printf("Ingrese un número entero de cuatro dígitos: ");
    scanf("%d", &NUM);

    D1 = (NUM / 1000) % 10;
    D2 = (NUM / 100) % 10;
    D3 = (NUM / 10) % 10;
    D4 = NUM % 10;

    if (D1 % 2 == 0 && D2 % 2 == 0 && D3 % 2 == 0 && D4 % 2 == 0) {
        printf("Todos los dígitos son pares.\n");
    } else {
        printf("No todos los dígitos son pares.\n");
    }

    return 0;
}
