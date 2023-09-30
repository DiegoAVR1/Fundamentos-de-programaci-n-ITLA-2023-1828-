#include <stdio.h>
#include <stdio.h>

int main() {
    // Declaración de variables
    double COM, PrecioReal;

    // Solicitar al usuario que ingrese el monto de la compra
    printf("Ingrese el monto de la compra: $");
    scanf("%lf", &COM);

    // Calcular el precio real con el descuento correspondiente
    if (COM < 800) {
        PrecioReal = COM;
    } else if (COM <= 1500) {
        PrecioReal = COM - (COM * 0.10);
    } else if (COM <= 5000) {
        PrecioReal = COM - (COM * 0.15);
    } else {
        PrecioReal = COM - (COM * 0.20);
    }

    // Mostrar el precio real a pagar
    printf("El precio real a pagar es: $%.2lf\n", PrecioReal);

    return 0;
}
