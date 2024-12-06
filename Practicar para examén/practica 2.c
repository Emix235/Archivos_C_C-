#include <stdio.h>
void main(){
int f,c;
printf("Digita las filas:\n");
scanf("%d",&f);
printf("Y digita las columnas:\n");
scanf("%d",&c);
int m[f][c],t;
t=f*c;
for(int i=0;i<f;i++){
    for(int j=0;j<c;j++){
        printf("Ingresa m[%d][%d];\n",i,j);
        scanf("%d",&m[i][j]);
    }
}
int n=0,p=0,p1,a[t],s=0,x;
for(int i=0;i<f;i++){
    for(int j=0;j<c;j++){
        n=m[i][j];
        for(x=2;x<n;x++){
            if(n%x==0){
               s++;
            }
        }
        if(s<1){
            a[p]=m[i][j];
            p++;
        }
        s=0;
    }
}
p1=p;
printf("La matriz normal:\n");
for(int i=0;i<f;i++){
    for(int j=0;j<c;j++)
        printf("%d ",m[i][j]);
    printf("\n");
}
printf("Un arreglo de los numeros primos:\n");
for(int j=0;j<p1;j++){
        printf(" %d ",a[j]);
}




}
