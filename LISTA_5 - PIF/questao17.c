#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;

    printf("Digite um numero nao negativo: ");
    scanf("%d", &n);

    long iter = fatorialIterativo(n);
    long recur = fatorialRecursivo(n);

    printf("Fatorial iterativo: %ld\n", iter);
    printf("Fatorial recursivo: %ld\n", recur);

    if (iter == recur) {
        printf("Os dois resultados coincidem!\n");
    }

    system("PAUSE");
    return 0;
}

long fatorialIterativo(int n) {
    long resultado = 1;
    int i;
    for (i = 2; i <= n; i++) {
        resultado = resultado * i;
    }
    return resultado;
}

long fatorialRecursivo(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fatorialRecursivo(n - 1);
}
