#include <stdio.h>
#include <stdlib.h>

int main() {
    int l1,l2,l3;
	printf("Escribe el valor de sus lados:\n");
	printf("Lado 1: ");
	scanf("%d",&l1);
	printf("Lado 2: ");
	scanf("%d",&l2);
	printf("Lado 3: ");
	scanf("%d",&l3);
	if((l1==l2) && (l1==l3) && (l3==l2)){
		printf("Es un: Triangulo Equilatero.");
	}else{  //condicion anidada
		if((l1!=l2) && (l1!=l3) && (l2!=l3)){
			printf("Es un: Triangulo Escaleno");
		}else{
			printf("Es un: Triangulo Isoceles");
		}
	}
	return 0;
}

