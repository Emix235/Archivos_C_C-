#include <stdio.h>
void main(){
int t;
printf("Digita las filas/columnas de la matriz A y B (maximo 10):\n");
scanf("%d",&t);
int ma[t][t],mb[t][t],mc[t][t];
for(int i=0;i<t;i++){
    for(int j=0;j<t;j++){
        printf("Elemento de A[%d][%d];\n",i,j);
        scanf("%d",&ma[i][j]);
    }
}
for(int i=0;i<t;i++){
    for(int j=0;j<t;j++){
        printf("Elemento de B[%d][%d];\n",i,j);
        scanf("%d",&mb[i][j]);
    }
}
/*
for(int i=0;i<t;i++){
    for(int j=0;j<t;j++)
        mc[i][j]=ma[i][j]*mb[i][j];
}*/
int a=0,y;
for(int i=0;i<t;i++){
 for(int j=0;j<t;j++){
    for(int x=0;x<t;x++){
        y=(ma[i][x]*mb[x][j]);
        a=y+a;
    }
    mc[i][j]=a;
    a=0;
 }
}

printf("\nLa matriz a:\n");
for(int i=0;i<t;i++){
    for(int j=0;j<t;j++)
        printf("%d ",ma[i][j]);
        printf("\n");
}
printf("\nLa matriz b:\n");
for(int i=0;i<t;i++){
    for(int j=0;j<t;j++)
        printf("%d ",mb[i][j]);
        printf("\n");
}
printf("\nLa multiplicaci�n de ambas (matriz c):\n");
for(int i=0;i<t;i++){
    for(int j=0;j<t;j++)
        printf("%d ",mc[i][j]);
        printf("\n");
}
}
