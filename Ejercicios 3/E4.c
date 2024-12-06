#include <stdio.h>
void main(){
int fact=1,i,n; //variable
printf("Numero de factorial:\n");
scanf("%d",&n);
//estructura repetitiva
for(i=1;i<=n;i++){
    fact *=i;// fact=fact*i;
} //Fin del ciclo
printf("El factorial de %d es %d",n,fact);
}// fin del programa
