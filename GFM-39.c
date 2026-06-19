// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-39 - Verificar se um numero e positivo

#include <stdio.h>

int main() {
    float n;
    printf("Digite um numero positivo: ");
    scanf("%f", &n);
    while (n <= 0) {
        printf("Valor invalido! Digite um numero positivo: ");
        scanf("%f", &n);
    }
    printf("Numero aceito: %.2f\n", n);
    return 0;
}
