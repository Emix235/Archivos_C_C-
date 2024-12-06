#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// maximo y minimo son inclusivos
/*int aleatorio_en_rango(int minimo, int maximo) {
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}*/

int main(void) {
    // Como queremos aleatorios, alimentamos a srand
    // https://parzibyte.me/blog/2019/03/21/obtener-numeros-aleatorios-c/
    srand(getpid());
    int r,i;
    int minimo=0,maximo;
    printf("Escribe el rango;\n");
    scanf("%d",&r);
    int arreglo[r],arreglo2[r];
    for(i=1;i<=r;i++){
      printf("Ingresa a elemento [%d]:\n",i);
      scanf("%d",&arreglo2[i]);
    }
    for(i=1;i<=r;i++){
      arreglo[i]=arreglo2[i];
    }
    //int arreglo[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int longitud =
            sizeof(arreglo) / sizeof arreglo[0];//https://parzibyte.me/blog/2018/09/21/longitud-de-un-arreglo-en-c/
    // Impresión
    maximo=longitud-1;
    printf("Arreglo original:\n");
    for (int i = 1; i <=longitud; i++)printf("%d,", arreglo[i]);
    // Ciclo desde 0 hasta longitud de arreglo
    for (int i = 1; i <=longitud; i++) {
    int aleatorio_en_rango = minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
        printf("\n");
        printf("%d, ", aleatorio_en_rango);
        int indiceAleatorio = aleatorio_en_rango;
        // Intercambiar el actual con un elemento del índice aleatorio
        int temporal = arreglo[i];
        arreglo[i] = arreglo[indiceAleatorio];

        arreglo[indiceAleatorio] = temporal;
    }
    printf("\n\n");
    for (int i = 1; i <=longitud; i++)printf("%d, ", i);
    printf("\nArreglo mezclado:\n");

    for (int i = 1; i <=longitud; i++)printf("%d ", arreglo[i]);
    return 0;

}

