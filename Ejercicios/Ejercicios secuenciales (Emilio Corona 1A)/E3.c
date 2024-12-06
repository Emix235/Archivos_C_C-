#include <stdio.h>
#include <stdlib.h>

void main() {
    int n1,n2,n3,n4;
    printf("Ingresa el valor de 4 numeros:\n");
    scanf("%d %d %d %d" ,&n1,&n2,&n3,&n4);
    printf("El orden normal es:\n");
    printf("%d %d %d %d \n",n1 ,n2 ,n3 ,n4);
    printf("El orden inverso es:\n");
    printf("%d %d %d %d",n4 ,n3 ,n2 ,n1);
}
