#include <stdio.h>
int suma(); // prototipo
int mult();
int main(){
int opc;
printf("1. Suma\n2.Multiplicacion:\n");
scanf("%d",&opc);
switch(opc){
case 1:printf("El resultado de la suma es:  %d",suma());
break;
case 2:multi();
break;
default:printf("El numero esta fuera de rango.\n2");
}
return 0;
}
int suma(){
   int num1,num2,res;
   printf("Escribe dos valores:\n");
   scanf("%d %d",&num1,&num2);
   res=num1+num2;
   return(res);
}
int multi(){
int num1,num2,res;
printf("Escribe dos valores:\n");
scanf(" %d %d",&num1,&num2);
res=num1*num2;
printf("El resultado de la multiplicacion es: %d \n",res);
}
