#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float nota, maior, menor, soma;
    int total;

    total = 0;
    soma = 0;
    maior = -1;
    menor = 11;

    printf("Digite as notas (-1.0 para encerrar):\n");

    printf("Nota: ");
    scanf("%f", &nota);

    while (nota != -1.0) {
        if (nota > maior) maior = nota;
        if (nota < menor) menor = nota;
        soma += nota;
        total++;
        printf("Nota: ");
        scanf("%f", &nota);
    }

    if (total == 0) {
        printf("Nenhuma nota foi digitada.\n");
    } else {
        printf("\nTotal de alunos: %d\n", total);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media geral: %.2f\n", soma / total);
    }

    system("PAUSE");
    return 0;
}
