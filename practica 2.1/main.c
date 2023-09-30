#include <stdio.h>
#include <stdlib.h>

int main() {
    int S;
    float FA;

    printf("Ingrese el número de sonidos emitidos por el grillo: ");
    scanf("%d", &S);

    FA = (float)S / 4 + 40;

    printf("La temperatura es: %.2f grados Fahrenheit\n", FA);

    return 0;
}
