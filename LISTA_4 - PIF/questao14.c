#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float nota;
    int faltas;

    printf("Digite a nota (0.0 a 10.0): ");
    scanf("%f", &nota);
    printf("Digite o numero de faltas: ");
    scanf("%d", &faltas);

    if (nota >= 9.0 && nota <= 10.0) {
        if (faltas <= 20) {
            printf("Conceito A\n");
        } else {
            printf("Conceito B\n");
        }
    } else if (nota >= 7.5) {
        if (faltas <= 20) {
            printf("Conceito B\n");
        } else {
            printf("Conceito C\n");
        }
    } else if (nota >= 5.0) {
        if (faltas <= 20) {
            printf("Conceito C\n");
        } else {
            printf("Conceito D\n");
        }
    } else if (nota >= 4.0) {
        if (faltas <= 20) {
            printf("Conceito D\n");
        } else {
            printf("Conceito E\n");
        }
    } else {
        printf("Conceito E\n");
    }

    system("PAUSE");
    return 0;
}
