#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float ladoA, ladoB, hipotenusa;

    printf("Digite o a medida do primeiro cateto: ");
    scanf("%f", &ladoA);

    printf("Digite o a medida do segundo cateto: ");
    scanf("%f", &ladoB);

    hipotenusa = sqrt((ladoA * ladoA) + (ladoB * ladoB));

    printf("Hipotenusa: %.2f\n", hipotenusa);

    system("PAUSE");
    return 0;
}