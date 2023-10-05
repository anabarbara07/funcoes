#include <stdio.h>
#include <string.h>

void CONTA(char *nome, int *mi, int *ma) {
    *mi = 0;
    *ma = 0;

    for (int l = 0; l < strlen(nome); l++) {
        if (nome[l] >= 'a' && nome[l] <= 'z')
            (*mi)++;
        else if (nome[l] >= 'A' && nome[l] <= 'Z')
            (*ma)++;
    }
}

int main() {
    char nome[20];

    printf("Nome: ");
    gets(nome);

    int letras_minusculas = 0;
    int letras_maiusculas = 0;
    int total_letras = 0;

    CONTA(nome, &letras_minusculas, &letras_maiusculas);

    printf("\nLetras minusculas: %d", letras_minusculas);
    printf("\nLetras maiusculas: %d", letras_maiusculas);
    printf("\nTotal de letras: %d", strlen(nome));

    return 0;
}
