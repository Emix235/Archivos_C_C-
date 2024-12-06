#include <stdio.h>
#include <math.h>
//La desviación estandar de 5 elementos.
void main(){
int a[5],i;
float m,k,S;
float c=0.0,z=0.0,x=0.0;
printf("La desviacion estandar de 5 numeros: \n");
for(i=0;i<5;i++){
    printf("Ingresa el numero (%d);\n",i+1);
    scanf("%d",&a[i]);
    c=a[i]+c;
}
m=(float)c/5;
for(i=0;i<5;i++){
     x=a[i]-m;
    z=pow(x,2)+z;
}
k=z/5;
S=sqrt(k);
printf("\n\n");
printf("El arreglo A:\n");
for(i=0;i<5;i++){
    printf("%d  ",a[i]);
}
printf("\n\n");
printf("La media aritmetica es;\n%.1f",m);
printf("\n");
printf("La desviacion estandar es:\n%.8f",S);
}
