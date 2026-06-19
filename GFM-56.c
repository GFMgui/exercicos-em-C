// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-56 - O Menu do Fast-Food Digital

#include <stdio.h>

int main() {
    int op;
    printf("=== TOTEM DE AUTOATENDIMENTO ===\n");
    printf("Escolha o combo: ");
    scanf("%d", &op);
    switch (op) {
        case 1: printf("Combo Hamburguer + Batata + Refri - R$ 30,00\n"); break;
        case 2: printf("Combo Pizza Brotinho + Refri - R$ 25,00\n"); break;
        case 3: printf("Combo Salada + Suco Natural - R$ 22,00\n"); break;
        case 4: printf("Combo Balde de Frango + Molho - R$ 35,00\n"); break;
        default: printf("Opcao invalida! Escolha de 1 a 4.\n");
    }
    return 0;
}
