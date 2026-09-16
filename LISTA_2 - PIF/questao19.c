#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int dias;
    float bruto, liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    bruto = dias * 30.0;
    liquido = bruto - (bruto * 0.08);

    printf("Valor bruto: R$ %.2f\n", bruto);
    printf("Valor líquido: R$ %.2f\n", liquido);

    system("PAUSE");
    return 0;
}