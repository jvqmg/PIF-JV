#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, i, j;

    printf("Digite uma dimensao impar (3 a 19): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}
