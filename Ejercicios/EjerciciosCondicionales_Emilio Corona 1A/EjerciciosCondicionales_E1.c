#include <stdio.h>
#include <stdlib.h>

int main() {
    int edad;
	printf("Ingresa la edad:\n");
	scanf("%d",&edad);
	//condicional para la edad
	if(edad>0){
	if(edad>=18){
		printf("Eres mayor de edad.\n");//verdadero	
		printf("Ya puedes votar.");
	}else{
		printf("Eres menor de edad.");//falso
	}
	}else{
		printf("Edad invalida.");
	}
	return 0;
}

