#include <stdio.h>
//Programa que escribe la inversa de una matriz en otra matriz.
void main(){
 int n=0,i;
  printf("Ingrese la cantidad de elementos (maximo 15):\n");
  scanf("%d",&n);
  int a[n],b[n];
  if(n>15){
    while(n>15){
    printf("Deben ser menos de 15, intentelo de nuevo.\n");
    printf("Ingrese la cantidad de elementos n:\n");
    scanf("%d",&n);
    int a[n];
    int b[n];
    }
  }else{
      int a[n];
      int b[n];
  }
  printf("\n\n");
  for(i=0;i<n;i++){
    printf("Ingresa el elemento [%d]:\n",i);
    scanf("%d",&a[i]);
  }
  printf("\n\n");
  for(i=0;i<n;i++){
        b[i]=a[n-i-1];
  }
  printf("El arreglo original:\n");
  printf("\n");
  for(i=0;i<n;i++){
    printf("%d  ",a[i]);
  }
  printf("\n\n");
  printf("El arreglo invertido:\n");
  printf("\n");
  for(i=0;i<n;i++){
    printf("%d  ",b[i]);
  }
}
