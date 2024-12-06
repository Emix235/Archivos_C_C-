#include <stdio.h>
void main(){
float c[20],p,s;
int i,op;
printf("Para calcular el promedio, se debe saber de que materia:\n");
printf("1. Fundamentos de Programacion.\n");
printf("2. Introduccion a la Ingenieria.\n");
printf("3. Comprension Auditiva.\n");
printf("4. Fisica.\n");
printf("5. Calculo Diferencial e Integral.\n");
printf("\n");
scanf("%d",&op);
for(i=0;i<3;i++){
   printf("Ingresa la calificacion del parcial %d;\n",i+1);
   scanf("%f",&c[i]);
   s=c[i]+s;
}
p=s/3;
for(i=0;i<=3;i++){
    if(i==3){
        c[i]=p;
    }
}
switch(op){
  case 1: printf("Las calificaciones de Fundamentos, en orden y el promedio hasta el final:\n");
  break;
  case 2: printf("Las calificaciones de Introduccion a Ingenieria, en orden y el promedio al final:\n");
  break;
  case 3: printf("Las calificaciones de Comprension Auditiva, en orden y el promedio hasta el final:\n");
  break;
  case 4: printf("Las calificaciones de Fisica, en orden y el promedio al final:\n");
  break;
  case 5:  printf("Las calificaciones de Calculo, en orden y el promedio hasta el final:\n");
  break;
}
printf("\n\n");
  for(i=0;i<=3;i++){
    printf("%.1f, ",c[i]);
  }

}
