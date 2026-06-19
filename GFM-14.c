// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-14 - Tipo de Triangulo

#include <stdio.h>

int main() {
    float a, b, c;
    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c)
        printf("Triangulo Equilatero\n");
    else if (a == b || b == c || a == c)
        printf("Triangulo Isosceles\n");
    else
        printf("Triangulo Escaleno\n");

    return 0;
}
