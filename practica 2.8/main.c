#include <stdio.h>

int main() {
    int MED;
    double VAL, resultado;

    printf("Seleccione el tipo de conversión:\n");
    printf("1. Pulgadas a milímetros\n");
    printf("2. Yardas a metros\n");
    printf("3. Millas a kilómetros\n");
    printf("Ingrese el número correspondiente al tipo de conversión: ");
    scanf("%d", &MED);

    printf("Ingrese el valor a convertir: ");
    scanf("%lf", &VAL);

    if (MED == 1) {
        resultado = VAL * 25.4;
    } else if (MED == 2) {
        resultado = VAL * 0.9144;
    } else if (MED == 3) {
        resultado = VAL * 1.6093;
    } else {
        printf("Tipo de conversión no válido.\n");
        return 1;
    }

    printf("El resultado de la conversión es: %.2lf\n", resultado);

    return 0;
}
