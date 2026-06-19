// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-23 - Maior de dois numeros

#include <stdio.h>

int main() {
    float a, b;
    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);

    if (a > b)
        printf("O maior numero e: %.2f\n", a);
    else if (b > a)
        printf("O maior numero e: %.2f\n", b);
    else
        printf("Os numeros sao iguais.\n");

    return 0;
}
