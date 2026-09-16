a)
primeiro trecho:
int n = 5;
int x = ++n;

O ++n é pré-fixado, então aumenta primeiro e depois atribui o valor no x.

Resultado:

n = 6
x = 6


segundo trecho:
int m = 5;
int y = m++;

O m++ é pós-fixado, então primeiro ele usa o valor de m e depois aumenta.

Resultado:

m = 6
y = 5


b)

A expressão:

printf("%d\t%d\t%d\n", n, n+1, n++);

pode gerar comportamento indefinido porque a variável n está 
sendo lida e modificada na mesma expressão sem uma ordem segura de avaliação.

Por causa disso, o resultado pode variar dependendo do compilador.