#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int senha = 2026;
    int tentativa, acesso = 0;

    for (int i = 0; i < 3; i++) {
        printf("Digite a senha: ");
        scanf("%d", &tentativa);

        if (tentativa == senha) {
            printf("Acesso Concedido!\n");
            acesso = 1;
            break;
        } else {
            printf("Senha incorreta!\n");
        }
    }

    if (!acesso)
        printf("Conta Bloqueada por Segurança!\n");

    system("PAUSE");
    return 0;
}
