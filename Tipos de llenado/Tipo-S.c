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
int d=0,i=0,j=0,n=1;
while(n<=f*c){
    switch(d){
    case 0:m[i][j]=n;
    n++;
    if(j==c-1){
        d=1;
        i++;
    }else{
    j++;
    };
    break;
    case 1:m[i][j]=n;
    n++;
    if(j==0){
        d=0;
        i++;
    }else{
    j--;
    };
    break;
    }
}
for(int i=0;i<f;i++){
    for(int j=0;j<c;j++)
    printf("%d ",m[i][j]);
    printf("\n");
}
}
