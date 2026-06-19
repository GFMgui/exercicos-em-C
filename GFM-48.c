// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-48 - Menu com opcao de sair

#include <stdio.h>

int main() {
    int op;
    do {
        printf("\n1 - Mensagem\n2 - Sair\nEscolha: ");
        scanf("%d", &op);
        if (op == 1)
            printf("Voce escolheu a mensagem!\n");
    } while (op != 2);
    printf("Saindo...\n");
    return 0;
}
