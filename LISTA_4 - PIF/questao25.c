#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int pagar, entregue, troco, cedulas;

    printf("Valor total a pagar: R$ ");
    scanf("%d", &pagar);
    printf("Valor entregue pelo cliente: R$ ");
    scanf("%d", &entregue);

    if (entregue < pagar) {
        printf("Valor insuficiente!\n");
        system("PAUSE");
        return 0;
    }

    troco = entregue - pagar;
    printf("\nTroco: R$ %d\n", troco);

    cedulas = troco / 100;
    troco = troco % 100;
    printf("R$ 100: %d\n", cedulas);

    cedulas = troco / 50;
    troco = troco % 50;
    printf("R$ 50:  %d\n", cedulas);

    cedulas = troco / 20;
    troco = troco % 20;
    printf("R$ 20:  %d\n", cedulas);

    cedulas = troco / 10;
    troco = troco % 10;
    printf("R$ 10:  %d\n", cedulas);

    cedulas = troco / 5;
    troco = troco % 5;
    printf("R$ 5:   %d\n", cedulas);

    cedulas = troco / 2;
    troco = troco % 2;
    printf("R$ 2:   %d\n", cedulas);

    system("PAUSE");
    return 0;
}
