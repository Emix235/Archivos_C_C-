#include <stdio.h>
#include <stdlib.h>
/*int aleatorio_en_rango(int m,int r) {
    return r + rand() % m;
}*/

void main(){
int n,i;
printf("Ingresa el rango (maximo 10);\n");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
    printf("Ingresa elemento [%d];\n",i);
    scanf("%d",&a[i]);
}
int t=0,l;
printf("\n\nEl arreglo original:\n\n");
for(i=0;i<n;i++)printf("[%d] ",a[i]);
printf("\n\n");
for(i=0;i<n;i++){
    //l = aleatorio_en_rango(n,0);
    int r= rand()%n ;
    t=a[i];
    a[i]=a[r];
    a[r]=t;

}
printf("\n\nEl arreglo mezclado:\n\n");
for(i=0;i<n;i++)printf("[%d] ",a[i]);
}
