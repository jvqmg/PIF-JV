Respostas - Simulado Cap. 1, 2, 3 - PIF

Aluno: João Victor Queiroz Medeiros Goularte


Questão 01

Letra c. O C diferencia maiúscula de minúscula, então valor e VALOR, peso e Peso, taxa e TAXA são nomes diferentes.


Questão 02

1 - Main está com M maiúsculo, o certo é main.

2 - O texto do printf está sem aspas. O certo seria printf("A idade do aluno eh: %d anos\n", idade);

3 - cout << endl; é do C++, não existe em C. Para pular linha usa \n no printf.


Questão 03

a += b + c -> a = 2 + 9 = 11

b *= c = d - 2 -> c = 8 e b = 4 * 8 = 32

d %= a + 3 -> d = 10 % 14 = 10

a += b += c += 5 -> c = 13, b = 45, a = 56

Final: a = 56, b = 45, c = 13, d = 10


Questão 04

a) 2 < 5 -> 1

b) -1 <= -1 -> 1

c) !0 é 1 e 7.5 >= 7.5 é 1 -> 1

d) !(2 == 3) é 1 -> 1

e) (1 && 0) || 1 -> 1


Questão 05

a) O while testa a condição antes, então pode não rodar nenhuma vez. O do-while roda primeiro e testa depois, então roda pelo menos uma vez.

b) Quando a gente já sabe quantas vezes vai repetir, tipo contar de 1 até 10, porque fica tudo numa linha só (início, condição e incremento).

c) É erro de lógica, compila normal. Se a condição for verdadeira o programa fica num loop infinito, porque o ; deixa o laço sem nada dentro.


Questão 06

a) Porque a variável soma foi criada dentro do for, então ela só existe lá dentro. O printf está fora do for e não enxerga ela.

b) Roda com i = 1, 2, 3, 4, 6 e 7. O continue pula o 5 e o break para o laço quando chega no 8.

c) Só precisa criar o soma antes do for:

```
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;
    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}
```

Vai imprimir: Soma final = 115 (1 + 4 + 9 + 16 + 36 + 49)
