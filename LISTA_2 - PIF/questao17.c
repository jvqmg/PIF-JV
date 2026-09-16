#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float raio, area, circunferencia;
    const float PI = 3.141593;

    printf("Digite o raio(em cm): ");
    scanf("%f", &raio);

    area = PI * raio * raio;
    circunferencia = 2 * PI * raio;

    printf("Area(em cm²): %.2f\n", area);
    printf("Circunferencia(em cm): %.2f\n", circunferencia);

    system("PAUSE");
    return 0;
}