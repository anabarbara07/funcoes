/*5- Desenvolva um programa que imprima 10 elementos. Realize esse algoritmo através de
uma função.
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int x[10],l;

main(){

printf("Digite uma sequencia de 10 numeros: ");

for(l=0;l<10;l++)
  {
    scanf("%d",&x[l]);
  }

  printefe();

}

printefe(){

printf("\n");

for(l=0;l<10;l++)
printf("%d",x[l]);


}
