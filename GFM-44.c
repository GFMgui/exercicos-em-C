// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-44 - Contar digitos de um numero

#include <stdio.h>

int main() {
    long long n;
    int cont = 0;
    printf("Digite um numero positivo: ");
    scanf("%lld", &n);
    if (n == 0) cont = 1;
    while (n > 0) {
        n /= 10;
        cont++;
    }
    printf("Quantidade de digitos: %d\n", cont);
    return 0;
}
