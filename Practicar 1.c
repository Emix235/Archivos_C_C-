#include <stdio.h>
void main(){
int pm,n,d,ep;
printf("Cuantos No. primos deseas mostrar:\n");
scanf("%d",&pm);
n=2;
while(pm>0){
    ep=1;
    for(d=2;d<n;++d){
        if(n%d==0){
            ep=0;
            break;
        }
        printf(" %d ",d);
    }
printf("\n");
    if(ep){
        printf("Es primo: %d ",n);
        pm--;
    }
    n++;
}
}
