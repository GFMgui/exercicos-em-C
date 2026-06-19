// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-52 - Soma ate o numero ser multiplo de 10

#include <stdio.h>

int main() {
    int n;
    float soma = 0;
    do {
        printf("Digite um numero: ");
        scanf("%d", &n);
        soma += n;
    } while (n % 10 != 0);
    printf("Soma total: %.2f\n", soma);
    return 0;
}
