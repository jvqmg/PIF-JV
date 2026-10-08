#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a, b, i, j, divisores, soma;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    soma = 0;
    printf("Primos entre %d e %d:\n", a, b);

    for (i = a; i <= b; i++) {
        divisores = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisores++;
            }
        }
        if (i > 1 && divisores == 2) {
            printf("%d ", i);
            soma += i;
        }
    }

    printf("\nSoma dos primos: %d\n", soma);

    system("PAUSE");
    return 0;
}
