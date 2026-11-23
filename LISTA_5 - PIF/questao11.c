#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int ehPar(int n);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (ehPar(n)) {
        printf("O numero %d e par.\n", n);
    } else {
        printf("O numero %d e impar.\n", n);
    }

    system("PAUSE");
    return 0;
}

int ehPar(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}
