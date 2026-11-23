#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int opcao;
    float a, b, resultado;

    printf("=== CALCULADORA ===\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    switch (opcao) {
        case 1:
            resultado = soma(a, b);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = subtrai(a, b);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = multiplica(a, b);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            if (b == 0) {
                printf("Erro: divisao por zero!\n");
            } else {
                resultado = divide(a, b);
                printf("Resultado: %.2f\n", resultado);
            }
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    system("PAUSE");
    return 0;
}

float soma(float a, float b) {
    return a + b;
}

float subtrai(float a, float b) {
    return a - b;
}

float multiplica(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
