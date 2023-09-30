#include <stdio.h>
#include <math.h>

int main() {
    // Declaración de variables
    double L1, L2, L3;
    double S, Area;

    // Solicitar al usuario que ingrese las longitudes de los lados
    printf("Ingrese la longitud del primer lado del triángulo: ");
    scanf("%lf", &L1);
    printf("Ingrese la longitud del segundo lado del triángulo: ");
    scanf("%lf", &L2);
    printf("Ingrese la longitud del tercer lado del triángulo: ");
    scanf("%lf", &L3);

    // Verificar si los lados forman un triángulo
    if (L1 + L2 > L3 && L2 + L3 > L1 && L3 + L1 > L2) {
        printf("Los lados forman un triángulo.\n");

        // Verificar el tipo de triángulo (equilátero, isósceles o escaleno)
        if (L1 == L2 && L2 == L3) {
            printf("Es un triángulo equilátero.\n");
        } else if (L1 == L2 || L2 == L3 || L3 == L1) {
            printf("Es un triángulo isósceles.\n");
        } else {
            printf("Es un triángulo escaleno.\n");
        }

        // Calcular el área del triángulo
        S = (L1 + L2 + L3) / 2;
        Area = sqrt(S * (S - L1) * (S - L2) * (S - L3));
        printf("El área del triángulo es: %.2lf\n", Area);
    } else {
        printf("Los lados no forman un triángulo.\n");
    }

    return 0;
}
