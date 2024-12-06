#include <stdio.h>
void main(){
int nom[16]={1,2,3,4,5,6,7,8,10,12,13,14,15,16},na=0,i;
int c=0;

while(c<16){
    na=rand()%9;
    int nvr=0;
    for(i=0;i<16;i++){
        if(nom[16]==na){
          nvr++;
        }
        if(nvr>2){
           nom[c]=na;
           c++;
        }

    }
}
/*int[] numbers = new int[16];
        int count = 0;

        while(count < 16) {
            Random r = new Random();
            int na = r.nextInt(8) + 1;
            int nvr = 0;

            for (int i = 0; i < 16; i++) {
                if(numbers[i] == na) {
                    nvr++;
                }
            }
            if(nvr < 2) {
                numbers[count] = na;
                count++;
            }//fin
}
