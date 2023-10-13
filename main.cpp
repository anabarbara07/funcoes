#include<stdio.h>
#include<math.h>

void calculadelta(int a, int b, int c, float *delta){

*delta = pow(b,2) + (-4 * a * c);

}

void calculax(int a, int b, float *x1, float *x2,float *delta){

float d2, tmp;


d2 = sqrt(*delta);
printf("\nd2 = %.2f\n",d2);

*x1 = ((-b + d2) / (2 * a));
*x2 = ((-b - d2) / (2 * a));

}

main(){

int a,b,c;
float delta,x1,x2;

printf("                Formula de Bhaskara\n\nInsira A: ");
scanf("%d",&a);

printf("Insira B: ");
scanf("%d",&b);

printf("Insira C: ");
scanf("%d",&c);

calculadelta(a,b,c,&delta);

calculax(a,b,&x1,&x2,&delta);

printf("Delta = %.2f",delta);
printf("\nX1 = %.2f",x1);
printf("\nX2 = %.2f",x2);

}
