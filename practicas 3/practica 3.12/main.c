#include <stdio.h>

int main() {
    int NUM;

    printf("Ingrese un n�mero entero positivo: ");
    scanf("%d", &NUM);

    printf("N�meros primos menores a %d:\n", NUM);

    for (int i = 2; i < NUM; i++) {
        int EsPrimo = 1;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                EsPrimo = 0;
                break;
            }
        }

        if (EsPrimo) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
