#include <stdio.h>
void main(){
int t;
printf("Ingresa el rango de m;\n");
scanf("%d",&t);
int m[t][t],n=0;
for(int i=0;i<t;i++){
    for(int j=0;j<t;j++){
            n++;
        m[i][j]=n;
    }
}
printf("\nMatriz original\n");
for(int i=0;i<t;i++){
    for(int j=0;j<t;j++)
        printf(" %d ",m[i][j]);
    printf("\n");
}
int m1[t][t];
for(int i=0;i<t;i++){
    for(int j=0;j<t;j++){
        m1[i][j]=m[t-i-1][t-j-1];
    }
}
printf("\nMatriz invertida\n");
for(int i=0;i<t;i++){
    for(int j=0;j<t;j++)
        printf(" %d ",m1[i][j]);
    printf("\n");
}
printf("\nMatriz tipo z\n");
int m2[t][t],a=1,i=0,j=0,d=0;
int k=0,l=0;
while(a<=t*t){
    if(d==0){
        m2[i][j]=m[k][l];
        j++;
        a++;
        l++;
        if(j==t-1){
            m2[i][j]=m[k][l];
            i++;
            d=1;
            l=0;
            k++;
        }
    }else{
    if(d==1){
       m2[i][j]=m[k][l];
       j--;
       a++;
       l++;
       if(j==0){
        m2[i][j]=m[k][l];
        i++;
        d=0;
        l=0;
        k++;
       }
    }
    }
}
for(int i=0;i<t;i++){
    for(int j=0;j<t;j++)
        printf(" %d ",m2[i][j]);
    printf("\n");
}

}
