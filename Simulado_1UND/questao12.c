#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float nota;

    do {
        printf("Digite uma nota (0.0 a 10.0): ");
        scanf("%f", &nota);

        if (nota < 0.0 || nota > 10.0)
            printf("Nota inválida! Tente novamente.\n");

    } while (nota < 0.0 || nota > 10.0);

    printf("Nota registrada: %.1f\n", nota);

    system("PAUSE");
    return 0;
}
