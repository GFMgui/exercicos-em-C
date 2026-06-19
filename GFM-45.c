// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-45 - Menu ate escolher sair

#include <stdio.h>

int main() {
    int op;
    while (1) {
        printf("\n1 - Opcao A\n2 - Opcao B\n0 - Sair\nEscolha: ");
        scanf("%d", &op);
        if (op == 0) break;
        printf("Voce escolheu a opcao %d.\n", op);
    }
    printf("Saindo...\n");
    return 0;
}
