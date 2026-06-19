// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-55 - Ler numeros e mostrar o maior (ate digitar negativo)

#include <stdio.h>

int main() {
    float n, maior = -1;
    do {
        printf("Digite um numero (negativo para parar): ");
        scanf("%f", &n);
        if (n >= 0 && n > maior)
            maior = n;
    } while (n >= 0);
    if (maior >= 0)
        printf("Maior numero: %.2f\n", maior);
    else
        printf("Nenhum numero positivo foi digitado.\n");
    return 0;
}
