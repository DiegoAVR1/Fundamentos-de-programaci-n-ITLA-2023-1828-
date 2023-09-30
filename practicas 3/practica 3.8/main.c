#include <stdio.h>

int main() {
    int N, Yi;

    printf("Ingrese la cantidad de valores de Y a evaluar: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("Ingrese el valor de Y%d: ", i);
        scanf("%d", &Yi);

        if (0 <= Yi && Yi < 15) {
            printf("F(%d) = 0\n", Yi);
        } else if (15 <= Yi && Yi < 30) {
            printf("F(%d) = 11\n", Yi);
        } else if (30 <= Yi && Yi < 60) {
            printf("F(%d) = %.2lf\n", Yi, 4.0 * Yi / 3.0);
        } else if (Yi >= 60) {
            printf("F(%d) = %d\n", Yi, 2 * Yi - 4);
        }
    }

    return 0;
}
