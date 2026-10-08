#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero, invertido, digito;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    invertido = 0;
    while (numero > 0) {
        digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    printf("Numero invertido: %d\n", invertido);

    system("PAUSE");
    return 0;
}
