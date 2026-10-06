#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;
    long long int resultado = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro! Número negativo não tem fatorial.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            resultado *= i;
        }
        printf("%d! = %lld\n", n, resultado);
    }

    system("PAUSE");
    return 0;
}
