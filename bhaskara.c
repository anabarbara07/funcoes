#include<stdio.h>
#include<math.h>


main(){

int a,b,c;
float delta,x;

printf("                Formula de Bhaskara\n\nInsira A: ");
scanf("%d",&a);

printf("Insira B: ");
scanf("%d",&b);

printf("Insira C: ");
scanf("%d",&c);

calculadelta(a,c,&delta);

calculax(a,b,&x,&delta);

printf("Delta = %d",delta);
printf("X = %d",x);
}

void calculadelta(int a, int c, float *delta){

*delta = (-4 * a * c);

return 0;
}

void calculax(int a, int b, float *x,float *delta){

float d2;

d2 = sqrt(delta);
*x = (-b * d2 / 2 * a);

return 0;
}
