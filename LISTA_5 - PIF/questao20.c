#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int ehPrimo(int n);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, i;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (ehPrimo(n)) {
        printf("%d e primo.\n", n);
    } else {
        printf("%d nao e primo.\n", n);
    }

    printf("\nNumeros primos de 1 a 50:\n");
    for (i = 1; i <= 50; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    system("PAUSE");
    return 0;
}

int ehPrimo(int n) {
    int i;
    if (n < 2) {
        return 0;
    }
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
