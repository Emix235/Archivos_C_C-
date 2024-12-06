#include <stdio.h>
#include <stdlib.h>
void main(){
int g,i,j;
int m,n;
printf("Ingresa el largo de la matriz A y B (maximo 10);\n");
scanf("%d",&m);
printf("Y el ancho de la matriz A y B (maximo 10);\n");
scanf("%d",&n);
g=m*n;
int a[m][n],b[m][n],d[m][n];
if(g>100){
    while(g>100){
        printf("Hay mas de %d x %d datos, solo se permiten 10, ingresa de nuevo:\n",g,g);
        printf("Ingresa el largo de la matriz A y B (maximo 10);\n");
        scanf("%d",&m);
        printf("Y el ancho de la matriz A y B (maximo 10);\n");
        scanf("%d",&n);
        g=m*n;
        int a[m][n],b[m][n],d[m][n];
    }
}else{
    int a[m][n],b[m][n],d[m][n];
}
for(i=0;i<m;i++){
        for(j=0;j<n;j++){
         printf("Ingresa elemento A[%d][%d];\n",i,j);
         scanf("%d",&a[i][j]);
        }
}
for(i=0;i<m;i++){
        for(j=0;j<n;j++){
         printf("Ingresa elemento B[%d][%d];\n",i,j);
         scanf("%d",&b[i][j]);
        }
}
int t=0;
printf("\n\nEl arreglo A,original:\n\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("[%d] ",a[i][j]);
    }
     printf("\n");
}
 printf("\n");
printf("\n\nY el arreglo B:\n\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("[%d] ",b[i][j]);
    }
     printf("\n");
}
int r1=0,r2=0;
for(i=0;i<m;i++){
        for(j=0;j<n;j++){
          r1= rand()%m ;
          r2= rand()%n ;
          t=a[i][j];
          a[i][j]=a[r1][r2];
          a[r1][r2]=t;
        }
}
for(i=0;i<m;i++){
        for(j=0;j<n;j++){
          r1= rand()%m ;
          r2= rand()%n ;
          t=b[i][j];
          b[i][j]=b[r1][r2];
          b[r1][r2]=t;
        }
}
printf("\n\nEl arreglo A, mezclado:\n\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("[%d] ",a[i][j]);
    }
    printf("\n");
}
printf("\n\nY el arreglo B, mezclado:\n\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("[%d] ",b[i][j]);
    }
    printf("\n");
}
printf("\n\nEl arreglo D, es la suma de A y B mezclado:\n\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        d[i][j]=a[i][j]+b[i][j];
        printf("[%d] ",d[i][j]);
    }
    printf("\n");
}
}
