/*Respostas:
a) a A biblioteca <conio.h> não faz parte do padrão ANSI C, tornando o código incompatível e impossível de rodar nesses sistemas modernos.
b) funções equivalentes da biblioteca <stdio.h> incluem getchar() ou fgetc(stdin) para entrada e putchar() ou fputc() para saída.
c)*/ 
#include <stdio.h>

int main(void) {
    char ch;

    printf("Digite um caractere: ");

    if (scanf(" %c", &ch) == 1) {
        printf("Caractere lido com sucesso: '%c'\n", ch);
    }

    return 0;
}