#include <stdio.h>
void main(){
    int f,c,n=1;
printf("Ingresa la cantidad de filas:\n");
scanf("%d",&f);
printf("Ingresa la cantidad de columnas:\n");
scanf("%d",&c);
int m[f][c],i=0,j=0;
while(n<=f*c){
 m[i][j]=n;
    n++;
    if(i==f-1){
        i=0;
        j++;
    }else{
    i++;
    }
}
printf("\nMatriz Horizontal.\n");
for(int i=0;i<f;i++){
    for(int j=0;j<c;j++)
    printf("%d ",m[i][j]);
    printf("\n");
}
}
