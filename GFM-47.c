// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-47 - Tabuada com do...while

#include <stdio.h>

int main() {
    int n, i = 1;
    printf("Digite um numero: ");
    scanf("%d", &n);
    do {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    } while (i <= 10);
    return 0;
}
