#include <stdio.h>

int main() {
    int N;
    double Productoria = 1.0;

    printf("Ingrese un número entero para calcular la serie: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        Productoria *= 1.0 / i;
    }

    printf("El resultado de la serie es: %.4lf\n", Productoria);

    return 0;
}
