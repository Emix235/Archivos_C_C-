#include <stdio.h>
// Programa que agrega un elemento a un arreglo ya hecho.
void main(){
int n=0,i;
int ec,ep;
  printf("Ingrese la cantidad de elementos (maximo 30):\n");
  scanf("%d",&n);
  int a[n+1],c[n+2];
  if(n>30){
    while(n>30){
    printf("Deben ser menos de 30 (hasta 30 se puede), intentelo de nuevo.\n");
    printf("Ingrese la cantidad de elementos n:\n");
    scanf("%d",&n);
    int a[n+1],c[n+2];
    }
  }else{
      int a[n+1],c[n+2];
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
printf("Ahora escribe, el valor a agregar en el arreglo A; \n");
scanf("%d",&ec);
printf("¿En que posicion quieres ponerlo ?\n");
scanf("%d",&ep);
for(i=0;i<n;i++){
    if(i>=ep){
     c[i+1]=a[i];
    }else{
     c[i]=0;
    }
}
for(i=0;i<n+1;i++){
    if(i==ep){
        a[i]=ec;
    }
    if(i>ep){
       a[i]=c[i];
    }
}
printf("\n\n");
printf("Ahora el arreglo tiene un elemento mas que luce asi:\n");
for(i=0;i<n+1;i++){
    printf("%d  ",a[i]);
}
}
