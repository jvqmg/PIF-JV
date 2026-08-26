#include <stdio.h>

int main() {
    int v1, v2, v3;
    double media;

    printf("Digite três valores inteiros: ");
    scanf("%d %d %d", &v1, &v2, &v3);

    media = (v1 + v2 + v3) / 3.0;

    printf("A média dos valores é: %.2f\n", media);

    return 0;
}