#include <stdio.h>
#include <stdlib.h>
void main() {
    int n1,n2,n3,n4,n5,me,Ma;
    printf("Solo un valor puede ser el mayor asi como el más pequeño.\n");
    printf("Ingrese el valor de n1: \n");
    scanf("%d",&n1);
    printf("Ingrese el valor de n2: \n");
    scanf("%d",&n2);
    printf("Ingrese el valor de n3: \n");
    scanf("%d",&n3);
    printf("Ingrese el valor de n4: \n");
    scanf("%d",&n4);
    printf("Ingrese el valor de n5: \n");
    scanf("%d",&n5);
    if(n1>n2 && n1>n3 && n1>n4 && n1>n5){
        Ma=n1;
    }else{
      if(n2>n1 && n2>n3 && n2>n4 && n2>n5){
        Ma=n2;
    }else{
       if(n3>n1 && n3>n2 && n3>n4 && n2>n5){
        Ma=n3;
    }else{
        if(n4>n1 && n4>n2 && n4>n3 && n4>n5){
        Ma=n4;
    }else{
        if(n5>n1 && n5>n2 && n5>n3 && n5>n4){
        Ma=n5;
    }}}}}
    
    if(n1<n2 && n1<n3 && n1<n4 && n1<n5){
        me=n1;
    }else{
      if(n2<n1 && n2<n3 && n2<n4 && n2<n5){
        me=n2;
    }else{
       if(n3<n1 && n3<n2 && n3<n4 && n2<n5){
        me=n3;
    }else{
         if(n4<n1 && n4<n2 && n4<n3 && n4<n5){
        me=n4;
    }else{
         if(n5<n1 && n5<n2 && n5<n3 && n5<n4){
        me=n5;
    }}}}}    
    printf("El numero más grande es el: %d\n",Ma);
    printf("El numero más pequeño es el: %d\n",me);   
}
