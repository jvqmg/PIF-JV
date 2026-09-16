#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float comprimento, largura, preco;
    float perimetro, metrosArame, custo;

    printf("Digite o comprimento do terreno(em metros): ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno(em metros): ");
    scanf("%f", &largura);

    printf("Digite o preço por metro de arame(em reais): ");
    scanf("%f", &preco);

    perimetro = 2 * (comprimento + largura);
    metrosArame = perimetro * 3;
    custo = metrosArame * preco;

    printf("Metros de arame: %.2f\n", metrosArame);
    printf("Custo total: R$ %.2f\n", custo);

    system("PAUSE");
    return 0;
}