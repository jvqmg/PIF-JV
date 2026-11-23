#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define PI 3.14159265

float area(float r);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    printf("Area da esfera: %.2f\n", area(raio));

    system("PAUSE");
    return 0;
}

float area(float r) {
    return 4 * PI * r * r;
}
