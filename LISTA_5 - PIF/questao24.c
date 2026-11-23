#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Para ativar o modo DEBUG, descomente a linha abaixo antes de compilar:
// #define DEBUG

int somaAteN(int n);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    int resultado = somaAteN(n);
    printf("Soma de 1 ate %d = %d\n", n, resultado);

    // Compilando com #define DEBUG: o programa imprime cada valor parcial dentro do laco.
    // Compilando sem #define DEBUG: o programa imprime apenas o resultado final.

    system("PAUSE");
    return 0;
}

int somaAteN(int n) {
    int i, soma = 0;
    for (i = 1; i <= n; i++) {
        soma = soma + i;

#ifdef DEBUG
        printf("Parcial: soma ate %d = %d\n", i, soma);
#endif
    }
    return soma;
}
