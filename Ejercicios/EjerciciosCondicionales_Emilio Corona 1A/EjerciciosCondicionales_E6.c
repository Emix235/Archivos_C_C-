#include <stdio.h>
#include <stdlib.h>
#define Ins 100  //variables globales
#define mn 150
void main() {
    int op;
    float p;
    printf("¿Eres alumno de la Universidad ? Responde si 1/ 2 No \n");
    scanf("%d",&op);
    switch(op){
        case 1: p= (Ins+mn)/2;
        printf("El monto de pago por la inscripcion.\n");
        printf("Ya que eres estudiante, es : $%.2f",p);
            break;
        case 2: p= (Ins+mn);
        printf("El monto de pago por la inscripcion.\n");
        printf("Es de : $%.2f",p);
            break;      
    }
}


