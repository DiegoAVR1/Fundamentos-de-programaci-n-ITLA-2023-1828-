#include <stdio.h>
#include <stdlib.h>

int main() {
    int N1, N2, N3;

    printf("Ingrese el primer número entero (N1): ");
    scanf("%d", &N1);
    printf("Ingrese el segundo número entero (N2): ");
    scanf("%d", &N2);
    printf("Ingrese el tercer número entero (N3): ");
    scanf("%d", &N3);

    if (N1 < N2 && N2 < N3) {
        printf("Los números están en orden creciente.\n");
    } else {
        printf("Los números no están en orden creciente.\n");
    }

    return 0;
}
