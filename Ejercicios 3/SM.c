#include <stdio.h>


void main(){
int suma=0, resta=0, multi=1, i,n, num=0; //variables
printf("¿Cuantos valores?");
scanf("%d",&n);
for(i=0;i<n;i++){
   printf("Numero:\n");
   scanf("%d",&num);
   if(num>0){
       if(num%2==0){
        suma+=num; //suma= num+num;
       }else{
           resta-=num;
       }
    }else{
    if((num%2)==0){
        multi*=num;
    }
    }
}
printf("La suma de los pares positivos es:%d \n",suma);
printf("La resta de los impares positivos es:%d \n",resta);
printf("La multiplicacion de los pares negativos es: %d \n",multi);


}
