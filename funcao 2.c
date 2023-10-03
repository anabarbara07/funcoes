/*2- Escreva um programa que calcule as seguintes operacoes entre dois numeros dados:
Adicao, Diferenca, Multiplicacao, Divisao, Exponeciacao e Media.
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int x,y,soma,menos,vezes,divide;

main(){

printf("Numero 1: ");
scanf("%d",&x);

printf("Numero 2: ");
scanf("%d",&y);

calcula();

printf("\nAdicao: %d",soma);
printf("\nDiferenca: %d",menos);
printf("\nMultiplicacao: %d",vezes);
printf("\nDivisao: %d",divide);

}

calcula(){

soma = x+y;
menos = x-y;
vezes = x*y;
divide = x/y;

return(soma,menos,vezes,divide);

}
