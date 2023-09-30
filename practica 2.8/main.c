#include <stdio.h>

int main() {
    int MED;
    double VAL, resultado;

    printf("Seleccione el tipo de conversi�n:\n");
    printf("1. Pulgadas a mil�metros\n");
    printf("2. Yardas a metros\n");
    printf("3. Millas a kil�metros\n");
    printf("Ingrese el n�mero correspondiente al tipo de conversi�n: ");
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
        printf("Tipo de conversi�n no v�lido.\n");
        return 1;
    }

    printf("El resultado de la conversi�n es: %.2lf\n", resultado);

    return 0;
}
