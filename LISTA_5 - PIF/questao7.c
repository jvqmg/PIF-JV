#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int soma(int a, int b);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a, b, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    resultado = soma(a, b);

    printf("A soma e: %d\n", resultado);

    system("PAUSE");
    return 0;
}

int soma(int a, int b) {
    return a + b;
}
