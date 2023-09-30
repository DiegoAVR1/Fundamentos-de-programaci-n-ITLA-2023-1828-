#include <stdio.h>

int main() {
    double NOR[12], CEN[12], SUR[12], GOL[12], PAC[12], CAR[12];
    double SumaNOR = 0.0, SumaCEN = 0.0, SumaSUR = 0.0, SumaGOL = 0.0, SumaPAC = 0.0, SumaCAR = 0.0;
    double MinTemp = 100.0, MaxTemp = -100.0;
    int MesMinTemp = 0, MesMaxTemp = 0;

    for (int i = 0; i < 12; i++) {
        printf("Ingrese el promedio de temperatura en el Norte para el mes %d: ", i + 1);
        scanf("%lf", &NOR[i]);
        printf("Ingrese el promedio de temperatura en el Centro para el mes %d: ", i + 1);
        scanf("%lf", &CEN[i]);
        printf("Ingrese el promedio de temperatura en el Sur para el mes %d: ", i + 1);
        scanf("%lf", &SUR[i]);
        printf("Ingrese el promedio de temperatura en el Golfo para el mes %d: ", i + 1);
        scanf("%lf", &GOL[i]);
        printf("Ingrese el promedio de temperatura en el Pacífico para el mes %d: ", i + 1);
        scanf("%lf", &PAC[i]);
        printf("Ingrese el promedio de temperatura en el Caribe para el mes %d: ", i + 1);
        scanf("%lf", &CAR[i]);

        SumaNOR += NOR[i];
        SumaCEN += CEN[i];
        SumaSUR += SUR[i];
        SumaGOL += GOL[i];
        SumaPAC += PAC[i];
        SumaCAR += CAR[i];

        if (NOR[i] < MinTemp) {
            MinTemp = NOR[i];
            MesMinTemp = i + 1;
        }
        if (NOR[i] > MaxTemp) {
            MaxTemp = NOR[i];
            MesMaxTemp = i + 1;
        }

        if (CEN[i] < MinTemp) {
            MinTemp = CEN[i];
            MesMinTemp = i + 1;
        }
        if (CEN[i] > MaxTemp) {
            MaxTemp = CEN[i];
            MesMaxTemp = i + 1;
        }

        if (SUR[i] < MinTemp) {
            MinTemp = SUR[i];
            MesMinTemp = i + 1;
        }
        if (SUR[i] > MaxTemp) {
            MaxTemp = SUR[i];
            MesMaxTemp = i + 1;
        }

        if (GOL[i] < MinTemp) {
            MinTemp = GOL[i];
            MesMinTemp = i + 1;
        }
        if (GOL[i] > MaxTemp) {
            MaxTemp = GOL[i];
            MesMaxTemp = i + 1;
        }

        if (PAC[i] < MinTemp) {
            MinTemp = PAC[i];
            MesMinTemp = i + 1;
        }
        if (PAC[i] > MaxTemp) {
            MaxTemp = PAC[i];
            MesMaxTemp = i + 1;
        }

        if (CAR[i] < MinTemp) {
            MinTemp = CAR[i];
            MesMinTemp = i + 1;
        }
        if (CAR[i] > MaxTemp) {
            MaxTemp = CAR[i];
            MesMaxTemp = i + 1;
        }
    }

    double PromedioNOR = SumaNOR / 12;
    double PromedioCEN = SumaCEN / 12;
    double PromedioSUR = SumaSUR / 12;
    double PromedioGOL = SumaGOL / 12;
    double PromedioPAC = SumaPAC / 12;
    double PromedioCAR = SumaCAR / 12;

    printf("Promedio anual de temperatura en el Norte: %.2lf\n", PromedioNOR);
    printf("Promedio anual de temperatura en el Centro: %.2lf\n", PromedioCEN);
    printf("Promedio anual de temperatura en el Sur: %.2lf\n", PromedioSUR);
    printf("Promedio anual de temperatura en el Golfo: %.2lf\n", PromedioGOL);
    printf("Promedio anual de temperatura en el Pacífico: %.2lf\n", PromedioPAC);
    printf("Promedio anual
