#include <stdio.h>
#include <stdlib.h>
void main() {
    int a1,a2,a3;
    printf("Ingresa el valor del primer angulo:\n");
    scanf("%d",&a1);
    printf("Ingresa el valor del segundo angulo:\n");
    scanf("%d",&a2);
    a3=180-a1-a2;
    if(a3==90){
        printf("Tu triangulo es rectangulo.\n");
    }else{
        if(a3<90){
          printf("Tu triangulo es un acutangulo.\n");  
        }else{
            if(a3>90){
             printf("Tu triangulo es un obtusangulo.\n");   
            }   
        }
    }
    printf("El valor del 3er angulo es: º%d",a3);
}


