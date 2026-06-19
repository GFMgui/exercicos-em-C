// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-28 - Soma dos 100 primeiros numeros naturais

#include <stdio.h>

int main() {
    int soma = 0;
    for (int i = 1; i <= 100; i++)
        soma += i;
    printf("Soma: %d\n", soma);
    return 0;
}
