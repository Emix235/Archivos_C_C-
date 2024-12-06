#include <stdio.h>
void main(){
int n,i;
printf("Escribe el numero del cual quieres ver su tabla de multiplicar: \n");
scanf("%d",&n);
printf("**************************\n");
for(i=1;i<=10;i++){
printf("** (%d * %d)=%d",n,i,i*n);
printf("          **\n");
}
printf("**************************\n");
}
