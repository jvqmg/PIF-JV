#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int idade, servico;

    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);
    printf("Digite o tempo de servico (anos): ");
    scanf("%d", &servico);

    if (idade >= 65 || servico >= 30 || (idade >= 60 && servico >= 25)) {
        printf("O trabalhador PODE se aposentar.\n");
    } else {
        printf("O trabalhador NAO pode se aposentar ainda.\n");
    }

    system("PAUSE");
    return 0;
}
