// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-60 - O Validador de Dias Uteis

#include <stdio.h>

int main() {
    int dia;
    printf("Digite o dia da semana (1=Domingo a 7=Sabado): ");
    scanf("%d", &dia);
    switch (dia) {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("Dia Util. Acesso liberado para o trabalho.\n"); break;
        case 1:
        case 7:
            printf("Fim de Semana. Predio fechado.\n"); break;
        default:
            printf("Numero de dia invalido.\n");
    }
    return 0;
}
