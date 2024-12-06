#include  <stdio.h>
void main(){
 int n;
 printf("Ingresa el tama�o de la matriz:\n");
 scanf("%d",&n);
 int a[n][n],ares[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
     printf("Digita pocision [%d][%d]:\n",i,j);
        scanf("%d",&a[i][j]);
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
     ares[i][j]=-1*a[i][j];
      for(int y=0;y<n;y++)
            ares[i][j]+=(a[i][y]+a[y][j]);
    }
}
printf("\nLa matriz sumada\n");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
        printf("%d ",ares[i][j]);
    printf("\n");
}
}
