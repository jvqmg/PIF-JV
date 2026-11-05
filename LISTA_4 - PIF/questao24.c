#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a, b, c;

    printf("Digite o primeiro angulo: ");
    scanf("%d", &a);
    printf("Digite o segundo angulo: ");
    scanf("%d", &b);
    printf("Digite o terceiro angulo: ");
    scanf("%d", &c);

    if (a + b + c != 180) {
        printf("Os angulos nao formam um triangulo valido.\n");
    } else if (a == 90 || b == 90 || c == 90) {
        printf("Triangulo Retangulo\n");
    } else if (a > 90 || b > 90 || c > 90) {
        printf("Triangulo Obtusangulo\n");
    } else {
        printf("Triangulo Acutangulo\n");
    }

    system("PAUSE");
    return 0;
}
