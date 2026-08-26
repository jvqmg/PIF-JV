#include <stdio.h>

int main() {
    int segundos, horas, minutos;

    printf("Digite o intervalo de tempo em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundos = segundos % 60;

    printf("%d segundos são equivalentes a %d horas, %d minutos e %d segundos.\n", segundos, horas, minutos, segundos);

    return 0;
}