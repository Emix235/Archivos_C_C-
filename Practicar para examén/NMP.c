#include <stdio.h>
void main(){
int pm,n,d;
int ep,c=0;
printf("Digite la cantidad de primos a mostrar:\n");
scanf("%d",&pm);
n=2;
while(pm>0){

    for(d=2;d<n;d++){
     if(n%d==0){
        c++;
     }
    }
    if(c<1){
        printf(" %d ",n);
        pm--;
    }
n++;
c=0;
}
}
