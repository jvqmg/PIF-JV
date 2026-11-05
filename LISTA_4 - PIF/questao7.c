#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double num;

    printf("Digite um numero real: ");
    scanf("%lf", &num);

    if (num >= 0) {
        printf("Raiz quadrada de %.2f = %.2f\n", num, sqrt(num));
    } else {
        printf("Quadrado de %.2f = %.2f\n", num, num * num);
    }

    system("PAUSE");
    return 0;
}
