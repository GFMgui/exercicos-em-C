// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-42 - Quantidade de numeros impares digitados

#include <stdio.h>

int main() {
    int n, cont = 0, impares = 0;
    while (cont < 10) {
        printf("Digite o numero %d: ", cont + 1);
        scanf("%d", &n);
        if (n % 2 != 0) impares++;
        cont++;
    }
    printf("Quantidade de impares: %d\n", impares);
    return 0;
}
