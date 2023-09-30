#include <stdio.h>
#include <math.h>

int main() {
    int X;
    double suma = 0.0;
    int terminos = 1;
    double potencia;
    int signo = 1;

    printf("Ingrese un número entero: ");
    scanf("%d", &X);

    potencia = X;

    while (fabs(suma) >= 0.001) {
        double siguiente_termino = (potencia / terminos) * signo;
        suma += siguiente_termino;
        terminos += 2;
        potencia *= X * X;
        signo = -signo;
    }

    printf("sen(%d) = %.4lf\n", X, suma);

    return 0;
}
