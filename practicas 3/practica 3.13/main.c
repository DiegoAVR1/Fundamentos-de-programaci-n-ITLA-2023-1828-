#include <stdio.h>
#include <math.h>

int EsPrimo(int numero) {
    if (numero <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(numero); i++) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int N1, N2;

    printf("Ingrese un número entero positivo N1: ");
    scanf("%d", &N1);
    printf("Ingrese un número entero positivo mayor que N1 N2: ");
    scanf("%d", &N2);

    printf("Números primos gemelos entre %d y %d:\n", N1, N2);

    for (int i = N1; i <= N2 - 2; i++) {
        if (EsPrimo(i) && EsPrimo(i + 2)) {
            printf("%d y %d\n", i, i + 2);
        }
    }

    return 0;
}
