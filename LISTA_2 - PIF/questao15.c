#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float nota1, nota2, nota3, nota4;
    float mediaSimples, mediaPonderada;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    printf("Digite a nota 4: ");
    scanf("%f", &nota4);

    mediaSimples = (nota1 + nota2 + nota3 + nota4) / 4.0;

    mediaPonderada = (nota1 + nota2 + (nota3 * 2) + (nota4 * 2)) / 6.0;

    printf("Media simples: %.2f\n", mediaSimples);
    printf("Media ponderada: %.2f\n", mediaPonderada);

    system("PAUSE");
    return 0;
}