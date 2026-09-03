#include <stdio.h>

int main () {

    char tecla;
    printf("Pressione uma tecla e depois ENTER\n");

    // leitura de valores
    scanf("%c", &tecla);
    printf("Voce informou a tecla %c\n", tecla);

    return 0;
}
