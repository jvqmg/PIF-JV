#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a, b, i;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    if (a <= b) {
        for (i = a; i <= b; i++) {
            printf("%d ", i);
        }
    } else {
        for (i = a; i >= b; i--) {
            printf("%d ", i);
        }
    }

    printf("\n");

    system("PAUSE");
    return 0;
}
