#include <stdio.h>
#include <stdlib.h>

int main() {
    int N1, N2, N3;

    printf("Ingrese el primer n�mero entero (N1): ");
    scanf("%d", &N1);
    printf("Ingrese el segundo n�mero entero (N2): ");
    scanf("%d", &N2);
    printf("Ingrese el tercer n�mero entero (N3): ");
    scanf("%d", &N3);

    if (N1 < N2 && N2 < N3) {
        printf("Los n�meros est�n en orden creciente.\n");
    } else {
        printf("Los n�meros no est�n en orden creciente.\n");
    }

    return 0;
}
