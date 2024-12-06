#include <stdio.h>
//Programa que agrega un cero, al principio, a un arreglo ya hecho.
void main(){
int n=0,i;
  printf("Ingrese la cantidad de elementos (maximo 30):\n");
  scanf("%d",&n);
  int a[n],b[n+1];
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
for(i=0;i<n+1;i++){
    b[i+1]=a[i];
    if(i==0){
       b[i]=0;
    }
}
printf("El vector A:\n");
for(i=0;i<n;i++){
    printf("%d  ",a[i]);
}
printf("\n\n");
printf("El vector B con los elemento recorridos un espacio hacia la derecha:\n");
for(i=0;i<n+1;i++){
    printf("%d  ",b[i]);
}
}
