#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int opcao;

    printf("=== BANCO - ATENDIMENTO AUTOMATICO ===\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferencia\n");
    printf("4 - Falar com Atendente\n");
    printf("Digite uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Aguarde, consultando seu saldo...\n");
            break;
        case 2:
            printf("Aguarde, gerando seu extrato...\n");
            break;
        case 3:
            printf("Aguarde, direcionando para transferencia...\n");
            break;
        case 4:
            printf("Aguarde, transferindo para um atendente...\n");
            break;
        default:
            printf("Opcao invalida! Tente novamente.\n");
            break;
    }

    system("PAUSE");
    return 0;
}
