#include <stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100],d[100],i,j,n,f[100][100];
    printf("Ingresa el tamaño de la matriz cuadratica; \n");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Digita el valor de la posicion; [%d][%d] \n", i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c[i]=a[i][j]+c[i];
            d[j]=a[i][j]+d[j];
            f[i][j]=a[i][j]+f[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            b[i][j]=b[i][j]+c[i];
            b[i][j]=b[i][j]+d[j];
            b[i][j]=b[i][j]-f[i][j];
        }
    }

    printf("La matriz original es esta; \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("La matriz sumada se presenta ahora; \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
