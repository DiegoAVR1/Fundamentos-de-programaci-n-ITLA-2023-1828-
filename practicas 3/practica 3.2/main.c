#include <stdio.h>

int main() {
    // Declaración de variables
    int N;
    double Suma = 0.0;

    // Solicitar al usuario que ingrese un número entero
    printf("Ingrese un número entero para calcular la serie: ");
    scanf("%d", &N);

    // Calcular el resultado de la serie
    for (int i = 2; i <= N; i++) {
        Suma += 1.0 / i;
    }

    // Mostrar el resultado
    printf("El resultado de la serie es: %.4lf\n", Suma);

    return 0;
}
