#include <stdio.h>

int main() {
    int N, SEXi, ContadorM = 0, ContadorF = 0;
    double PESi, ALTi, SumaPesoM = 0.0, SumaAlturaM = 0.0, SumaPesoF = 0.0, SumaAlturaF = 0.0;

    // Solicitar al usuario que ingrese N
    printf("Ingrese la cantidad de personas (N): ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("Ingrese el peso de la persona %d: ", i);
        scanf("%lf", &PESi);
        printf("Ingrese la altura de la persona %d: ", i);
        scanf("%lf", &ALTi);
        printf("Ingrese el sexo de la persona %d (1 para hombre, 0 para mujer): ", i);
        scanf("%d", &SEXi);

        if (SEXi == 1) { // Hombre
            SumaPesoM += PESi;
            SumaAlturaM += ALTi;
            ContadorM++;
        } else { // Mujer
            SumaPesoF += PESi;
            SumaAlturaF += ALTi;
            ContadorF++;
        }
    }

    if (ContadorM > 0) {
        double PromedioPesoM = SumaPesoM / ContadorM;
        double PromedioAlturaM = SumaAlturaM / ContadorM;
        printf("Promedio de peso de hombres: %.2lf\n", PromedioPesoM);
        printf("Promedio de altura de hombres: %.2lf\n", PromedioAlturaM);
    } else {
        printf("No hay hombres en la población.\n");
    }

    if (ContadorF > 0) {
        double PromedioPesoF = SumaPesoF / ContadorF;
        double PromedioAlturaF = SumaAlturaF / ContadorF;
        printf("Promedio de peso de mujeres: %.2lf\n", PromedioPesoF);
        printf("Promedio de altura de mujeres: %.2lf\n", PromedioAlturaF);
    } else {
        printf("No hay mujeres en la población.\n");
    }

    return 0;
}
