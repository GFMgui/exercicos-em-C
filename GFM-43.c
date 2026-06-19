// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-43 - Soma dos pares entre 1 e 100

#include <stdio.h>

int main() {
    int i = 2, soma = 0;
    while (i <= 100) {
        soma += i;
        i += 2;
    }
    printf("Soma dos pares: %d\n", soma);
    return 0;
}
