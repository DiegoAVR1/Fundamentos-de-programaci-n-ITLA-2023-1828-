#include <stdio.h>

int main() {

    double Precios[6];
    int BoletosVendidos[6] = {0};
    double RecaudacionTotal = 0.0;

    printf("Ingrese los precios de las localidades:\n");
    for (int i = 1; i <= 6; i++) {
        printf("Localidad %d: ", i);
        scanf("%lf", &Precios[i]);
    }

    for (int i = 1; i <= 6; i++) {
        printf("Ingrese la cantidad de boletos vendidos para la localidad %d: ", i);
        scanf("%d", &BoletosVendidos[i]);
        RecaudacionTotal += Precios[i] * BoletosVendidos[i];
    }

    printf("Número de boletos vendidos para cada localidad:\n");
    for (int i = 1; i <= 6; i++) {
        printf("Localidad %d: %d\n", i, BoletosVendidos[i]);
    }

    printf("Recaudación total: %.2lf\n", RecaudacionTotal);

    return 0;
}
