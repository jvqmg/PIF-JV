#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int opcao;
    double temp, resultado;

    printf("= CONVERSOR DE TEMPERATURA =\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite a temperatura: ");
    scanf("%lf", &temp);

    switch (opcao) {
        case 1:
            resultado = temp * 1.8 + 32;
            printf("Resultado: %.2f Fahrenheit\n", resultado);
            break;
        case 2:
            resultado = temp + 273.15;
            printf("Resultado: %.2f Kelvin\n", resultado);
            break;
        case 3:
            resultado = (temp - 32) / 1.8;
            printf("Resultado: %.2f Celsius\n", resultado);
            break;
        case 4:
            resultado = temp - 273.15;
            printf("Resultado: %.2f Celsius\n", resultado);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    system("PAUSE");
    return 0;
}
