#include <stdio.h>
#include <math.h>
float hipo();
float area();
float angulo();
void main(){
int opc,res;
do{
printf("1. Hipotenusa\n2.Area\n3.Angulo\n");
scanf("%d",&opc);
switch(opc){
case 1:hipo();
break;
case 2:area();
break;
case 3:angulo();
break;
default:printf("Opcion no valida.\n");
}
printf("\nQuieres otra opcion (1/0):\n");
scanf("%d",&res);
}while(res==1);
}
float hipo(){
float co,ca,h;
printf("Escribe el valor de los catetos:\n");
scanf("%f %f",&co,&ca);
h=sqrt(pow(co,2)+pow(ca,2));
printf("La hipotenusa es:%.2f \n",h);
}
float area(){
 float b,a,area;
 printf("Escribe el valor de la base y la altura:\n");
 scanf("%f %f",&b,&a);
 while((b<=0)||(a<=0)){
 printf("Escribe valores validos:\n");
 scanf("%f %f",&b,&a);
 }
 area=(b*a)/2;
 printf("El area del triangulo es de:%.2f",area);
}
float angulo(){
float a1,a2,a3;
printf("Escribe el valor de angulo 1 y 2;\n");
scanf("%f %f",&a1,&a2);
if((a1<1)&&(a1>178)&&(a2<1)&&(a2>178)){
while((a1>=1)&&(a1<=178)){
while((a2>=1)&&(a2<=178)){
          printf("Valores invalidos!!.\n");
          printf("Escribe el valor de angulo 1 y 2;\n");
          scanf("%f %f",&a1,&a2);
}
}
}
a3=180-(a1+a2);
if(a3==0){
printf("Valores no permitidos!!\n");
}else{
printf("El angulo del tercer angulo, es: %.2f",a3);
}
}
