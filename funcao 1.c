/*1- Realize a soma de dois elementos. Fa�a isso atrav�s de uma fun��o, a qual ser� chamada
na fun��o principal.*/

#include<stdio.h>

int e1,e2,soma;

main(){

printf("Elemento 1: ");
scanf("%d",&e1);

printf("Elemento 2: ");
scanf("%d",&e2);

funcaoPrincipal();

printf("Soma: %d",soma);

}

int funcaoPrincipal(){

soma = e1+e2;
return (soma);


}
