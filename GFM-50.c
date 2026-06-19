// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-50 - Numero positivo obrigatorio

#include <stdio.h>

int main() {
    float n;
    do {
        printf("Digite um valor positivo para deposito: ");
        scanf("%f", &n);
        if (n <= 0)
            printf("Valor invalido!\n");
    } while (n <= 0);
    printf("Deposito de R$ %.2f realizado!\n", n);
    return 0;
}
