#include <stdio.h>
#include <stdlib.h>

int main() {
    int N1, N2;

    printf("Ingrese el primer número entero (N1): ");
    scanf("%d", &N1);
    printf("Ingrese el segundo número entero (N2): ");
    scanf("%d", &N2);

    if (N2 == 0) {
        printf("No se puede dividir por cero.\n");
    } else if (N1 % N2 == 0) {
        printf("%d es divisor de %d.\n", N1, N2);
    } else {
        printf("%d no es divisor de %d.\n", N1, N2);
    }

    return 0;
}
