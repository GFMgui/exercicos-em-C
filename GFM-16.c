// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-16 - Multiplo de 3 e/ou 5

#include <stdio.h>

int main() {
    int pedido;
    printf("Digite o numero do pedido: ");
    scanf("%d", &pedido);

    if (pedido % 3 == 0 && pedido % 5 == 0)
        printf("Voce ganhou refrigerante E sobremesa!\n");
    else if (pedido % 3 == 0)
        printf("Voce ganhou um refrigerante!\n");
    else if (pedido % 5 == 0)
        printf("Voce ganhou uma sobremesa!\n");
    else
        printf("Sem brinde desta vez.\n");

    return 0;
}
