/*Determine a saída exata do programa a seguir e explique como o compilador C
interpreta os argumentos do tipo caractere simples ('\n', '\t', '\"') passados para o modificador %c:*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
printf("%c", "\"");
system("PAUSE");
return 0;
}

// O compilador C interpreta os argumentos do tipo caractere simples ('\n', '\t', '\"') passados para o modificador %c da seguinte forma:
// \n é interpretado como uma nova linha, movendo o cursor para a próxima linha.
// \t é interpretado como uma tabulação, adicionando um espaço horizontal equivalente a uma tabulação.
// \" é interpretado como uma aspa dupla, permitindo que a aspa seja exibida na saída sem encerrar a string.

// saída exata:

    "Primeiro programa"