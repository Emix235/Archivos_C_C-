#include <stdio.h>
#include <string.h>
typedef struct // Declaraci�n de la estructura banco//
{
char noba[10]; // Nombre del banco//
char nucu[10]; // N�mero de cuenta//
} banco;
typedef union //Declaraci�n de la union fpago//
{
banco che; // Cheque. Campo de tipo estructura banco//
banco nomi; // C�mina. Campo de tipo estructura banco//
char venta; // Ventanilla//
} fpago;
typedef struct //Declaraci�n de la estructura domicilio//
{
char c_nu[20]; //Calle y n�mero//
char col[20]; // Colonia//
char cp[5]; // C�digo Postal//
char ciudad[15]; //Ciudad//
} domicilio;
typedef struct //Declaraci�n de la estructura vendedor//
{
int num; //N�mero de vendedor//
char nom[20]; //Nombre del vendedor//
float ven[12]; //Ventas del a�o Arreglo unidimensional de tipo real//
domicilio domi; // domi es de tipo estructura domicilio//
float sal; //Salario mensual//
fpago pago; //pago es de tipo uni�n fpago//
int cla; // Clave forma de pago//
} vendedor;
void Lectura(vendedor *, int);
void F1(vendedor *, int );
void main(){
    vendedor v[50];
    int t;
    do{
        printf("Ingrese la cantidad de empleados: ");
        scanf("%d",&t);
    }while(t>50 || t<1);
    /* Se verifica que el n�mero de elementos del arreglo sea correcto. */
Lectura (v, t);
}
//estructura vendedor de T elementos//
void Lectura(vendedor A[], int n){
    int i,j;
    for(i=0;i<n;i++){
        printf("\nIngrese los datos del vendedor %d", i+1);
        printf("\nNumero del vendedor: ");
        scanf("%d",&A[i].num);
        printf("Nombre y apellido: ");
        fflush(stdin);
        gets(A[i].nom);
        printf("Ventas del a�o\n");
        for(j=0;j<12;j++){
            printf("Mes %d:",j+1);
            scanf("%f",A[i].ven[j]);
        }
        printf("Domicilio del vendedor: ");
        printf("\nCalle y numero: ");
        fflush(stdin);
        gets(A[i].domi.c_nu);
        printf("Colonia: ");
        fflush(stdin);
        gets(A[i].domi.col);
        printf("Codigo postal: ");
        fflush(stdin);
        gets(A[i].domi.cp);
        printf("Ciudad: ");
        fflush(stdin);
        gets(A[i].domi.ciudad);
        printf("Salario del vendedor: ");
        scanf("%f", &A[i].sal);
        printf("Clave forma de pago: ");
        scanf("%d",&A[i].cla);
        printf("Forma de Pago (Banco-1 N�mina-2 Ventanilla-3):");
scanf("%d", &A[i].cla);
switch (A[i].cla)
{
case 1:{
printf("\tNombre del banco:");
fflush(stdin);
gets(A[i].pago.che.noba);
printf("\tN�mero de cuenta: ");
fflush(stdin);
gets(A[i].pago.che.nucu);
}
break;
case 2:{
printf("\tNombre del banco: ");
fflush(stdin);
gets(A[i].pago.nomi.noba);
printf("\tN�mero de cuenta: ");
fflush(stdin);
gets(A[i].pago.nomi.nucu);
}
break;
case 3: A[i].pago.venta ='$';
break;
}
}
}
void F1(vendedor A[], int T)
//Esta funci�n se utiliza para generar las ventas totales anuales de cada un de los vendedores de la empresa//
{
int i, j;
float SUM;
printf("\n\t\tVentas Totales de los Vendedores");
for (i=0; i<T; i++)
{
printf("\nVendedor: %d", A[i].num);
SUM = 0.0;
for (j=0; j<12; j++)
SUM += A[i].ven[j];
printf("\nVentas: %.2f\n", SUM);
}
}
void F4(vendedor A[], int T)
//Esta funci�n se usa para imprimir el n�mero de empleado, el nombre del banco y el n�mero de cuenta de todos aquellos empleados a quienes se les deposita su sueldo en cuenta de cheques//
{
int i;
float SUM;
printf("\n\t\tVendedores con Cuenta en el Banco");
for (i=0; i<T; i++)
if (A[i].cla == 1)
printf("\nN�mero de vendedor: %d\n Banco: %s\nCuenta: %s", A[i].num,A[i].pago.che.noba, A[i].pago.che.nucu);
}



