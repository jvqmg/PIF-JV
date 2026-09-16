#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float lado, base, altura;

    printf("Digite o lado do quadrado(em cm): ");
    scanf("%f", &lado);

    printf("Area do quadrado: %.2f\n", lado * lado);

    printf("\nDigite a base do retangulo(em cm): ");
    scanf("%f", &base);

    printf("Digite a altura do retangulo(em cm): ");
    scanf("%f", &altura);

    printf("Area do retangulo: %.2f\n", base * altura);

    printf("\nDigite a base do triangulo(em cm): ");
    scanf("%f", &base);

    printf("Digite a altura do triangulo(em cm) : ");
    scanf("%f", &altura);

    printf("Area do triangulo(em cm²): %.2f\n", (base * altura) / 2.0);

    system("PAUSE");
    return 0;
}