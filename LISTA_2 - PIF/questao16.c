#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float degrauCm, alturaM, alturaCm;
    int degraus;

    printf("Digite a altura de cada degrau em cm: ");
    scanf("%f", &degrauCm);

    printf("Digite a altura total em metros: ");
    scanf("%f", &alturaM);

    alturaCm = alturaM * 100;

    degraus = (int)(alturaCm / degrauCm);

    if (degraus * degrauCm < alturaCm) {
        degraus++;
    }

    printf("Numero mínimo de degraus que o trabalhador quer subir: %d\n", degraus);

    system("PAUSE");
    return 0;
}