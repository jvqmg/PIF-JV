#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int i;
    int soma;

    soma = 0;
    for (i = 1; i <= 100; i++) {
        printf("%d -> %d\n", i, i * i);
        soma += i * i;
    }

    printf("\nSoma total dos quadrados: %d\n", soma);

    system("PAUSE");
    return 0;
}
