#include <stdio.h>
#include <stdio.h>

int main() {

    double N1, N2, N3;

    printf("Ingrese el primer número real (N1): ");
    scanf("%lf", &N1);
    printf("Ingrese el segundo número real (N2): ");
    scanf("%lf", &N2);
    printf("Ingrese el tercer número real (N3): ");
    scanf("%lf", &N3);

    if (N1 >= N2 && N1 >= N3) {
        printf("N1 es el mayor número.\n");
    } else if (N2 >= N1 && N2 >= N3) {
        printf("N2 es el mayor número.\n");
    } else {
        printf("N3 es el mayor número.\n");
    }

    return 0;
}
