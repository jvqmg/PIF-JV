#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float salario, aumento, novo;
    int cargo;

    printf("Digite o salario atual: R$ ");
    scanf("%f", &salario);
    printf("Codigo do cargo (1=Tecnico, 2=Gerente, 3=Demais): ");
    scanf("%d", &cargo);

    switch (cargo) {
        case 1:
            if (salario <= 3000) {
                aumento = salario * 0.15;
            } else {
                aumento = salario * 0.10;
            }
            break;
        case 2:
            if (salario <= 5000) {
                aumento = salario * 0.10;
            } else {
                aumento = salario * 0.05;
            }
            break;
        case 3:
            aumento = salario * 0.08;
            break;
        default:
            printf("Cargo invalido!\n");
            system("PAUSE");
            return 0;
    }

    novo = salario + aumento;
    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novo);

    system("PAUSE");
    return 0;
}
