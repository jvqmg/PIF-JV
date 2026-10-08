#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char secreta, chute;
    int tentativas;

    srand(time(NULL));
    secreta = rand() % 26 + 'a';
    tentativas = 0;

    printf("Adivinhe a letra secreta (a-z)!\n");

    do {
        printf("Digite uma letra: ");
        scanf(" %c", &chute);
        tentativas++;

        if (chute == secreta) {
            printf("Parabens! Voce acertou em %d tentativa(s)!\n", tentativas);
        } else if (chute < secreta) {
            printf("A letra secreta vem depois de '%c' no alfabeto.\n", chute);
        } else {
            printf("A letra secreta vem antes de '%c' no alfabeto.\n", chute);
        }

    } while (chute != secreta);

    system("PAUSE");
    return 0;
}
