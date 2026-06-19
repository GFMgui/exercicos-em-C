// Nome: Guilherme Ferreira Mendes
// RA: 0025753
// Exercicio: GFM-57 - A Central do Brinquedo Eletronico

#include <stdio.h>
#include <string.h>

int main() {
    char cor[20];
    printf("Cor que acendeu: ");
    scanf("%s", cor);
    if (strcmp(cor, "Verde") == 0)
        printf("O urso diz: \"Vamos brincar la fora!\"\n");
    else if (strcmp(cor, "Amarelo") == 0)
        printf("O urso diz: \"Estou ficando com soninho...\"\n");
    else if (strcmp(cor, "Vermelho") == 0)
        printf("O urso diz: \"Estou com fome, hora do lanche!\"\n");
    else
        printf("Cor desconhecida\n");
    return 0;
}
