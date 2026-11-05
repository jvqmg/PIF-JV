-Questão 01

a) Escrever if (x = 0) usa o operador de atribuição (=) em vez do operador de igualdade (==). O que acontece é que o valor 0 é atribuído à variável x, e esse resultado (0) é usado como a condição do if. Como 0 significa falso em C, o bloco de código nunca será executado.

b) Em C, qualquer valor diferente de zero é considerado verdadeiro, e o valor zero é considerado falso. Então dentro de um if, qualquer número positivo ou negativo entra no bloco, e somente o zero faz o bloco ser ignorado.

c) A instrução if (x = -5) atribui o valor -5 à variável x. O resultado da atribuição é -5, que é diferente de zero, portanto é considerado verdadeiro em C. O bloco de código será executado.

-Questão 02

a) A mensagem impressa será "Opção B". Isso acontece porque o else sempre se associa ao if mais próximo — que no caso é o if (y > 10). Como x = 15 e x > 10 é verdadeiro, entra no segundo if. Como y = 5 e y > 10 é falso, cai no else e imprime "Opção B".

b) A regra oficial em C é que o else sempre se associa ao if mais próximo que ainda não tenha um else. Isso é chamado de regra do "dangling else".

c) Código reescrito com chaves para garantir que "Opção B" só apareça quando x <= 10:


if (x > 10) {
    if (y > 10) {
        printf("Opcao A\n");
    }
} else {
    printf("Opcao B\n");
}

-Questão 03

a) A segunda linha verifica se media >= 7.0. Se for verdadeiro, armazena 'A' em situacao. Se for falso, armazena 'R'. Como media = 6.8, a condição é falsa, então situacao recebe o valor 'R' (reprovado).

b) Reescrito com if-else:

media = (nota1 + nota2) / 2.0;
if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}


c) Não, o operador ternário não pode substituir qualquer if-else. Ele só serve para expressões simples que retornam um único valor. Quando o bloco tem múltiplos comandos, como vários printf's ou cálculos seguidos, é obrigatório usar o if-else com chaves.

-Questão 04

a) A saída exata será:
Prata
Ouro

Isso acontece porque o programa entra no case 2 (codigo = 2), imprime "Prata", mas não tem break, então continua executando o case 3 e imprime "Ouro". Depois encontra o break e para. Esse comportamento se chama fall-through.

b) O break serve para encerrar a execução do switch e pular para o código depois do bloco. Quando ele é omitido, ocorre o efeito chamado fall-through, onde o programa continua executando os cases seguintes mesmo que não correspondam ao valor da variável.

c) O switch só aceita tipos inteiros: int, char e long. Não é permitido usar float ou double porque esses tipos têm valores com casas decimais e não podem ser comparados com precisão em cases. O padrão ANSI C exige que a expressão do switch resulte em um valor inteiro.


-Questão 05

a) A saída será: a = 0, b = 5, c = 8

A condição é a != 0 && ++b > 5. Como a = 0, a primeira parte a != 0 já é falsa. Por causa do curto-circuito do &&, o C não avalia o ++b, então b continua sendo 5. O else é executado: c = 10 - 2 = 8.

b) No operador && (E lógico), se a primeira condição for falsa, o resultado já será falso independente do resto. Então o C para de avaliar e ignora tudo que vem depois. No operador || (OU lógico), se a primeira condição for verdadeira, o resultado já será verdadeiro, e o C também para de avaliar o restante.

c) Se a condição fosse if (a == 0 || ++b > 5):  
- a == 0 é verdadeiro, então por curto-circuito do ||, o ++b não é executado  
- b continua sendo 5  
- O if é executado: c = 10 + 10 = 20  
- Valores finais: b = 5, c = 20

-Questão 06

a) Para idade = 65, a saída será:

Idoso
Adulto
Jovem

Isso acontece porque os três comandos if são independentes, então cada um é testado separadamente. 65 >= 60 (verdadeiro), 65 >= 18 (verdadeiro) e 65 >= 12 (verdadeiro). O else só está associado ao último if.

b) Na sequência de if independentes, todos são testados e qualquer um pode ser executado. Na cadeia else-if, quando uma condição é verdadeira, as outras são ignoradas e só uma mensagem é exibida.

c) Código corrigido com else-if:

int idade = 25;
if (idade >= 60) {
    printf("Idoso\n");
} else if (idade >= 18) {
    printf("Adulto\n");
} else if (idade >= 12) {
    printf("Jovem\n");
} else {
    printf("Crianca\n");
}