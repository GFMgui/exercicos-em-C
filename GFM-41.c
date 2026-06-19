// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-41 - Numero primo com while

#include <stdio.h>

int main() {
    int n, i = 2, primo = 1;
    printf("Digite um numero: ");
    scanf("%d", &n);
    if (n < 2) primo = 0;
    while (i < n && primo) {
        if (n % i == 0) primo = 0;
        i++;
    }
    printf(primo ? "%d e primo.\n" : "%d nao e primo.\n", n);
    return 0;
}
