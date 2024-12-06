#include <stdio.h>
void main(){
int n1,n2,res;
int n;
//solicitar datos
printf("Ingrese dos numeros enteros:\n",res);
scanf("%d %d",&n1,&n2);
res=n1+n2;
printf("El resultado de la suma es: %d \n",res);
printf("Hola mundo mi primer ejemplo en C. \n");
printf("Ahora ingresa un numero y te dire si es par o no:\n");
scanf("%d",&n);
if(n%2==0){
	printf("El numero %d es par.",n);
}else
{
	printf("El numero %d es impar.",n);
}
}

