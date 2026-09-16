#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char letra;

    printf("Digite uma letra maiúscula: ");
    scanf("%c", &letra);

    letra = letra + 32;

    printf("Letra minúscula: %c\n", letra);

    system("PAUSE");
    return 0;
}