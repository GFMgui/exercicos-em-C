// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-37 - Soma de numeros ate digitar zero

#include <stdio.h>

int main() {
    float n, soma = 0;
    printf("Digite numeros (0 para parar):\n");
    scanf("%f", &n);
    while (n != 0) {
        soma += n;
        scanf("%f", &n);
    }
    printf("Soma total: %.2f\n", soma);
    return 0;
}
