// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-59 - O Assistente de Direcao (GPS Sem Mapa)

#include <stdio.h>

int main() {
    char dir;
    printf("Digite a direcao (N/S/L/O): ");
    scanf(" %c", &dir);
    switch (dir) {
        case 'N': printf("Seguir para o Norte.\n"); break;
        case 'S': printf("Seguir para o Sul.\n"); break;
        case 'L': printf("Virar a Leste (Direita).\n"); break;
        case 'O': printf("Virar a Oeste (Esquerda).\n"); break;
        default:  printf("Comando invalido! Pare o robo.\n");
    }
    return 0;
}
