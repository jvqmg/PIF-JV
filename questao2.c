#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


/*Faça um programa em C que declare uma variável de ponto flutuante de precisão simples
(float), atribua a ela um valor constante real de sua preferência (como o valor do número de Euler 'e' =
2.71828) e exiba o resultado no console formatado com exatamente três casas decimais de precisão.*/

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float pi = 3.141;

    printf("O valor de pi é: %.3f\n", pi);
    
    system("PAUSE");
    return 0;
}