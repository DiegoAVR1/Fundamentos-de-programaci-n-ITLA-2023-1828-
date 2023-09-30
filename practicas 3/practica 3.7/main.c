#include <stdio.h>

int main() {
    int N;
    int Suma = 0;

    printf("Ingrese un número entero N para calcular la serie: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            Suma -= i;
        } else {
            Suma += i;
        }
    }

    printf("El resultado de la serie es: %d\n", Suma);

    return 0;
}
