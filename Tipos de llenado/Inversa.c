#include <stdio.h>
void main(){
int f,c;
printf("Ingresa la cantidad de filas:\n");
scanf("%d",&f);
printf("Ingresa la cantidad de columnas:\n");
scanf("%d",&c);
int m[f][c];
/*for(int i=0;i<f;i++){
    for(int j=0;j<c;j++){
        m[i][j]=d;
        d++;
    }
}*/
int d=0,i=0,j=0,n=f*c;
while(n!=0){
    m[i][j]=n;
    n--;
    if(j==c-1){
        j=0;
        i++;
    }else{
    j++;
    }
}

for(int i=0;i<f;i++){
    for(int j=0;j<c;j++)
    printf("%d ",m[i][j]);
    printf("\n");
}
}
