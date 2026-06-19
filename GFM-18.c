// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-18 - Login simples

#include <stdio.h>
#include <string.h>

int main() {
    char usuario[50], senha[50];
    printf("Usuario: ");
    scanf("%s", usuario);
    printf("Senha: ");
    scanf("%s", senha);

    if (strcmp(usuario, "aluno") == 0 && strcmp(senha, "1234") == 0)
        printf("Acesso permitido!\n");
    else
        printf("Acesso negado!\n");

    return 0;
}
