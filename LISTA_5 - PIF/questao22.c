#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "areas.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float raio, base, altura;

    printf("=== CALCULO DE AREAS ===\n");

    printf("\nDigite o raio do circulo: ");
    scanf("%f", &raio);
    printf("Area do circulo: %.2f\n", A_CIRC(raio));

    printf("\nDigite a base do retangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);
    printf("Area do retangulo: %.2f\n", A_RET(base, altura));

    printf("\nDigite a base do triangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);
    printf("Area do triangulo: %.2f\n", A_TRI(base, altura));

    system("PAUSE");
    return 0;
}
