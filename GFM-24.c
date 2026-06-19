// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-24 - Pode votar?

#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 16)
        printf("Pode votar!\n");
    else
        printf("Nao pode votar ainda.\n");

    return 0;
}
