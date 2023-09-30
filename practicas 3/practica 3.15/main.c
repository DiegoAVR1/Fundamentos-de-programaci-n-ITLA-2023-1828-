#include <stdio.h>

int main() {
    int N1, N2, Resto;

    printf("Ingrese el primer número entero positivo: ");
    scanf("%d", &N1);
    printf("Ingrese el segundo número entero positivo: ");
    scanf("%d", &N2);

    while (N2 != 0) {
        Resto = N1 % N2;
        N1 = N2;
        N2 = Resto;
    }

    printf("El MCD es: %d\n", N1);

    return 0;
}
