#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main(){
    int escolha2,escolha;
    int angulo,catetoOposto,hipotenusa;
    setlocale(LC_ALL, "Portuguese");

    do{

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

      case 3: seno();
              break;

      case 4: cosseno();
              break;

      case 5: tangente();
              break;

      case 6: pitagoras();
              break;

      case 7: return;


    }
    printf("\n----------------------------------------------------------------------------------------------------------------\n\n");
    printf("Deseja escolher de novo? 1 para sim e 2 para nao: ");
    scanf("%d",&escolha2);


}while(escolha2 == 1);

}

void pitagoras(){
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

void cosseno(){

int y,an,h;
float ca,ang;

printf("1 - Cateto Adjacente\n2 - Hipotenusa\n\nDeseja encontrar? ");
scanf("%d",&y);

switch(y){

case 1: printf("\nValor da hipotenusa: ");
        scanf("%d",&h);
        printf("Valor do angulo 30, 45 ou 60? ");
        scanf("%d",&an);

        if(an == 30)
        {
            ang = (sqrt(3))/2;
            ca = ang * h;
            printf("\nCateto adjacente: %f\n",ca);
        }
        if(an == 45)
        {
            ang = (sqrt(2))/2;
            ca = ang * h;
            printf("\nCateto adjacente: %f\n",ca);
        }
        if(an == 60)
        {
            ang = 1/2;
            ca = ang * h;
            printf("\nCateto adjacente: %f\n",ca);
        }
        break;

case 2: printf("Valor do Cateto Adjacente: ");
        scanf("%d",&ca);
        printf("Valor do angulo 30, 45 ou 60? ");
        scanf("%d",&an);

        if(an == 30)
        {
            ang = (sqrt(3))/2;
            h = ca / ang;
            printf("\nHipotenusa: %f\n",h);
        }
        if(an == 45)
        {
            ang = (sqrt(2))/2;
            h = ca / ang;
            printf("\nHipotenusa: %f\n",h);
        }
        if(an == 60)
        {
            ang = 1/2;
            h = ca / ang;
            printf("\nHipotenusa: %f\n",h);
        }
        break;

}

}

void seno(){

int h,an,y,co;
float ang;

printf("1 - Cateto Oposto\n2 - Hipotenusa\n\nDeseja encontrar? ");
scanf("%d",&y);

switch(y){

case 1: printf("Valor da hipotenusa: ");
        scanf("%d",&h);
        printf("Valor do angulo 30,45 ou 60? ");
        scanf("%d",&an);

        if(an == 30)
        {
            ang = (1/2);
            co = h * ang;
            printf("Cateto Oposto: %f",co);
        }
        if(an == 45)
        {
            ang = ((sqrt(2))/2);
            co = h * ang;
            printf("Cateto Oposto: %d",co);
        }
        if(an == 60)
        {
            ang = (sqrt(3))/2;
            co = h * ang;
            printf("Cateto Oposto: %f",co);
        }
        break;

case 2: printf("\nValor do Cateto Oposto: ");
        scanf("%d",&co);
        printf("Valor do angulo 30,45 ou 60? ");
        scanf("%d",&an);

        if(an == 30)
        {
            ang = 1/2;
            h = co / ang;
            printf("\nCateto Oposto: %f",co);
        }
        if(an == 45)
        {
            ang = (sqrt(2))/2;
            h = co / ang;
            printf("\nCateto Oposto: %f",co);
        }
        if(an == 60)
        {
            ang = (sqrt(3))/2;
            h = co / ang;
            printf("\nCateto Oposto: %f",co);
        }


}



}

void tangente(){

int y,ca,an;
float co,ang;

printf("1 - Cateto Oposto\n2 - Cateto Adjacente\n\nDeseja encontrar? ");
scanf("%d",&y);

switch(y){

case 1: printf("\nValor do Cateto Adjacente: ");
        scanf("%d",&ca);
        printf("Valor do angulo 30, 45 ou 60? ");
        scanf("%d",&an);

        if(an == 30)
        {
            ang = (sqrt(3))/3;
            co = ang * ca;
            printf("\nCateto Oposto: %f\n",co);
        }
        if(an == 45)
        {
            ang = 1;
            co = ang * ca;
            printf("\nCateto Oposto: %f\n",co);
        }
        if(an == 60)
        {
            ang = (sqrt(3));
            co = ang * ca;
            printf("\nCateto adjacente: %f\n",co);
        }
        break;

case 2: printf("Valor do Cateto Oposto: ");
        scanf("%d",&co);
        printf("Valor do angulo 30, 45 ou 60? ");
        scanf("%d",&an);

        if(an == 30)
        {
            ang = (sqrt(3))/3;
            ca = co / ang;
            printf("\nCateto Adjacente: %f\n",ca);
        }
        if(an == 45)
        {
            ang = 1;
            ca = co / ang;
            printf("\nCateto Adjacente: %f\n",ca);
        }
        if(an == 60)
        {
            ang = (sqrt(3));
            ca = co /ang;
            printf("\nCateto Adjacente: %f\n",ca);
        }
        break;

}




}
