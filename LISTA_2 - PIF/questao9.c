#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero1, numero2;
    float divisao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    printf("Soma: %d\n", numero1 + numero2);
    printf("Subtracao: %d\n", numero1 - numero2);
    printf("Multiplicacao: %d\n", numero1 * numero2);

    if (numero2 != 0) {
        divisao = (float) numero1 / numero2;
        printf("Divisao: %.2f\n", divisao);
    } else {
        printf("Nao e possivel dividir por zero.\n");
    }

    /* para conseguir evitar a divisao por zero,
     o denominador deve ser diferente de zero.*/

    system("PAUSE");
    return 0;
}