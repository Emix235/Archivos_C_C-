
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
 int n,i,j=0;
 float vector[15],num,suma,promedio, sigma,desv_standar;
 num=0,suma=0,promedio=0,sigma=0,desv_standar=0;i=0;
  for( ; ;j++){
    printf("INTRODUZCA CANTIDAD DE NUMEROS *MAXIMO 15*: \n");
    scanf("%d",&n);
 if (n>15){
 clrscr();
   printf("Menor que 15!!!\n");

   getch();
   clrscr();
   }else{
    while(i<n){
    printf("\nINGRESE DATOS [%d]",i+1);
    scanf("%f",&num);
    vector[i]=num;
    i++;
    }
   i=0;
   while(i<n){
  suma=suma+vector[i];
   i++;
  }
 promedio=suma/n;
  i=0;
 while(i<n){
 sigma=sigma+((vector[i]-promedio)*(vector[i]-promedio));
 i++;
 }
 desv_standar=sqrt(sigma/(n-1));
 printf("\n\n\nLa desviacion estandar es: %.2f\n\n\n",desv_standar);
break;
}
}
}
