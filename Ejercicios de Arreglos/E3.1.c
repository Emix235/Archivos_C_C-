#include <stdio.h>
void main(){
float c[30],p,s,pm[7],pg=0;
int i,op,av=0,a=0;
printf("Para calcular el promedio general, se guarda segun las calificaciones de cada, materia:\n");
printf("1. Fundamentos de Programacion.\n");
for(i=0;i<3;i++){
    a++;
   printf("Ingresa el calificacion del parcial %d;\n",a);
   scanf("%f",&c[i]);
   s=c[i]+s;
}
p=s/3;
for(i=0;i<=3;i++){
    if(i==3){
        c[i]=p;
        pm[av]=p;
        av++;
        s=0;
        a=0;
    }
}
printf("\n");
printf("2. Introduccion a la Ingenieria.\n");
for(i=4;i<7;i++){
        a++;
   printf("Ingresa la calificacion del parcial %d;\n",a);
   scanf("%f",&c[i]);
   s=c[i]+s;
}
p=s/3;
for(i=4;i<=7;i++){
    if(i==7){
        c[i]=p;
        pm[av]=p;
        av++;
        s=0;
        a=0;
    }
}
printf("\n");
printf("3. Comprension Auditiva.\n");
for(i=8;i<11;i++){
    a++;
   printf("Ingresa la calificacion del parcial %d;\n",a);
   scanf("%f",&c[i]);
   s=c[i]+s;
}
p=s/3;
for(i=8;i<=11;i++){
    if(i==11){
        c[i]=p;
        pm[av]=p;
        av++;
        s=0;
        a=0;
    }
}
printf("\n");
printf("4. Fisica.\n");
for(i=12;i<15;i++){
    a++;
   printf("Ingresa la calificacion del parcial %d;\n",a);
   scanf("%f",&c[i]);
   s=c[i]+s;
}
p=s/3;
for(i=12;i<=15;i++){
    if(i==15){
        c[i]=p;
        pm[av]=p;
        av++;
        s=0;
        a=0;
    }
}
printf("\n");
printf("5. Calculo Diferencial e Integral.\n");
for(i=16;i<19;i++){
    a++;
   printf("Ingresa la calificacion del parcial %d;\n",a);
   scanf("%f",&c[i]);
   s=c[i]+s;
}
p=s/3;
for(i=16;i<=19;i++){
    if(i==19){
        c[i]=p;
        pm[av]=p;
        av++;
        s=0;
        a=0;
    }
}
printf("\n");
printf("6. Tecnologias de la Informacion y Comunicaciones.\n");
for(i=20;i<23;i++){
    a++;
   printf("Ingresa la calificacion del parcial %d;\n",a);
   scanf("%f",&c[i]);
   s=c[i]+s;
}
p=s/3;
for(i=20;i<=23;i++){
    if(i==23){
        c[i]=p;
        pm[av]=p;
        av++;
        s=0;
        a=0;
    }
}
printf("\n");
printf("7. Autorrealizacion.\n");
for(i=24;i<27;i++){
    a++;
   printf("Ingresa la calificacion del parcial %d;\n",a);
   scanf("%f",&c[i]);
   s=c[i]+s;
}
p=s/3;
for(i=24;i<=27;i++){
    if(i==27){
        c[i]=p;
        pm[av]=p;
        av++;
        s=0;
        a=0;
    }
}
av=0;
printf("\n");
printf("Se presentan las calificaciones y los promedios de cada materia.\n");
printf("Y al final de las 3 el promedio de cada materia:\n");
for(i=0;i<=27;i++){
    if(c[i]==pm[av]){
       printf("%.3f PROMEDIO.\n",c[i]);
       s=pm[av]+s;
       av++;
    }else{
       printf("%.1f \n",c[i]);
    }
}
pg=0;
pg=s/7;
printf("%.3f PROMEDIO GENERAL.\n",pg);
}
