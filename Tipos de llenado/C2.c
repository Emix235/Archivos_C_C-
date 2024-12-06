#include <stdio.h>
void main(){
int f,c;
printf("Ingresa las filas;\n");
scanf("%d",&f);
printf("Ingresa las columnas;\n");
scanf("%d",&c);
int m[f][c],n=1;
int d=0;
int p1=1,p2=1,p3=0,p4=1;
int i=0,j=0;
while(n<=f*c){
        switch(d){
        case 0:m[i][j]=n;
               n++;
           if(j==c-p1){
                   d=1;
                   i++;
                   p1++;
                   }else{
                   j++;
                   };
        break;
        case 1:m[i][j]=n;
                     n++;
             if(i==f-p2){
                    d=2;
                    j--;
                   p2++;
                   }else{
                     i++;
                     };
        break;
        case 2:m[i][j]=n;
                     n++;
                if(j==p3){
                    d=3;
                    i--;
                    p3++;
                   }else{j--;
                   };
        break;
        case 3:m[i][j]=n;
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
for(int i=0;i<f;i++){
    for(int j=0;j<c;j++)
        printf(" %d ",m[i][j]);
        printf("\n");
}
}
