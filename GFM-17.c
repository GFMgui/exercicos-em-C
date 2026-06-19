// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-17 - O Sensor do Parque Tematico

#include <stdio.h>

int main() {
    float altura;
    printf("Digite a altura em cm: ");
    scanf("%f", &altura);

    if (altura >= 140)
        printf("LUZ VERDE - Acesso liberado!\n");
    else
        printf("LUZ VERMELHA - Acesso negado!\n");

    return 0;
}
