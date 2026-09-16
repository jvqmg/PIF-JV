#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int horas, minutos, segundos;
    int duracao;
    int totalSegundos;
    int horaFinal, minutoFinal, segundoFinal;

    printf("Insira a hora de início: ");
    scanf("%d", &horas);

    printf("Insira os minutos de início: ");
    scanf("%d", &minutos);

    printf("Insira os segundos de início: ");
    scanf("%d", &segundos);

    printf("Insira a duração em segundos: ");
    scanf("%d", &duracao);

    totalSegundos = horas * 3600 + minutos * 60 + segundos;
    totalSegundos = totalSegundos + duracao;

    horaFinal = (totalSegundos / 3600) % 24;
    minutoFinal = (totalSegundos % 3600) / 60;
    segundoFinal = totalSegundos % 60;

    printf("Horário de término: %02d:%02d:%02d\n",
           horaFinal, minutoFinal, segundoFinal);

    system("PAUSE");
    return 0;
}