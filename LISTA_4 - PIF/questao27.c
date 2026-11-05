#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int horas;
    float total;

    printf("Digite o numero de horas no estacionamento: ");
    scanf("%d", &horas);

    total = 0;

    if (horas >= 1) total += 2.00;
    if (horas >= 2) total += 2.00;
    if (horas >= 3) total += 2.50;
    if (horas >= 4) total += 2.50;
    if (horas >= 5) total += (horas - 4) * 3.00;

    printf("\nTempo total: %d hora(s)\n", horas);
    printf("Valor cobrado: R$ %.2f\n", total);

    system("PAUSE");
    return 0;
}
