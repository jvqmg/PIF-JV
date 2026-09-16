#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num;

    printf("Digite um numero(inteiro): ");
    scanf("%d", &num);

    printf("Decimal: %d / Hexadecimal: %x / Octal: %o / ASCII: %c\n", num, num, num, num);

    system("PAUSE");
    return 0;
}