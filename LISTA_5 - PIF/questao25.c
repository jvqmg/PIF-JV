#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a, b;

    printf("Digite o numerador: ");
    scanf("%d", &a);
    printf("Digite o denominador: ");
    scanf("%d", &b);

    printf("MDC(%d, %d) = %d\n", a, b, mdc(a, b));
    simplifica(a, b);

    system("PAUSE");
    return 0;
}

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdc(b, a % b);
}

void simplifica(int num, int den) {
    int divisor = mdc(num, den);
    printf("Fracao simplificada: %d/%d\n", num / divisor, den / divisor);
}
