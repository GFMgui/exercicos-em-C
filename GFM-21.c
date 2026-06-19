// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-21 - Numero positivo ou negativo

#include <stdio.h>

int main() {
    float n;
    printf("Digite um numero: ");
    scanf("%f", &n);

    if (n > 0)
        printf("Positivo (Lucro)\n");
    else if (n < 0)
        printf("Negativo (Prejuizo)\n");
    else
        printf("Zero\n");

    return 0;
}
