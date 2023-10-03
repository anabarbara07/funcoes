/*3- Escreva em C a função VERIFICA_QUADRANTE. A função recebe um valor para x e um
valor para y e retorna o número do quadrante (1,2,3 ou 4).*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int x,y,q;

int main(){

printf("Numero 1: ");
scanf("%d",&x);

printf("Numero 2: ");
scanf("%d",&y);

VERIFICA_QUADRANTE();

printf("\nO numero do quadrante e: %d",q);


}

int VERIFICA_QUADRANTE(){

if(x>0 && y>0)
    q=1;

if(x<0 && y>0)
    q=2;

if(x<0 && y<0)
    q=3;

if(x>0 && y<0)
    q=4;

return(q);

}
