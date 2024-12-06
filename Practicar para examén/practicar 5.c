#include <stdio.h>
void main(){
int a[5],b[5],c[5];
printf("Arreglo orden ascendente.\n");
for(int i=0;i<5;i++){
        printf("Elemento [%d];\n",i);
        scanf("%d",&a[i]);
        //b[i]=a[i];
        c[i]=a[i];

}
int aux=0;
printf("\nArreglo normal.\n");
for(int i=0;i<5;i++){
    printf(" %d ",a[i]);
}
for(int i=0;i<5;i++){
    aux=c[i];
    for(int j=0;j<5;j++){
    if(c[j]>aux){
        aux=c[j];
    }
    }
    b[i]=aux;
    for(int x=0;x<5;x++){
        if(aux==c[x]){
            c[x]=0;
            aux=0;
        }
    }
}
/*
for(int i=0;i<5;i++){
    if(a[i]>a[i+1]){
       aux=a[i+1];
       a[i+1]=a[i];
       a[i]=aux;
    }
}*/
printf("\nArreglo orden ascendente.\n");
for(int i=0;i<5;i++){
    printf(" %d ",b[i]);
}
}
