#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float distancia, litros, consumo;

    printf("Digite a distancia percorrida (km): ");
    scanf("%f", &distancia);
    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &litros);

    consumo = distancia / litros;

    printf("Consumo: %.2f km/l\n", consumo);

    if (consumo < 8.0) {
        printf("Venda o carro!\n");
    } else if (consumo <= 14.0) {
        printf("Economico!\n");
    } else {
        printf("Super economico!\n");
    }

    system("PAUSE");
    return 0;
}
