#include <stdio.h>
void main(){
int gh,gm,i;
float sh,sm;
int ch=0,cm=0;
printf("Ingrese la cantidad de alumnos hombres que integraran el equipo:\n");
scanf("%d",&gh);
printf("Ingrese la cantidad de mujeres que integraran el equipo:\n");
scanf("%d",&gm);
for(i=1;i<=gh;i++){
    printf("Ingresa la estatura del alumno (%d):\n",i);
    scanf("%f",&sh);
    if(sh>1.75){
        ch=ch+1;
    }
}
printf("\n\n");
for(i=1;i<=gm;i++){
    printf("Ingresa la estatura de la alumna (%d):\n",i);
    scanf("%f",&sm);
    if(sm>1.65){
        cm=cm+1;
    }
}
printf("De los %d hombres, fueron seleccionados %d ,\n",gh,ch);
printf("De las %d mujeres, fueron seleccionadas %d .",gm,cm);

}
