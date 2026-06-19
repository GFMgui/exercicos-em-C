// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-25 - Notas e aprovacao

#include <stdio.h>

int main() {
    float media;
    printf("Digite a media final: ");
    scanf("%f", &media);

    if (media >= 7.0)
        printf("Aprovado!\n");
    else if (media >= 5.0)
        printf("Em recuperacao.\n");
    else
        printf("Reprovado.\n");

    return 0;
}
