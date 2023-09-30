#include <stdio.h>
#include <math.h>

int main() {
    int Y;
    double resultado;

    printf("Ingrese un número entero (Y): ");
    scanf("%d", &Y);

    int resto = Y % 4;

    if (resto == 0) {
        resultado = pow(Y, 3);
    } else if (resto == 1) {
        resultado = (pow(Y, 2) - 14) / pow(Y, 3);
    } else if (resto == 2) {
        resultado = pow(Y, 3) + 5;
    } else {
        resultado = Y;
    }

    printf("El valor de f(Y) es: %.2lf\n", resultado);

    return 0;
}
