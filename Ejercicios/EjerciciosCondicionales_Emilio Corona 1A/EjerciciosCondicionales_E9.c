#include <stdio.h>
#include <stdlib.h>
void main() {
    float g;
    int op;
    printf("Ingresa los grados:\n");
    scanf("%f",&g);
    printf("Seleccione: \n");
    printf("1. Convertir �C a �F. 2 Convertir �F a �C.\n");
    scanf("%d",&op);
    switch(op){
        case 1: g=(9*g)/5+32;
        printf("Los grados �C son: %.2f �F",g);
        break;
        case 2: g=(g-32)/1.800;
        printf("Los grados �F son: %.2f �C",g);
        break;
    }
}

