#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float a, b, c, p, area;

    printf("Digite o lado a: ");
    scanf("%f", &a);

    printf("Digite o lado b: ");
    scanf("%f", &b);

    printf("Digite o lado c: ");
    scanf("%f", &c);

    p = (a + b + c) / 2.0;

    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Área do triângulo(em cm²): %.2f\n", area);

    system("PAUSE");
    return 0;
}