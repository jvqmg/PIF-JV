Questão 01

a) O protótipo é "float celsius(float);", declarado antes da main. Ele avisa ao compilador que essa função existe, qual é o tipo que ela retorna e quais parâmetros ela recebe. A chamada é "c = celsius(f);", dentro da main, que é quando de fato a função é executada. A definição é o bloco completo da função escrito depois da main, onde está o código que faz o cálculo.

b) O protótipo serve para o compilador saber o que esperar da função antes de encontrar sua definição. Se ele fosse omitido e a função estivesse definida depois da main, o compilador poderia gerar um aviso ou erro, porque quando ele chegar na chamada ainda não sabe nada sobre essa função e não consegue verificar se os tipos dos parâmetros estão certos.

c) O tipo da função é float, porque é o tipo do valor que ela retorna com o return. Em C, o tipo de uma função é definido pelo que ela devolve, não pelo tipo dos parâmetros.

---

Questão 02

a) Em C, uma função só pode devolver um único valor por meio do return. Na função calcular(), o programador tentou retornar dois valores ao mesmo tempo com "return soma, media;", o que não funciona. O operador vírgula avalia as expressões da esquerda para a direita e retorna apenas o valor da última, ou seja, só media seria devolvida.

b) O return; dentro de uma função void faz o programa sair da função imediatamente, sem executar o que vem depois. Ele não é obrigatório no final de uma função void, pois o compilador sai automaticamente quando o fechamento de chaves é atingido.

c) Para retornar apenas a média:

int media(int a, int b, int c) {
    return (a + b + c) / 3;
}

Para retornar apenas a soma:

int soma(int a, int b, int c) {
    return a + b + c;
}

Em C precisamos de duas funções separadas porque o return só consegue devolver um valor de cada vez.

---

Questão 03

a) exibe_mensagem: tem parâmetro de entrada (msg), não tem valor de retorno (void). obter_codigo: não tem parâmetro de entrada, tem valor de retorno int. limpar_tela: não tem parâmetro de entrada, não tem valor de retorno.

b) Uma função com retorno devolve um valor que pode ser usado em expressões ou atribuições, como em "c = celsius(f)". Um procedimento void apenas executa ações, sem devolver nada, como exibir uma mensagem na tela.

c) Não é válida. limpar_tela() é do tipo void, ou seja, não retorna nenhum valor. Tentar atribuir o resultado dela a uma variável gera erro de compilação, porque não há nada para ser armazenado.

---

Questão 04

a) O caso base é quando n == 0, onde a função retorna 1. O passo recursivo é "n * fatorial(n - 1)", onde a função chama a si mesma com um valor menor. Se o caso base fosse removido, a função nunca teria uma condição de parada e ficaria se chamando infinitamente, causando estouro de pilha e travando o programa.

b) Rastreamento de fatorial(4):

Empilhamento:
fatorial(4) espera 4 * fatorial(3)
fatorial(3) espera 3 * fatorial(2)
fatorial(2) espera 2 * fatorial(1)
fatorial(1) espera 1 * fatorial(0)
fatorial(0) retorna 1 (caso base)

Desempilhamento:
fatorial(1) retorna 1 * 1 = 1
fatorial(2) retorna 2 * 1 = 2
fatorial(3) retorna 3 * 2 = 6
fatorial(4) retorna 4 * 6 = 24

c) A cada chamada recursiva, o computador reserva um espaço na pilha de execução para armazenar as variáveis locais e o ponto de retorno daquela chamada. Se não houver caso base, isso continua até a memória da pilha acabar, causando um erro de stack overflow e encerrando o programa.

---

Questão 05

a) SQR(2+3) expande para ((2+3)*(2+3)) = 5*5 = 25, porque os parênteses garantem que o argumento seja avaliado por completo antes de multiplicar. DOBRO(2+3) expande para 2+3*2 = 2+6 = 8, porque sem parênteses a multiplicação tem precedência maior e o 3*2 é calculado antes da soma.

b) O #define não termina com ponto e vírgula porque é uma diretiva de pré-processamento, não um comando C. Se colocássemos ; no final, ele faria parte da substituição e poderia causar erros. Os identificadores são escritos em maiúsculas por convenção para distinguir facilmente as macros e constantes das variáveis comuns.

c) "#define PRN (n) printf("%d", n)" está incorreto porque há um espaço entre PRN e (n). O pré-processador interpreta que PRN é uma macro simples sem argumento. A forma correta é sem espaço: "#define PRN(n) printf("%d", n)". A diferença entre macro e função é que a macro é substituída textualmente pelo pré-processador antes da compilação, sem verificação de tipos, enquanto a função tem verificação de tipos e cria um ambiente de execução próprio.

---

Questão 06

a) #include <stdio.h> usa colchetes angulares, que fazem o compilador procurar o arquivo nos diretórios padrão do sistema. #include "areas.h" usa aspas, que fazem o compilador procurar primeiro no diretório atual do projeto. Usamos <> para bibliotecas do sistema e "" para arquivos que nós mesmos criamos.

b) #undef SOMA remove a definição da macro SOMA, fazendo com que ela deixe de existir a partir daquele ponto. A forma "#undef SOMA(x,y)" está incorreta porque o #undef só recebe o nome da macro, sem os parâmetros.

c) Como DEBUG não foi definido, a mensagem impressa será "Modo normal". Essa decisão é tomada durante o pré-processamento, antes da compilação. O pré-processador verifica se DEBUG está definido e mantém apenas o trecho de código correspondente. As diretivas não aparecem no executável final porque são processadas e substituídas antes do código ser compilado.
