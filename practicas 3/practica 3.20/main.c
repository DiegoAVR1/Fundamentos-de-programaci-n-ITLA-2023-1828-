#include <stdio.h>

int main() {
    int T, P, R;
    int limite = 5850;

    printf("Valores positivos de T, P y R que satisfacen 7*T^4 - 6*P^3 + 12*R^5 < 5850:\n");

    for (T = 1; T <= limite; T++) {
        for (P = 1; P <= limite; P++) {
            for (R = 1; R <= limite; R++) {
                int resultado = 7 * T * T * T * T - 6 * P * P * P + 12 * R * R * R * R * R;
                if (resultado < limite) {
                    printf("T=%d, P=%d, R=%d\n", T, P, R);
                }
            }
        }
    }

    return 0;
}
