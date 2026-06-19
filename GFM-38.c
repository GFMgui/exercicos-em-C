// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-38 - Senha correta

#include <stdio.h>
#include <string.h>

int main() {
    char senha[50];
    printf("Digite a senha: ");
    scanf("%s", senha);
    while (strcmp(senha, "1234") != 0) {
        printf("Senha incorreta! Tente novamente: ");
        scanf("%s", senha);
    }
    printf("Acesso liberado!\n");
    return 0;
}
