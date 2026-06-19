// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-54 - Validar numero entre 1 e 5

#include <stdio.h>

int main() {
    int n;
    do {
        printf("Escolha o nivel de dificuldade (1 a 5): ");
        scanf("%d", &n);
        if (n < 1 || n > 5)
            printf("Valor invalido! Tente novamente.\n");
    } while (n < 1 || n > 5);
    printf("Nivel %d selecionado!\n", n);
    return 0;
}
