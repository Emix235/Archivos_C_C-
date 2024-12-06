#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main() {
    int y,opc;
    printf("Ingresa el valor de Y:\n");
    scanf("%d",&y);
    if(y>=0 && y<=10){
        opc=1;
    }else{
        if((y>11)&&(y<=25)){
            opc=2;
        }else{
            if(y>25 && y<=50){
                opc=3;
            }
        }
    }
    switch(opc){
        case 1:y=(4/y)-y;
        break;
        case 2:y=pow(y,3)-12;
        break;
        case 3:y=pow(y,2)+(pow(y,3)-18);
        break;
        default:y=0;
    }
    printf("El resultado de f(x)=%d",y);
}

