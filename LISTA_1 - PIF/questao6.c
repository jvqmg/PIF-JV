/*faltam as bibliotecas <stdio.h> e <stdlib.h>; a função main não está declarada como int e nem tem o return 0. */

main()
{
int a=1; b=2; c=3://aqui deveria terminar a linha com ponto e vírgula
printf("0s números são: %d%d%d\n, a, b, c, d); // está faltando aspas duplas para fechar; há 3 especificadores mas aparecem 4 identificadores (a, b, c, d), com o d ficando de sobra; a chamada printf está mal formulada, pois a vírgula está dentro das aspas duplas; o correto seria: printf("Os números são: %d %d %d\n", a, b, c);
system("pause");
}