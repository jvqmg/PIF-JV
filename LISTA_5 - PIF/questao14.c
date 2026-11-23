#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int somaDigitos(int n);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("Soma dos digitos: %d\n", somaDigitos(n));

    system("PAUSE");
    return 0;
}

int somaDigitos(int n) {
    // Caso base: se o numero tiver um so digito, retorna ele mesmo
    if (n < 10) {
        return n;
    }
    // Passo recursivo: soma o ultimo digito com o restante
    return (n % 10) + somaDigitos(n / 10);
}
