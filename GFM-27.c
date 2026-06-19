// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-27 - Tabuada de um numero

#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);
    return 0;
}
