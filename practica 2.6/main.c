#include <stdio.h>
#include <stdio.h>

int main() {

    double N1, N2, N3;

    printf("Ingrese el primer n�mero real (N1): ");
    scanf("%lf", &N1);
    printf("Ingrese el segundo n�mero real (N2): ");
    scanf("%lf", &N2);
    printf("Ingrese el tercer n�mero real (N3): ");
    scanf("%lf", &N3);

    if (N1 >= N2 && N1 >= N3) {
        printf("N1 es el mayor n�mero.\n");
    } else if (N2 >= N1 && N2 >= N3) {
        printf("N2 es el mayor n�mero.\n");
    } else {
        printf("N3 es el mayor n�mero.\n");
    }

    return 0;
}
