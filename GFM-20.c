// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-20 - Ano bissexto

#include <stdio.h>

int main() {
    int ano;
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
        printf("%d e bissexto.\n", ano);
    else
        printf("%d nao e bissexto.\n", ano);

    return 0;
}
