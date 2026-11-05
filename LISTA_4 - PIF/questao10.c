#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("O numero e PAR.\n");
    } else {
        printf("O numero e IMPAR.\n");
    }

    if (num > 0) {
        printf("O numero e POSITIVO.\n");
    } else if (num < 0) {
        printf("O numero e NEGATIVO.\n");
    } else {
        printf("O numero e ZERO.\n");
    }

    system("PAUSE");
    return 0;
}
