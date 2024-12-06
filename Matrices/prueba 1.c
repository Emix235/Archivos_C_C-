#include <stdio.h>
void main()
{
    int r,i;
    printf("Escribe el rango;\n");
    scanf("%d",&r);
    int a[r];
    for(i=1;i<=r;i++){
      a[i]=i;
    }
    for(i=1;i<=r;i++){
        printf("a[%d]\n",a[i]);
    }


}
