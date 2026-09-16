#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero;
    float decima;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    decima = numero / 10.0;

    printf("Quadrado: %d\n", numero * numero);
    printf("Decima parte: %.2f\n", decima);

    system("PAUSE");
    return 0;
}