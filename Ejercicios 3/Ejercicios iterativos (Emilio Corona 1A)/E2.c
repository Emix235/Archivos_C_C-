#include <stdio.h>
//Programa que calcule la sumatoriade todos los numeros entre 1 y 15
void main(){
int i,n=0;
for(i=1;i<=15;i++){
    n=n+i;
        printf("%d: %d\n",i,n);
}
printf("\n\n");
printf("La suma de los numeros del 1 al 15 es: %d\n",n);
}
