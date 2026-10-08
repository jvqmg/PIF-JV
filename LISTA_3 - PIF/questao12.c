#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int c;
    double f, k;

    printf("Celsius\t\tFahrenheit\tKelvin\n");
    printf("--------------------------------------\n");

    for (c = 0; c <= 100; c += 5) {
        f = (9.0 * c) / 5.0 + 32;
        k = c + 273.15;
        printf("%d\t\t%.2f\t\t%.2f\n", c, f, k);
    }

    system("PAUSE");
    return 0;
}
