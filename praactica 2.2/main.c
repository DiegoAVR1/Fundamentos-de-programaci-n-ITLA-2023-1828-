#include <stdio.h>
#include <stdlib.h>

int main() {
    double SAL, Incremento, NuevoSalario;

    printf("Ingrese el salario del profesor: ");
    scanf("%lf", &SAL);

    if (SAL < 18000) {
        Incremento = SAL * 0.12;
    } else if (SAL <= 30000) {
        Incremento = SAL * 0.08;
    } else if (SAL <= 50000) {
        Incremento = SAL * 0.07;
    } else {
        Incremento = SAL * 0.06;
    }

    NuevoSalario = SAL + Incremento;

    printf("El nuevo salario del profesor es: %.2lf\n", NuevoSalario);

    return 0;
}
