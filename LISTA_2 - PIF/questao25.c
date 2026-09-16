#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float salarioBase, gratificacao, imposto, salarioLiquido;

    printf("Digite o salário base: ");
    scanf("%f", &salarioBase);

    gratificacao = salarioBase * 0.05;
    imposto = salarioBase * 0.07;

    salarioLiquido = salarioBase + gratificacao - imposto;

    printf("Salário líquido: R$ %.2f\n", salarioLiquido);

    // Fórmula: salario liquido = salario base + 5% - 7%

    system("PAUSE");
    return 0;
}