#include <stdio.h>
void main(){
    int t,f,c;
    printf("Ingresa el rango de las filas;\n");
    scanf("%d",&f);
    printf("Ingresa el rango de las columnas;\n");
    scanf("%d",&c);
    t=f*c;
    int m[f][c],a[t],b[t];
    int n=1;
    for(int i=0;i<f;i++){
        a[i]=0;
        for(int j=0;j<c;j++){
         b[j]=0;
         m[i][j]=n;
         a[i]=m[i][j]+a[i];
         n++;
        }
    }
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
         b[j]=m[i][j]+b[j];
        }
    }

    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++)
            printf("%d ",m[i][j]);
            printf("\n");
    }
    printf("\nLa suma de cada fila.\n");
    for(int i=0;i<f;i++){
            printf("%d ",a[i]);
    }
    printf("\nY la suma de cada columna.\n");
    for(int i=0;i<c;i++){
            printf("%d ",b[i]);
    }
}
