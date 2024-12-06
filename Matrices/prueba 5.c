#include <stdio.h>
#include <stdlib.h>
/*int aleatorio_en_rango(int m,int r) {
    return r + rand() % m;
}*/

void main(){
int n,i,j;
printf("Ingresa el rango (maximo 10);\n");
scanf("%d",&n);
int a[n][n];
for(i=0;i<n;i++){
        for(j=0;j<n;j++){
         printf("Ingresa elemento [%d][%d];\n",i,j);
         scanf("%d",&a[i][j]);
        }
}
int t=0;
printf("\n\nEl arreglo original:\n\n");
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("[%d] ",a[i][j]);
    }
     printf("\n");
}
printf("\n\n");
for(i=0;i<n;i++){
        for(j=0;j<n;j++){
          int r1= rand()%n ;
          int r2= rand()%n ;
          t=a[i][j];
          a[i][j]=a[r1][r2];
          a[r1][r2]=t;
        }

}
printf("\n\nEl arreglo mezclado:\n\n");
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("[%d] ",a[i][j]);
    }
    printf("\n");
}
}
