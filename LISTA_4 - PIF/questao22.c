#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float valor, final;
    int estado;

    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor);
    printf("Estado de destino (1=MG, 2=SP, 3=RJ, 4=MS): ");
    scanf("%d", &estado);

    switch (estado) {
        case 1:
            final = valor * 1.07;
            printf("Imposto MG (7%%): R$ %.2f\n", final);
            break;
        case 2:
            final = valor * 1.12;
            printf("Imposto SP (12%%): R$ %.2f\n", final);
            break;
        case 3:
            final = valor * 1.15;
            printf("Imposto RJ (15%%): R$ %.2f\n", final);
            break;
        case 4:
            final = valor * 1.08;
            printf("Imposto MS (8%%): R$ %.2f\n", final);
            break;
        default:
            printf("Codigo de estado invalido!\n");
            break;
    }

    system("PAUSE");
    return 0;
}
