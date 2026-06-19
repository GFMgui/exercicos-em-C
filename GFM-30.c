// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-30 - Fatorial de um numero

#include <stdio.h>

int main() {
    int n;
    long long fat = 1;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        fat *= i;
    printf("Fatorial de %d = %lld\n", n, fat);
    return 0;
}
