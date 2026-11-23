#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Macro sem parenteses de protecao (incorreta)
#define DOBRO(x) x*2

// Funcao dobro
int dobro(int x);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Chamando com 2+3
    // A macro expande para: 2+3*2 = 2+6 = 8 (errado, deveria ser 10)
    // A funcao recebe o valor 5 e retorna 10 (correto)
    printf("Macro DOBRO(2+3) = %d\n", DOBRO(2+3));
    printf("Funcao dobro(2+3) = %d\n", dobro(2+3));

    // A diferenca: a macro substitui o texto diretamente, sem avaliar a expressao.
    // Por isso 2+3*2 vira 2+(3*2)=8 ao inves de (2+3)*2=10.

    // Macro corrigida com parenteses de protecao:
    // #define DOBRO(x) ((x)*2)
    // Agora ficaria: ((2+3)*2) = 10

    system("PAUSE");
    return 0;
}

int dobro(int x) {
    return x * 2;
}
