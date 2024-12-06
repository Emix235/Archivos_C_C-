#include <stdio.h>
#include <math.h>
void main(){
int n,i,j;
int f,c;
printf("Ingresa el tamaño de la matriz (maximo 20):\n");
printf("Largo de la matriz (f):\n");
scanf("%d",&f);
printf("Ancho de la matriz (c):\n");
scanf("%d",&c);
n=f*c;
int a[f][c];
float b[f][c];
if(n>400){
    while(n>400){
         printf("Maximo 20 x 20, no se permiten mas.Escriba de nuevo.\n");
         printf("Largo de la matriz (f):\n");
         scanf("%d",&f);
         printf("Ancho de la matriz (c):\n");
         scanf("%d",&c);
         int a[f][c];
         float b[f][c];
         n=f*c;
    }
}else{
int a[f][c];
float b[f][c];
}

for(i=0;i<f;i++){
    for(j=0;j<c;j++){
       printf("Array A[%d][%d]:\n",i+1,j+1);
       scanf("%d",&a[i][j]);
    }
}
for(i=0;i<f;i++){
    for(j=0;j<c;j++){
       b[i][j]=sqrt(a[i][j]);
    }
}
printf("\n");
printf("La matriz original, abajo;\n");
for(i=0;i<f;i++){
    for(j=0;j<c;j++){
        printf("[%d] ",a[i][j]);
    }
    printf("\n");
}
printf("\n");
printf("Las raiz cuadrada de cada elemento de A, matriz B;\n");
for(i=0;i<f;i++){
    for(j=0;j<c;j++){
        printf("[%.2f] ",b[i][j]);
    }
    printf("\n");
}
}
