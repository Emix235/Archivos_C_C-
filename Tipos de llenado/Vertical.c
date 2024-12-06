#include <stdio.h>
void main(){
    int f,c,d=1;
printf("Ingresa la cantidad de filas:\n");
scanf("%d",&f);
printf("Ingresa la cantidad de columnas:\n");
scanf("%d",&c);
int m[f][c];
for(int i=0;i<f;i++){
    for(int j=0;j<c;j++){
        m[i][j]=d;
        d++;
    }
}
printf("\nMatriz Vertical.\n");
for(int i=0;i<f;i++){
    for(int j=0;j<c;j++)
    printf("%d ",m[i][j]);
    printf("\n");
}
}
