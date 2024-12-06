#include <stdio.h>
//Determina si el usuario es menor o mayor de edad.
void main (){
	int edad;
	printf("Ingresa la edad:\n");
	scanf("%d",&edad);
	//condicional para la edad
	if(edad>0){
	if(edad>=18){
		printf("Eres mayor de edad.\n");//verdadero	
		printf("ya puedes votar.");
	}else {
		printf("Eres menor de edad.");//falso
	}	
	}else{
		printf("Edad invalida.");
	}
	
}

