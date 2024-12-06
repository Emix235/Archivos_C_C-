#include <stdio.h>
#include <stdlib.h>
//evaluar a los estudiantes que aprueban el semestre

void main() {
    float pro;
    printf("Ingresa tu promedio:\n");
    scanf("%f",&pro);
    if((pro>=0.0) && (pro<=10.0) ){
        if(pro>=6.0){
            printf("Felicidades estas aprobado");
        }else{
            printf("Lo siento estas reprobado");
        }
    }else{
        printf("Calificación fuera de rango.");
    }  
}


