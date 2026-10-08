#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int senha, tentativa, i, acertou;

    senha = 2026;
    acertou = 0;

    for (i = 1; i <= 3; i++) {
        printf("Digite a senha: ");
        scanf("%d", &tentativa);

        if (tentativa == senha) {
            printf("Acesso Concedido!\n");
            printf("Tentativas utilizadas: %d\n", i);
            acertou = 1;
            break;
        } else {
            printf("Senha incorreta!\n");
        }
    }

    if (acertou == 0) {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    system("PAUSE");
    return 0;
}
