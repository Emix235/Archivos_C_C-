#include <stdio.h>
// Programa que cambia de lugar de izquierda a derecha un valor.
void main(){
int n=0,i;
int ec,ep,p;
  printf("Ingrese la cantidad de elementos (maximo 30):\n");
  scanf("%d",&n);
  int a[n],b[n+1],c[n];
  if(n>30){
    while(n>30){
    printf("Deben ser menos de 30 (hasta 30 se puede), intentelo de nuevo.\n");
    printf("Ingrese la cantidad de elementos n:\n");
    scanf("%d",&n);
    int a[n];
    int b[n+1];
    }
  }else{
      int a[n];
      int b[n+1];
  }
for(i=0;i<n;i++){
    printf("Ingrese el elemento a[%d]:\n",i);
    scanf("%d",&a[i]);
}
printf("El vector A:\n");
for(i=0;i<n;i++){
    printf("%d  ",a[i]);
}
printf("\n\n");
printf("Pocisiones del vector A:\n");
for(i=0;i<n;i++){
    printf("%d  ",i);
}
printf("\n\n");
printf("Ahora elige, de uno de los elementos de A,\n");
printf("¿Cual quieres cambiar de posicion?\n");
scanf("%d",&ec);
printf("¿En que posicion (debe ser de izquierda a la derecha)?\n");
scanf("%d",&ep);
for(i=0;i<n;i++){
    if(a[i]==ec){
            ec=a[i];
        while(i!=ep){
         a[i]=a[i+1];
         a[i+1]=ec;
         i++;
        }
    }
}
printf("\n\n");
printf("Ahora el elemento %d, tiene posicion en i a[%d]:\n",ec,ep);
for(i=0;i<n;i++){
    printf("%d  ",a[i]);
}
}
