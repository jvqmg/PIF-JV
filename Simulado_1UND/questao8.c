#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double pi = 3.14159265;
    double r, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &r);

    area = 4 * pi * r * r;
    volume = (4.0 / 3.0) * pi * r * r * r;

    printf("Área da superfície: %.3f\n", area);
    printf("Volume da esfera: %.3f\n", volume);

    system("PAUSE");
    return 0;
}
