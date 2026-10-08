#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num, i, encontrou;

    printf("Digite o numero limite: ");
    scanf("%d", &num);

    encontrou = 0;
    for (i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (encontrou == 0) {
        printf("Nenhum numero satisfaz a condicao.\n");
    } else {
        printf("\n");
    }

    system("PAUSE");
    return 0;
}
