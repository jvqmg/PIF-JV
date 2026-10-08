#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double valor, soma;
    int quantidade;

    soma = 0;
    quantidade = 0;

    printf("Digite valores positivos (valor negativo para parar):\n");

    printf("Valor: ");
    scanf("%lf", &valor);

    while (valor >= 0) {
        soma += valor;
        quantidade++;
        printf("Valor: ");
        scanf("%lf", &valor);
    }

    if (quantidade == 0) {
        printf("Nenhum valor foi digitado.\n");
    } else {
        printf("\nQuantidade de valores: %d\n", quantidade);
        printf("Soma total: %.2f\n", soma);
        printf("Media: %.2f\n", soma / quantidade);
    }

    system("PAUSE");
    return 0;
}
