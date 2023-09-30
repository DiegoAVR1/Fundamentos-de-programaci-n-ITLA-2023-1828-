#include <stdio.h>

int main() {
    int N, NUMi, ContadorPositivos = 0, ContadorNegativos = 0, ContadorNulos = 0;

    printf("Ingrese la cantidad de números a analizar: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("Ingrese el número %d: ", i);
        scanf("%d", &NUMi);

        if (NUMi > 0) {
            ContadorPositivos++;
        } else if (NUMi < 0) {
            ContadorNegativos++;
        } else {
            ContadorNulos++;
        }
    }

    printf("Cantidad de números positivos: %d\n", ContadorPositivos);
    printf("Cantidad de números negativos: %d\n", ContadorNegativos);
    printf("Cantidad de números nulos: %d\n", ContadorNulos);

    return 0;
}
