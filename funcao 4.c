/*4- Escreva em C a função CONTA. A função recebe uma string (nome) e devolve via
parâmetros: número letras maiúsculas e o número letras minúsculas. A função retorna
o total de letras do nome.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

char nome[20];
int mi,ma,t,l;

main(){

printf("Nome: ");
gets(nome);

CONTA();

printf("\nLetras minusculas: %d",mi);
printf("\nLetras maiusculas: %d",ma);
printf("\nTotal de letras: %d",strlen(nome));

}

CONTA(){

for(l=0;l<strlen(nome);l++)
{
    if(nome[l]>97 && nome[l]<122)
        mi++;

    if(nome[l]<90 && nome[l]>65)
        ma++;

}

return(mi,ma);

}
