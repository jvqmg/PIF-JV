#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int opcao;
    double a, b, resultado;

    printf("=== CALCULADORA ===\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Potenciacao\n");
    printf("Escolha uma operacao: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero: ");
    scanf("%lf", &a);
    printf("Digite o segundo numero: ");
    scanf("%lf", &b);

    switch (opcao) {
        case 1:
            resultado = a + b;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = a - b;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = a * b;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            if (b == 0) {
                printf("Erro: divisao por zero!\n");
            } else {
                resultado = a / b;
                printf("Resultado: %.2f\n", resultado);
            }
            break;
        case 5:
            resultado = pow(a, b);
            printf("Resultado: %.2f\n", resultado);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    system("PAUSE");
    return 0;
}
