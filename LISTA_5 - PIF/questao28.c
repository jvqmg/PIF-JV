#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float preco, pago, subtotal, total, troco;
    int quantidade, pagamento;

    printf("Digite o preco do produto: R$ ");
    scanf("%f", &preco);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    subtotal = calculaSubtotal(preco, quantidade);
    printf("Subtotal: R$ %.2f\n", subtotal);

    printf("Forma de pagamento (1 - A vista / 2 - A prazo): ");
    scanf("%d", &pagamento);

    total = aplicaDesconto(subtotal, pagamento);

    if (pagamento == 1) {
        printf("Desconto de 10%% aplicado!\n");
    }

    printf("Total a pagar: R$ %.2f\n", total);

    printf("Valor pago: R$ ");
    scanf("%f", &pago);

    troco = calculaTroco(total, pago);

    if (troco < 0) {
        printf("Valor insuficiente!\n");
    } else {
        printf("Troco: R$ %.2f\n", troco);
    }

    system("PAUSE");
    return 0;
}

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1) {
        return valor * 0.90;
    } else {
        return valor;
    }
}

float calculaTroco(float total, float pago) {
    return pago - total;
}
