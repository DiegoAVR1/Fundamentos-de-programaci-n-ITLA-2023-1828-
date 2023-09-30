#include <stdio.h>

int main() {
    int N;
    double SumaTotal = 0.0;

    printf("Ingrese el número de años: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        double VINi[4];
        printf("Año %d:\n", i);
        for (int j = 0; j < 4; j++) {
            printf("Litros de vino tipo %d: ", j + 1);
            scanf("%lf", &VINi[j]);
            SumaTotal += VINi[j];
        }
    }

    printf("Total producido de vino tipo 1: %.2lf\n", SumaTotal);
    printf("Total producido de vino tipo 2: %.2lf\n", SumaTotal);
    printf("Total producido de vino tipo 3: %.2lf\n", SumaTotal);
    printf("Total producido de vino tipo 4: %.2lf\n", SumaTotal);

    return 0;
}
