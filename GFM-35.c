// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-35 - Numeros de Fibonacci (n termos)

#include <stdio.h>

int main() {
    int n;
    printf("Digite quantos termos: ");
    scanf("%d", &n);
    long long a = 0, b = 1, temp;
    for (int i = 0; i < n; i++) {
        printf("%lld ", a);
        temp = a + b;
        a = b;
        b = temp;
    }
    printf("\n");
    return 0;
}
