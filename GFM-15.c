// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-15 - Quantas caixas cabem dentro do caminhao

#include <stdio.h>

int main() {
    float altC, largC, compC, altCx, largCx, compCx;
    printf("Dimensoes do caminhao (altura largura comprimento): ");
    scanf("%f %f %f", &altC, &largC, &compC);
    printf("Dimensoes da caixa (altura largura comprimento): ");
    scanf("%f %f %f", &altCx, &largCx, &compCx);

    int qtd = (int)(altC / altCx) * (int)(largC / largCx) * (int)(compC / compCx);
    printf("Cabem %d caixas no caminhao.\n", qtd);

    return 0;
}
