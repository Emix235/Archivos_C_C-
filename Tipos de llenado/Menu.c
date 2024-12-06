#include <stdio.h>
void main(){
int f,c;
printf("Ingresa las filas de la matriz (maximo 5x5):\n");
scanf("%d",&f);
printf("Ingresa las filas de la matriz (maximo 5x5):\n");
scanf("%d",&c);
int ma[f][c],a[f*c],n=1;
for(int i=0;i<f;i++){
    for(int j=0;j<c;j++){
    printf("Elemento ma[%d][%d];\n",i,j);
    scanf("%d",&ma[i][j]);
    a[n]=ma[i][j];
    n++;
    }
}
int op;
printf("Elige el tipo de llenado para mostrar Matriz A:\n");
printf("----------------------------------------\n");
printf("**  1 ---- Tipo---horizontal          **\n");
printf("**  2 ---- Tipo---Vertical (normal)   **\n");
printf("**  3 ---- Tipo---Tipo S o Z          **\n");
printf("**  4 ---- Tipo---Caracol             **\n");
printf("**  5 ---- Tipo---Inversa             **\n");
printf("----------------------------------------\n");
printf("Digita el tipo de llenado:\n");
scanf("%d",&op);
int m[f][c],i=0,j=0,d=0;
int p1=1,p2=1,p3=0,p4=1,k=f*c;
n=1;
switch(op){
case 1:
    while(n<=f*c){
             m[i][j]=a[n];
                  n++;
           if(i==f-1){
                  i=0;
                  j++;
                }else{
                    i++;
                     }}
    printf("La matriz normal:\n");
    for(int i=0;i<f;i++){
    for(int j=0;j<c;j++)
        printf(" %d ",ma[i][j]);
        printf("\n");
    }
    printf("\nCon tipo de llenado horizontal:\n");
    for(int i=0;i<f;i++){
    for(int j=0;j<c;j++)
     printf(" %d ",m[i][j]);
     printf("\n");
     };
    break;
case 2: printf("\nLa matriz vertical(normal).\n");
    for(int i=0;i<f;i++){
    for(int j=0;j<c;j++)
    printf("%d ",ma[i][j]);
    printf("\n");
    };
    break;
case 3:
    while(n<=f*c){
    switch(d){
    case 0:m[i][j]=a[n];
    n++;
    if(j==c-1){
        d=1;
        i++;
    }else{
    j++;
    };
    break;
    case 1:m[i][j]=a[n];
    n++;
    if(j==0){
        d=0;
        i++;
    }else{
    j--;
    };
    break;
    }
    }
    printf("La matriz normal:\n");
    for(int i=0;i<f;i++){
    for(int j=0;j<c;j++)
        printf(" %d ",ma[i][j]);
        printf("\n");
    }
    printf("\nCon tipo de llenado S o Z:\n");
    for(int i=0;i<f;i++){
    for(int j=0;j<c;j++)
     printf(" %d ",m[i][j]);
     printf("\n");
     };
   break;
case 4:
     while(n<=f*c){
        switch(d){
        case 0:m[i][j]=a[n];
               n++;
           if(j==c-p1){
                   d=1;
                   i++;
                   p1++;
                   }else{
                   j++;
                   };
        break;
        case 1:m[i][j]=a[n];
                     n++;
             if(i==f-p2){
                    d=2;
                    j--;
                   p2++;
                   }else{
                     i++;
                     };
        break;
        case 2:m[i][j]=a[n];
                     n++;
                if(j==p3){
                    d=3;
                    i--;
                    p3++;
                   }else{j--;
                   };
        break;
        case 3:m[i][j]=a[n];
                     n++;
               if(i==p4){
                    d=0;
                    j++;
                   p4++;
                  }else{i--;
                  };
        break;
        }
     }
    printf("La matriz normal:\n");
    for(int i=0;i<f;i++){
    for(int j=0;j<c;j++)
        printf(" %d ",ma[i][j]);
        printf("\n");
    }
    printf("\nCon tipo de llenado Caracol:\n");
    for(int i=0;i<f;i++){
    for(int j=0;j<c;j++)
     printf(" %d ",m[i][j]);
    printf("\n");
     };
    break;
case 5:
    while(k!=0){
    m[i][j]=a[k];
    k--;
    if(j==c-1){
        j=0;
        i++;
    }else{
    j++;
    }
    }
    printf("La matriz normal:\n");
    for(int i=0;i<f;i++){
    for(int j=0;j<c;j++)
        printf(" %d ",ma[i][j]);
        printf("\n");
    }
    printf("\nCon tipo de llenado Inversa:\n");
    for(int i=0;i<f;i++){
    for(int j=0;j<c;j++)
     printf(" %d ",m[i][j]);
    printf("\n");
     };
   break;
default:printf("\nEl numero esta fuera del rango.");
break;
}
}
