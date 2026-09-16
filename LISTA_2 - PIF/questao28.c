#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float horasNormais, horasExtras;
    float salarioBruto, imposto, salarioLiquido;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%f", &horasNormais);

    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%f", &horasExtras);

    salarioBruto = (horasNormais * 10.0) + (horasExtras * 15.0);

    imposto = salarioBruto > 12000 ? (salarioBruto - 12000) * 0.10 : 0;

    salarioLiquido = salarioBruto - imposto;

    printf("Salário anual bruto: R$ %.2f\n", salarioBruto);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salário líquido: R$ %.2f\n", salarioLiquido);

    system("PAUSE");
    return 0;
}