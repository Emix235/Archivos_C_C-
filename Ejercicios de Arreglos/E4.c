#include <stdio.h>
//Programa que calcula el cuadrado de X elementos de un arreglo.
void main(){
int i,n;
printf("Ingresa la cantidad de elementos del vector a:\n");
scanf("%d",&n);
int a[n],b[n];
for(i=0;i<n;i++){
  printf("Ingresa el elemento a[%d]:\n",i);
  scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
   b[i]=a[i]*a[i];
}
printf("El vector A:\n\n");
for(i=0;i<n;i++){
   printf("%d  ",a[i]);
}
printf("\n\n");
printf("El vector B,con el cuadrado de cada uno de los elementos de A:\n\n");
for(i=0;i<n;i++){
   b[i]=a[i]*a[i];
   printf("%d  ",b[i]);
}
printf("\n\n");
}
