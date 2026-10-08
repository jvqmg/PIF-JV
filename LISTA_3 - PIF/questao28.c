#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int opcao;
    double salario, novo_salario, desconto;

    do {
        printf("\n=== FOLHA DE PAGAMENTO ===\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o salario atual: R$ ");
                scanf("%lf", &salario);
                if (salario <= 2000.0) {
                    novo_salario = salario * 1.15;
                    printf("Reajuste de 15%%.\n");
                } else {
                    novo_salario = salario * 1.10;
                    printf("Reajuste de 10%%.\n");
                }
                printf("Novo salario: R$ %.2f\n", novo_salario);
                break;

            case 2:
                printf("Digite o salario: R$ ");
                scanf("%lf", &salario);
                if (salario <= 3000.0) {
                    desconto = salario * 0.08;
                    printf("Desconto de 8%%.\n");
                } else {
                    desconto = salario * 0.15;
                    printf("Desconto de 15%%.\n");
                }
                printf("Imposto descontado: R$ %.2f\n", desconto);
                printf("Salario liquido: R$ %.2f\n", salario - desconto);
                break;

            case 3:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }

    } while (opcao != 3);

    system("PAUSE");
    return 0;
}
