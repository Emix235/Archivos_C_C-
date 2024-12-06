#include <stdio.h>
#include <math.h>
void main(){
int i,j,a[10],b[10],x=25,n,c=0;
/*printf("Ingresa el tamaño de la vertiz;\n");
scanf("%d",&n);*/
printf("\n");
for(i=0;i<10;i++){
    a[i]=rand()%11;
    if(a[i]==a[i-1]){
      while(a[i]==a[i-1]){
        a[i]=rand()%11;
      }
    }
}
for(i=0;i<10;i++){
    printf("%d\n",a[i]);
}

for(i=0;i<10;i++){
  for(j=0;j<10;j++){
    if(i!=a[j]){
    b[c]=i;
    c++;
    }
    }
}
printf("Los numeros que no aparecen son;\n");
for(i=0;i<c;i++){
    printf("[%d]  \n",b[i]);
}
x=sqrt(x);
printf("Raiz=%d",x);
}

