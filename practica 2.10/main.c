#include <stdio.h>

int main() {
    double SAL;
    int CAT, PHE;
    double montoExtra, salarioTotal;

    printf("Ingrese el salario base del burócrata: $");
    scanf("%lf", &SAL);

    printf("Ingrese la categoría del trabajador (1, 2 o 3): ");
    scanf("%d", &CAT);

    printf("Ingrese las horas extra trabajadas: ");
    scanf("%d", &PHE);

    if (CAT >= 4) {
        printf("Los trabajadores de categoría 4 o mayor a 4 no tienen derecho a horas extra.\n");
        return 1;
    }

    if (PHE > 30) {
        PHE = 30;
    }

    if (CAT == 1) {
        montoExtra = PHE * 40;
    } else if (CAT == 2) {
        montoExtra = PHE * 50;
    } else if (CAT == 3) {
        montoExtra = PHE * 85;
    }

    salarioTotal = SAL + montoExtra;

    printf("El salario total a pagar es: $%.2lf\n", salarioTotal);

    return 0;
}
