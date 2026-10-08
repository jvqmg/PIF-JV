#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, i, divisores;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    divisores = 0;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    if (n > 1 && divisores == 2) {
        printf("%d e um numero primo.\n", n);
    } else {
        printf("%d nao e um numero primo. (tem %d divisores)\n", n, divisores);
    }

    system("PAUSE");
    return 0;
}
