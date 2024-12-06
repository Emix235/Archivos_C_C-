#include <stdio.h>
#include <stdlib.h>
void main()
{
    int CV;
    float S1, S2, S3, S4, S5, S6;
    float T, prom;

    printf("Ingrese la clave del empleado: \n");
    scanf("%d", &CV);
    printf("Escribe tus 6 primeros sueldos \n");
    scanf("%f %f %f %f %f %f", &S1, &S2, &S3, &S4, &S5, &S6);

    T = S1 + S2 + S3 + S4 + S5 + S6;
    prom = T / 6;
    printf("El empleado %d tiene un ingreso total de: $%.2f", CV, T);
    printf("\nSu ingreso mensual asciende a: $%.2f", prom);
}


