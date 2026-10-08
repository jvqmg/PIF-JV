Respostas - Lista de Exercícios Cap. 3 (Laço de Repetição)
Aluno: João Victor Queiroz Medeiros Goularte


Questão 01

a) O while testa a condição antes, então pode executar zero vezes. O do-while executa primeiro e testa depois, então executa pelo menos uma vez.

b) for: quando se sabe quantas repetições serão feitas. while: quando não se sabe quantas repetições serão feitas. do-while: quando o bloco precisa executar pelo menos uma vez, como em menus.

c) É um erro de lógica. O ponto e vírgula deixa o laço vazio, e se a condição for verdadeira o programa entra em loop infinito.


Questão 02

a) Porque soma foi declarada dentro do for, então só existe dentro dele. O printf está fora do laço.

b) Porque soma é zerada a cada iteração, então nunca acumula os valores.

c)

    int i;
    int soma = 0;
    for (i = 1; i < 10; i++) {
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);

Uma variável declarada dentro de um bloco { } só existe dentro desse bloco (escopo) e deixa de existir quando o bloco termina (tempo de vida).


Questão 03

a) Saída: 36 18 9 4 2 1

b) Imprime o caractere seguinte ao digitado (ch + 1). Os parênteses são necessários porque o != tem prioridade sobre o =.

c) Usando break dentro de um if no laço.


Questão 04

a) O laço é encerrado e o programa continua após ele.

b) Pula o resto do corpo e vai para o incremento do for.

c) Interrompe apenas o laço mais interno.


Questão 05

a) 5 iterações.

b)
    i = 0, j = 10 | soma = 10
    i = 1, j = 9  | soma = 10
    i = 2, j = 8  | soma = 10
    i = 3, j = 7  | soma = 10
    i = 4, j = 6  | soma = 10

c)

    int i = 0, j = 10;
    while (i < j) {
        printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
        i++;
        j--;
    }


Questão 06

a) 6.

b) O x++ compara com o valor atual e só depois incrementa. Quando x = 5, a comparação 5 < 5 é falsa, mas o x ainda é incrementado para 6.

c)

    int x = 0;
    while (x < 5) {
        x++;
    }
    x++;
    printf("Valor final de x = %d\n", x);
