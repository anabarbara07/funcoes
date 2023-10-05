/*2- Elabore uma função que receba três nnotas de um aluno como parâmetro e uma letra. Se a
letra for ‘A’, a função deve calcular a média aritmética das notas do aluno; se a letra for ‘P’,
deverá calcular a média ponderada, com pesos 5,3 e 2. Retorne a média calculada para o
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
