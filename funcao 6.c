/*6- Escreva a fun��o: HIPOTENUSA. A fun��o recebe o cateto adjacente (b) e o cateto oposto
(a) e retorna o valor da hipotenusa dado pela seguinte f�rmula:
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void HIPOTENUSA(int a, int b, float *total){

int conta;

conta = (a*a) + (b*b);
*total= sqrt(conta);

}

main(){

int a, b;
float total;

printf("Cateto Adjacente: ");
scanf("%d",&b);

printf("Cateto Oposto: ");
scanf("%d",&a);

HIPOTENUSA(a,b,&total);

printf("Hipotenusa: %f",total);

return 0;
}







