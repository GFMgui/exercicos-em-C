// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-40 - Tabuada com while

#include <stdio.h>

int main() {
    int n, i = 1;
    printf("Digite um numero: ");
    scanf("%d", &n);
    while (i <= 10) {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }
    return 0;
}
