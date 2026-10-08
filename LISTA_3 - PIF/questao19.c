#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, i, a, b, c;

    printf("Digite o numero do termo desejado: ");
    scanf("%d", &n);

    a = 1;
    b = 1;

    printf("Sequencia de Fibonacci ate o termo %d:\n", n);

    if (n == 1) {
        printf("Termo 1: 1\n");
    } else if (n == 2) {
        printf("Termo 1: 1\n");
        printf("Termo 2: 1\n");
    } else {
        printf("Termo 1: 1\n");
        printf("Termo 2: 1\n");
        for (i = 3; i <= n; i++) {
            c = a + b;
            printf("Termo %d: %d\n", i, c);
            a = b;
            b = c;
        }
    }

    system("PAUSE");
    return 0;
}
