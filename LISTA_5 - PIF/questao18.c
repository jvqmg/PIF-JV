#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

long potencia(int base, int expoente);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente (nao negativo): ");
    scanf("%d", &expoente);

    if (expoente < 0) {
        printf("Expoente negativo nao e suportado.\n");
    } else {
        printf("%d elevado a %d = %ld\n", base, expoente, potencia(base, expoente));
    }

    system("PAUSE");
    return 0;
}

long potencia(int base, int expoente) {
    // Caso base: qualquer numero elevado a 0 e 1
    if (expoente == 0) {
        return 1;
    }
    // Passo recursivo: base * base^(expoente-1)
    return base * potencia(base, expoente - 1);
}
