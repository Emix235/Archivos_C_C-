#include <stdio.h>
#include <stdlib.h>
void main() {
    float g;
    int op;
    printf("Ingresa los grados:\n");
    scanf("%f",&g);
    printf("Seleccione: \n");
    printf("1. Convertir ºC a ºF. 2 Convertir ºF a ºC.\n");
    scanf("%d",&op);
    switch(op){
        case 1: g=(9*g)/5+32;
        printf("Los grados ºC son: %.2f ºF",g);
        break;
        case 2: g=(g-32)/1.800;
        printf("Los grados ºF son: %.2f ºC",g);
        break;
    }
}

