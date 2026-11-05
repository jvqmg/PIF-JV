#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float valor, final, comissao;
    int opcao;

    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valor);
    printf("Forma de pagamento (1 - A vista | 2 - Parcelado em 3x): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        final = valor * 0.90;
        comissao = final * 0.05;
        printf("Valor com desconto (10%%): R$ %.2f\n", final);
        printf("Comissao do vendedor: R$ %.2f\n", comissao);
    } else if (opcao == 2) {
        comissao = valor * 0.05;
        printf("Valor de cada parcela: R$ %.2f\n", valor / 3);
        printf("Comissao do vendedor: R$ %.2f\n", comissao);
    } else {
        printf("Opcao invalida!\n");
    }

    system("PAUSE");
    return 0;
}
