/*Explique detalhadamente o comportamento do programa abaixo quando executado no
console. Apresente qual será a saída exata gerada pelas sequências de escape utilizadas no formato de
controle: */

#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("\n\t\"Primeiro programa\"");
system("PAUSE");
return 0;
}

// \n passa o cursor pra próxima linha
// \t adiciona uma tabulação
// \" pra colocar aspas duplas dentro da string
// system("PAUSE") pausa a execução do programa
// return 0; indica que programa terminou sem erros

//saída exata:

    "Primeiro programa"