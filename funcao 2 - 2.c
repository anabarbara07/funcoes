/*2- Elabore uma fun��o que receba tr�s nnotas de um aluno como par�metro e uma letra. Se a
letra for �A�, a fun��o deve calcular a m�dia aritm�tica das notas do aluno; se a letra for �P�,
dever� calcular a m�dia ponderada, com pesos 5,3 e 2. Retorne a m�dia calculada para o
programa principal.
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int a,b,c,media;
char letra;

main(){



printf("Nota do 1 aluno: ");
scanf("%d",&a);

printf("Nota do 2 aluno: ");
scanf("%d",&b);

printf("Nota do 3 aluno: ");
scanf("%d",&c);

printf("Media Ponderada = p\nMedia Aritmetica = a\n\nLetra: ");
scanf("%c",&letra);

medias();

printf("Media: %d",media);

}

void medias(){

if(letra=='a')
{
    media = (a+b+c)/2;
}

if(letra=='p')
{
    media = ((a*5)+(b*3)+(c*2))/10;
}
return media;
}
