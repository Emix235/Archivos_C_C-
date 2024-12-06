#include <stdio.h>
#include<conio.h>
#include <math.h>
void main(){
int n1,n2;
float m;
printf("Escribe n1;\n");
scanf("%d",&n1);
printf("Escribe n2;\n");
scanf("%d",&n2);
m=(float) n1/(float)n2;
//printf("El resultado es:%.2f\n",(float) n1/(float) n2);
printf("El resultado es:%.2f\n",m);
}
