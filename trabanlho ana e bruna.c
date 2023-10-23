#include <stdio.h>
#include <locale.h>

float seno (int angulo, int catetoOposto, int hipotenusa);
float converteAnguloSeno (int angulo);
void solicitaFormula(int *formula);



main(){
    int escolha2;
    int angulo,catetoOposto,hipotenusa;
setlocale(LC_ALL, "Portuguese");
    do{

    int formula, angulo, valorRequerido, valorOposto,escolha;

    printf("\n----------------------------------------------------------------------------------------------------------------\n");
    printf("\n        MENU\n\n");
    printf("1 - Bhaskara\n2 - Tabela dos Notaveis\n3 - Seno\n4 - Cosseno\n5 - Tangente\n6 - Pitagoras\n7 - Sair\n\n");
    printf("\nEscolha: ");
    scanf("%d",&escolha);
    printf("\n----------------------------------------------------------------------------------------------------------------\n\n");

    switch(escolha)
    {
      case 1: bhaskara();
              break;

      case 2: printf("          30°         45°         60°   \n\n");
              printf(" SEN      1/2       sqrt(2)/2    sqrt(3)/2\n");
              printf(" COS   sqrt(3)/2    sqrt(2)/2       1/2\n");
              printf(" TAN   sqrt(3)/3        1         sqrt(3)\n");
              break;

      case 3: printf("%f",seno(angulo,catetoOposto,hipotenusa));
              printf("%f",converteAnguloSeno(angulo));
              break;

      case 4:
              break;

      case 5: break;

      case 6: pitagoras();
              break;

      case 7: return;


    }
    printf("\n----------------------------------------------------------------------------------------------------------------\n\n");
    printf("Deseja escolher de novo? 1 para sim e 2 para nao: ");
    scanf("%d",&escolha2);


}while(escolha2 == 1);

}

void pitagoras()
{
    int a,b,c,a2,b2,c2,a3,b3,c3;
    char s;

  printf("\nDeseja achar a, b ou c? ");
    scanf("%s",&s);
    if(s == 'a');
   {
      printf("\nEntre com B: ");
       scanf("%d",&b);
      printf("Entre com C: ");
       scanf("%d",&c);
     b2 = pow(b,2);
     c2 = pow(c,2);
     a2 = b2 + c2;
     a3 = sqrt(a2);
       printf("\nA e igual a: %d", a3);
       return;

   }
    if(s == 'b');
   {
      printf("Entre com A: ");
       scanf("%d",&a);
      printf("Entre com C: ");
       scanf("%d",&c);
     a2 = pow(a,2);
     c2 = pow(c,2);
     b2 = a2 - c2;
     b3 = sqrt(b2);
       printf("B e igual a: %d", b3);
       return;

   }
   if(s == 'c');
   {
      printf("Entre com A: ");
       scanf("%d",&a);
      printf("Entre com B: ");
       scanf("%d",&b);
     a2 = pow(a,2);
     b2 = pow(c,2);
     c2 = a2 - b2;
     c3 = sqrt(c2);
       printf("C e igual a: %d", c3);
       return;
   }
}

float seno (int angulo, int catetoOposto, int hipotenusa) {
float mult,valorAngulo = converteAnguloSeno(angulo);



printf("\n entre com o cateto oposto:");
scanf("%d",&catetoOposto);

printf("\n entre com a hipotenusa: ");
scanf("%d",&hipotenusa);


/* Quando o cateto oposto tiver um valor inválido ele sera o nosso X */
if (catetoOposto <= 0) {

mult = valorAngulo * hipotenusa;
return mult;
} else {
return catetoOposto / valorAngulo;
}
}

float converteAnguloSeno (int angulo) {

printf("\n Qual o valor do seu angulo(30,45,60)?");
scanf("%d",&angulo);
switch (angulo) {

case 30:
return 1/2;
break;

case 45:
return  sqrt(2) / 2;
break;

case 60:
return sqrt(3) / 2;
break;

}
}


void bhaskara(){

int a,b,c;
float delta,x1,x2, d2, tmp;

printf("                Formula de Bhaskara\n\nInsira A: ");
scanf("%d",&a);

printf("Insira B: ");
scanf("%d",&b);

printf("Insira C: ");
scanf("%d",&c);

delta = pow(b,2) + (-4 * a * c);

d2 = sqrt(delta);
printf("\nd2 = %.2f\n",d2);

x1 = ((-b + d2) / (2 * a));
x2 = ((-b - d2) / (2 * a));

printf("Delta = %.2f",delta);
printf("\nX1 = %.2f",x1);
printf("\nX2 = %.2f",x2);

}
