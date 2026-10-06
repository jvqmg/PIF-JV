#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int segundos, horas, minutos, segs_rest;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segs_rest = segundos % 60;

    printf("%d hora(s), %d minuto(s) e %d segundo(s)\n", horas, minutos, segs_rest);

    system("PAUSE");
    return 0;
}
