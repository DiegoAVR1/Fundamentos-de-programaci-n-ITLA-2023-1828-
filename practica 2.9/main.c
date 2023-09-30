#include <stdio.h>

int main() {

    int MED, SME;
    double VAL, resultado;

    printf("Seleccione el tipo de conversi�n:\n");
    printf("1. Longitud\n");
    printf("2. Volumen\n");
    printf("3. Peso\n");
    printf("Ingrese el n�mero correspondiente al tipo de conversi�n: ");
    scanf("%d", &MED);

    if (MED == 1) {
        printf("Seleccione la medida de longitud a convertir:\n");
        printf("1. Pulgadas a mil�metros\n");
        printf("2. Yardas a metros\n");
        printf("3. Millas a kil�metros\n");
        printf("Ingrese el n�mero correspondiente a la medida de longitud: ");
    } else if (MED == 2) {
        printf("Seleccione la medida de volumen a convertir:\n");
        printf("1. Pies c�bicos a metros c�bicos\n");
        printf("2. Yardas c�bicas a metros c�bicos\n");
        printf("3. Galones a litros\n");
        printf("Ingrese el n�mero correspondiente a la medida de volumen: ");
    } else if (MED == 3) {
        printf("Seleccione la medida de peso a convertir:\n");
        printf("1. Onzas a gramos\n");
        printf("2. Libras a kilogramos\n");
        printf("3. Toneladas inglesas a toneladas m�tricas\n");
        printf("Ingrese el n�mero correspondiente a la medida de peso: ");
    } else {
        printf("Tipo de conversi�n no v�lido.\n");
        return 1;
    }

    scanf("%d", &SME);

    printf("Ingrese el valor a convertir: ");
    scanf("%lf", &VAL);

    if (MED == 1) {
        if (SME == 1) {
            resultado = VAL * 25.40;
        } else if (SME == 2) {
            resultado = VAL * 0.9144;
        } else if (SME == 3) {
            resultado = VAL * 1.6093;
        }
    } else if (MED == 2) {
        if (SME == 1) {
            resultado = VAL * 0.02832;
        } else if (SME == 2) {
            resultado = VAL * 0.7646;
        } else if (SME == 3) {
            resultado = VAL * 4.54609;
        }
    } else if (MED == 3) {
        if (SME == 1) {
            resultado = VAL * 28.35;
        } else if (SME == 2) {
            resultado = VAL * 0.45359;
        } else if (SME == 3) {
            resultado = VAL * 1.0160;
        }
    }


    printf("El resultado de la conversi�n es: %.2lf\n", resultado);

    return 0;
}
