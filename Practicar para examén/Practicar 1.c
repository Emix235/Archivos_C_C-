#include <stdio.h>
void main(){
int t;
printf("Digite cuantos numeros primos ver:\n");
scanf("%d",&t);
int c=1,n=1;
while(t>0){
    for(int d=1;d<=n;d++){
        if(n%d==0){
           c++;
        }
    }
    if(c<=2 && n!=1){
       printf(" %d ",n);
       t--;
    }
    n++;
    c=0;
}
}
