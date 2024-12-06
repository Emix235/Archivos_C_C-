#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main() {
    int ma,sm,ca;
    float pm;
    float in;
    printf("Ingresa la matrícula del alumno:\n");
    scanf("%d",&ma);
    printf("-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-\n");
    printf("-/ 1.Industrial                      -/\n");
    printf("-/ 2.Telemática                      -/\n");
    printf("-/ 3.Computación                     -/\n");
    printf("-/ 4.Mecánica                        -/\n");
    printf("-/ Selecciona la carrera que cursa:  -/\n");
    printf("-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-\n");
    scanf("%d",&ca);
    printf("Ingresa el semestre que esta cursando:\n");
    scanf("%d",&sm);
    printf("E ingresa el promedio actual:\n");
    scanf("%f",&pm);
    if(ca==1){
        if(sm>=6){
            if(pm>=8.5){
                printf("El alumno de matricula:%d , que cursa Industrial.\n",ma);
                printf("Que cursa %d semestre y de promedio de %.2f .\n",sm,pm);
                printf("Puede ser asitente. \n");
            }else{
                printf("El alumno de matricula:%d , que cursa Industrial.\n",ma);
                printf("Que cursa %d semestre y de promedio de %.2f .\n",sm,pm);
                printf("NO puede ser asitente. \n");
            }
        }
    }
    if(ca==2){
        if(sm>=5){
            if(pm>=9.0){
                printf("El alumno de matricula:%d , que cursa Telemática.\n",ma);
                printf("Que cursa %d semestre y de promedio de %.2f .\n",sm,pm);
                printf("Puede ser asitente. \n");
                
            }else{
                printf("El alumno de matricula:%d , que cursa Telemática.\n",ma);
                printf("Que cursa %d semestre y de promedio de %.2f .\n",sm,pm);
                printf("NO puede ser asitente. \n");
            }
        }
    }
    if(ca==3){
        if(sm>=6){
            if(pm>=8.8){
                printf("El alumno de matricula:%d , que cursa Computación.\n",ma);
                printf("Que cursa %d semestre y de promedio de %.2f .\n",sm,pm);
                printf("Puede ser asitente. \n");
            }else{
                printf("El alumno de matricula:%d , que cursa Computación.\n",ma);
                printf("Que cursa %d semestre y de promedio de %.2f .\n",sm,pm);
                printf("Puede ser asitente. \n");
            }
        }
    }
    if(ca==4){
        if(sm>=7){
            if(pm>=9.0){
                printf("El alumno de matricula:%d , que cursa Mecánica.\n",ma);
                printf("Que cursa %d semestre y de promedio de %.2f .\n",sm,pm);
                printf("Puede ser asitente. \n");
            }else{
                printf("El alumno de matricula:%d , que cursa Mecánica.\n",ma);
                printf("Que cursa %d semestre y de promedio de %.2f .\n",sm,pm);
                printf("Puede ser asitente. \n");
            }
        }
    }
}
