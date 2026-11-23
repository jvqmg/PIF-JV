#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void contagem(int n);
void contagemCrescente(int n);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O numero deve ser positivo!\n");
        system("PAUSE");
        return 0;
    }

    printf("\nContagem regressiva:\n");
    contagem(n);

    printf("\nContagem crescente:\n");
    contagemCrescente(n);

    system("PAUSE");
    return 0;
}

// Versao decrescente: imprime antes de chamar recursivamente
void contagem(int n) {
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }
    printf("%d\n", n);
    contagem(n - 1);
}

// Versao crescente: chama recursivamente antes de imprimir
// A diferenca e so a posicao do printf: aqui ele vem depois da chamada recursiva,
// entao os numeros aparecem na ordem inversa (de 1 ate n)
void contagemCrescente(int n) {
    if (n == 0) {
        return;
    }
    contagemCrescente(n - 1);
    printf("%d\n", n);
}
