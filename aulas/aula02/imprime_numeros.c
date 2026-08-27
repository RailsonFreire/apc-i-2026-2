#include <stdio.h>

int main  () {


    printf("10");
    printf("8.5");
    printf("10 + 5");
    printf("%i\n", 10 + 5);
    printf("%f\n", 8.5);
    printf("%.1f\n\n", 8.5);


    printf("CPF = %i\n", 11111111111);
    printf("CPF = %lli\n", 11111111111);
    // preenche com espaço ate 11 digitos
    printf("CPF = %11i\n", 00000000001);
    // preenche com 0 ate 11 digitos
    printf("CPF = %011i\n", 00000000001);

    printf("Preco = R$ %7.2f\n", 100.00);
    printf("Preco = R$ %7.2f\n", 10.0);
    printf("Preco = R$ %7.2f\n", 1000.0);

    return 0;
}