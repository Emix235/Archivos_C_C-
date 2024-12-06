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
int ar(int mn, int max) {
    return mn + rand() / (RAND_MAX / (max - mn + 1) + 1);
}

void main() {
    // Como queremos aleatorios, alimentamos a srand
    // https://parzibyte.me/blog/2019/03/21/obtener-numeros-aleatorios-c/
    srand(getpid());
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9},i;
    int l =
            sizeof(a) / sizeof a[0];//https://parzibyte.me/blog/2018/09/21/longitud-de-un-arreglo-en-c/
    // Impresión
    printf("Tamano; %d \n",l);
    printf("Arreglo original:\n");
    for (i = 0; i < l; i++)printf("%d \n", a[i]);
    // Ciclo desde 0 hasta longitud de arreglo
    for (i = 0; i < l; i++) {
        int inA = ar(0, l - 1);
        // Intercambiar el actual con un elemento del índice aleatorio
        int t = a[i];
        a[i] = a[inA];
        a[inA] = t;
    }
    printf("\n");
    printf("\nArreglo mezclado:\n");
    for (int i = 0; i < l; i++)printf("%d \n", a[i]);
}
