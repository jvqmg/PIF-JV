#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

long fibonacci(int n);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int quantidade, i;

    printf("Quantos termos da sequencia de Fibonacci? ");
    scanf("%d", &quantidade);

    printf("Sequencia: ");
    for (i = 0; i < quantidade; i++) {
        printf("%ld ", fibonacci(i));
    }
    printf("\n");

    // A versao recursiva se torna lenta para valores grandes de n porque
    // ela recalcula os mesmos termos multiplas vezes.
    // Por exemplo, fibonacci(5) chama fibonacci(4) e fibonacci(3),
    // e fibonacci(4) tambem chama fibonacci(3) novamente.
    // O numero de chamadas cresce exponencialmente, o que deixa o programa muito lento.

    system("PAUSE");
    return 0;
}

long fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
