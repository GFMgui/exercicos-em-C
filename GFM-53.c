// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-53 - Confirmar saida com 's'

#include <stdio.h>

int main() {
    char op;
    do {
        printf("Deseja sair? (s para sair): ");
        scanf(" %c", &op);
    } while (op != 's');
    printf("Programa encerrado.\n");
    return 0;
}
