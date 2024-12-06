#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main() {
    int opc,band=1;
    float T;
    printf("Escribe el valor de T:\n");
    scanf("%f",&T);
    printf("-/-/-/-/-/-/-/-/-/-/-/-/-/\n");
    printf("-/ 1.Calcular T/5       -/\n");
    printf("-/ 2.Calcular T^2       -/\n");
    printf("-/ 3.4 Calcular 6*T/2   -/\n");
    printf("-/ Selecciona la opción: -/\n");
    printf("-/                      -/\n");
    printf("-/-/-/-/-/-/-/-/-/-/-/-/-/\n");
    scanf("%d",&opc);
    switch(opc){
        case 1:T=T/5 ;
        break;
        case 2:T=pow(T,2);
        break;
        case 17/5:T=6*(T/2);
        break;
        default:band=0;
            printf("|- El valor de f(T) = 1 |-|");
    }
    if(band==1){
        printf("|-| El resultado de f(T)=%.1f -|",T);
    }
}

