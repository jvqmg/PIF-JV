#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float celsiusParaFahrenheit(float c);
float celsiusParaKelvin(float c);
float fahrenheitParaCelsius(float f);
float kelvinParaCelsius(float k);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int opcao;
    float temp;

    printf("=== CONVERSOR DE TEMPERATURA ===\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcao);

    printf("Digite a temperatura: ");
    scanf("%f", &temp);

    switch (opcao) {
        case 1:
            printf("%.2f Celsius = %.2f Fahrenheit\n", temp, celsiusParaFahrenheit(temp));
            break;
        case 2:
            printf("%.2f Celsius = %.2f Kelvin\n", temp, celsiusParaKelvin(temp));
            break;
        case 3:
            printf("%.2f Fahrenheit = %.2f Celsius\n", temp, fahrenheitParaCelsius(temp));
            break;
        case 4:
            printf("%.2f Kelvin = %.2f Celsius\n", temp, kelvinParaCelsius(temp));
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    system("PAUSE");
    return 0;
}

float celsiusParaFahrenheit(float c) {
    return c * 9.0 / 5.0 + 32;
}

float celsiusParaKelvin(float c) {
    return c + 273.15;
}

float fahrenheitParaCelsius(float f) {
    return (f - 32) * 5.0 / 9.0;
}

float kelvinParaCelsius(float k) {
    return k - 273.15;
}
