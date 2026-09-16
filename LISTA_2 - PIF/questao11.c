#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float graus, rad;
    const float PI = 3.141593;

    printf("Digite o angulo em graus: ");
    scanf("%f", &graus);

    rad = graus * (PI / 180.0);

    printf("Angulo em radianos: %.6f\n", rad);

    system("PAUSE");
    return 0;
}