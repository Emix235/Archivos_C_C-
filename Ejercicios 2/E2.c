#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main() {
    int na,sl;
    float in;
    printf("Inserte el nivel academico del profesor:\n");
    scanf("%d",&na);
    printf("Ahora inserte el salario de dicho profesor:\n");
    scanf("%d",&sl);
    switch(na){
        case 1:in=3.5;
        sl=(sl*in)/100+sl;
        break;
        case 2:in=4.1;
        sl=(sl*in)/100+sl;
        break;
        case 3:in=4.8;
        sl=(sl*in)/100+sl;
        break;
        case 4:in=5.3;
        sl=(sl*in)/100+sl;
        break;
    }
    printf("De acuerdo al nivel: %d del profesor.\n",na);
    printf("El incremento es del %.1f y el nuevo salario sera de: $ %d",in,sl);
}

