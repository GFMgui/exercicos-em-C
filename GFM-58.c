// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-58 - A Calculadora de Bolso de 4 Operacoes

#include <stdio.h>

int main() {
    float a, b;
    char op;
    printf("Digite: numero operacao numero (ex: 10 + 5): ");
    scanf("%f %c %f", &a, &op, &b);
    switch (op) {
        case '+': printf("Resultado: %.2f\n", a + b); break;
        case '-': printf("Resultado: %.2f\n", a - b); break;
        case '*': printf("Resultado: %.2f\n", a * b); break;
        case '/':
            if (b != 0) printf("Resultado: %.2f\n", a / b);
            else printf("Divisao por zero!\n");
            break;
        default: printf("Operacao matematica nao reconhecida\n");
    }
    return 0;
}
