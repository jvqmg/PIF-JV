#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define SQR(x) ((x)*(x))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Quadrado de %d: %d\n", a, SQR(a));
    printf("Quadrado de %d: %d\n", b, SQR(b));
    printf("Maior: %d\n", MAX(a, b));
    printf("Menor: %d\n", MIN(a, b));

    system("PAUSE");
    return 0;
}
