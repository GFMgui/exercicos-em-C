// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-22 - Par ou impar

#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d e par.\n", n);
    else
        printf("%d e impar.\n", n);

    return 0;
}
