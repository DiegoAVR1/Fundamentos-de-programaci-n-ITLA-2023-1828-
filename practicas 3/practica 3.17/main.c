#include <stdio.h>

int main() {
    int N;

    printf("Ingrese un n�mero entero positivo: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

}
