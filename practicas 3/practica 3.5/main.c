#include <stdio.h>

int main() {
    int N;
    long long Productoria = 1;

    printf("Ingrese un n�mero entero N para calcular la productoria: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        Productoria *= i;
    }

    printf("La productoria de los primeros %d n�meros naturales es: %lld\n", N, Productoria);

    return 0;
}
