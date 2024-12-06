#include <stdio.h>
#include <stdlib.h>
void main() {
    int n;
    printf("Ingrese el valor de N: \n");
    scanf("%d",&n);
    if(n>0){
        printf("El numero es positivo.\n");
        if(n%2==0){
            printf("El numero es par.\n");
        }else{
            printf("El numero es impar.\n");
            if(n%7==0){
            printf("El numero es multiplo de 7.\n");
            if(n==35){
            printf("El numero es positivo, es impar y es multiplo de 7.\n");   
            }
            }
        }  
    }else{ 
       if(n==0){
           printf("El numero es cero.\n");
       }else{
           printf("El numero es negativo.\n");
       } 
    }
}


