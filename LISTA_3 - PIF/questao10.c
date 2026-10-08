#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int i, contador;

    contador = 0;
    for (i = 3; i <= 300; i += 3) {
        printf("%d\t", i);
        contador++;
        if (contador % 10 == 0) {
            printf("\n");
        }
    }

    system("PAUSE");
    return 0;
}
