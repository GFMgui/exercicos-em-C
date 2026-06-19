// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-49 - Pedir senha ate acertar

#include <stdio.h>
#include <string.h>

int main() {
    char senha[50];
    do {
        printf("Digite a senha: ");
        scanf("%s", senha);
        if (strcmp(senha, "1111") != 0)
            printf("Senha incorreta!\n");
    } while (strcmp(senha, "1111") != 0);
    printf("Acesso liberado!\n");
    return 0;
}
