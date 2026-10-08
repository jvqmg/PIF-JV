#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, i;
    long long int resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro! Numero negativo nao tem fatorial.\n");
    } else {
        resultado = 1;
        for (i = 1; i <= n; i++) {
            resultado *= i;
        }
        printf("%d! = %lld\n", n, resultado);
    }

    system("PAUSE");
    return 0;
}
