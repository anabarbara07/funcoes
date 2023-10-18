#include <stdio.h>

float seno (int angulo, int catetoOposto, int hipotenusa);
float converteAnguloSeno (int angulo);
void solicitaFormula(int *formula);



main(){
    int escolha2;

    do{

    int formula, angulo, valorRequerido, valorOposto,escolha;

    printf("\n        MENU\n\n");
    printf("1 - Bhaskara\n2 -Tabela dos Notaveis\n3 - Seno\n4 - Cosseno\n5 - Tangente\n6 - Pitagoras\n7 - Sair\n");
    printf("\nEscolha: ");
    scanf("%d",&escolha);

    switch(escolha)
    {
      case 1: bhaskara();
              break;

      case 2: printf("Tabela");
              break;


      case 4: cosseno();
              break;

      case 5: break;

      case 7: return;


    }

    printf("\n\nDeseja escolher de novo? 1 para sim e 2 para nao: ");
    scanf("%d",&escolha2);


}while(escolha2 == 1);

}

void cosseno()
{
    float ca,h,co;

    printf("\nCateto adjacente: ");
    scanf("%.2f",&ca);
    printf("\nHipotenusa: ");
    scanf("%.2f",&h);

    co = ca/h;
    printf("\nCosseno = %.2f",co);
}


float seno (int angulo, int catetoOposto, int hipotenusa) {
    float valorAngulo = converteAnguloSeno(angulo);
    /* Quando o cateto oposto tiver um valor inválido ele sera o nosso X */
    if (catetoOposto <= 0) {
        return valorAngulo * hipotenusa;
    } else {
        return catetoOposto / valorAngulo;
    }
}

float converteAnguloSeno (int angulo) {
    switch (angulo) {
        case 30: return 1/2;
        case 45: return sqrt(2) / 2;
        case 60: return sqrt(3) / 2;
        default: return -1;
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
