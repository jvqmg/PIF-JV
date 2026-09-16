#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    printf("Codigo ASCII: %d\n", caractere);

    // O numero vai representar o código do caractere na tabela ASCII.

    system("PAUSE");
    return 0;
}