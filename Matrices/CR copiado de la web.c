/**
 * Mezclar arreglo en C, es decir, hacer aleatorio, sacudir, randomizar
 * @date 2019-12-18
 * @author parzibyte
 * @see https://parzibyte.me/blog
 * */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// maximo y minimo son inclusivos
int aleatorio_en_rango(int minimo, int maximo) {
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

int main(void) {
    // Como queremos aleatorios, alimentamos a srand
    // https://parzibyte.me/blog/2019/03/21/obtener-numeros-aleatorios-c/
    srand(getpid());
    int r,i;
    printf("Escribe el rango;\n");
    scanf("%d",&r);
    int arreglo[r];
    for(i=1;i<=r;i++){
      arreglo[i]=i;
    }
    //int arreglo[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int longitud =
            sizeof(arreglo) / sizeof arreglo[0];//https://parzibyte.me/blog/2018/09/21/longitud-de-un-arreglo-en-c/
    // Impresión
    printf("Arreglo original:\n");
    for (int i = 1; i <=longitud; i++)printf("%d,", arreglo[i]);
    // Ciclo desde 0 hasta longitud de arreglo
    for (int i = 1; i <=longitud; i++) {
        int indiceAleatorio = aleatorio_en_rango(0, longitud - 1);
        // Intercambiar el actual con un elemento del índice aleatorio
        int temporal = arreglo[i];
        arreglo[i] = arreglo[indiceAleatorio];
        arreglo[indiceAleatorio] = temporal;
    }
    printf("\nArreglo mezclado:\n");
    for (int i = 1; i <=longitud; i++)printf("%d,", arreglo[i]);
    return 0;
}
