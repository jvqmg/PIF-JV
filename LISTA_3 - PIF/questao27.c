#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int valor, cedulas;

    printf("Digite o valor do saque (R$): ");
    scanf("%d", &valor);

    printf("\nCedulas necessarias:\n");

    cedulas = valor / 100;
    valor = valor % 100;
    printf("R$ 100: %d cedula(s)\n", cedulas);

    cedulas = valor / 50;
    valor = valor % 50;
    printf("R$ 50:  %d cedula(s)\n", cedulas);

    cedulas = valor / 20;
    valor = valor % 20;
    printf("R$ 20:  %d cedula(s)\n", cedulas);

    cedulas = valor / 10;
    valor = valor % 10;
    printf("R$ 10:  %d cedula(s)\n", cedulas);

    cedulas = valor / 5;
    valor = valor % 5;
    printf("R$ 5:   %d cedula(s)\n", cedulas);

    cedulas = valor / 2;
    valor = valor % 2;
    printf("R$ 2:   %d cedula(s)\n", cedulas);

    system("PAUSE");
    return 0;
}
