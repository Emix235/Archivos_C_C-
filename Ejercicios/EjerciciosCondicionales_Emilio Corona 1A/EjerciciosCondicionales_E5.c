#include <stdio.h>
#include <stdlib.h>
// determina a partir de un precio su IVA
#define IVA_Me .11 // constante global
#define IVA_Ma .08 // constante global, menor
void main() {
    float p;
    printf("Escribe el precio del producto:\n");
    scanf("%f",&p);
    if(p<1500){
        p= (p*IVA_Me)+p;
    }else{
        p= (p*IVA_Ma)+p;
    }
    printf("El precio final es:$%.2f", p);  
}


