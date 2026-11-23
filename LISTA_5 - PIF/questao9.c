#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int maior(int a, int b);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("O maior e: %d\n", maior(a, b));

    system("PAUSE");
    return 0;
}

int maior(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
