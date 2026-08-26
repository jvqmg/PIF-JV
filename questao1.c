#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int anoNascimento = 2008;
    printf("Meu ano de nascimento é: %d\n", anoNascimento);
    system("PAUSE");
    return 0;
}