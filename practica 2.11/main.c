#include <stdio.h>
#include <math.h>

int main() {
    // Declaraci�n de variables
    double L1, L2, L3;
    double S, Area;

    // Solicitar al usuario que ingrese las longitudes de los lados
    printf("Ingrese la longitud del primer lado del tri�ngulo: ");
    scanf("%lf", &L1);
    printf("Ingrese la longitud del segundo lado del tri�ngulo: ");
    scanf("%lf", &L2);
    printf("Ingrese la longitud del tercer lado del tri�ngulo: ");
    scanf("%lf", &L3);

    // Verificar si los lados forman un tri�ngulo
    if (L1 + L2 > L3 && L2 + L3 > L1 && L3 + L1 > L2) {
        printf("Los lados forman un tri�ngulo.\n");

        // Verificar el tipo de tri�ngulo (equil�tero, is�sceles o escaleno)
        if (L1 == L2 && L2 == L3) {
            printf("Es un tri�ngulo equil�tero.\n");
        } else if (L1 == L2 || L2 == L3 || L3 == L1) {
            printf("Es un tri�ngulo is�sceles.\n");
        } else {
            printf("Es un tri�ngulo escaleno.\n");
        }

        // Calcular el �rea del tri�ngulo
        S = (L1 + L2 + L3) / 2;
        Area = sqrt(S * (S - L1) * (S - L2) * (S - L3));
        printf("El �rea del tri�ngulo es: %.2lf\n", Area);
    } else {
        printf("Los lados no forman un tri�ngulo.\n");
    }

    return 0;
}
