#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int i;

    // Usando o for
    printf("Usando for\n");
    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    // Usando o while
    printf("Usando while\n");
    i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");

    // Usando o do-while
    printf("Usando do-while\n");
    i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n");

    // O for é o mais adequado para este caso porque já sabemos exatamente
    // quantas vezes o laço vai repetir (de 0 a 100), e o for organiza
    // o início, a condição e o incremento em uma só linha, ficando mais legível.

    system("PAUSE");
    return 0;
}
