#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int tempF[30] = {63, 73, -999, 91, 86, 82, 72, 81, 66, 77, 75, 104, -999, 84, 77, 66, 82, 63, 93, 72, 82, 64, 75 , 90, 64, -999, 99, 82, 95, 82};
    int tempC[]= {};
    int sizeF = sizeof(tempF) / sizeof(tempF[0]);
    int garbage = 0;

    for (int i = 0; i < 30; i++){
        //printf("%d\n", tempF[i]);
        //printf("i: %d\n", i);
        
        if (tempF[i]==-999){
            garbage= garbaje+1;

        if (tempF[i]>-999){
            float x= tempF[i]-32;
            float C = (5*x)/9;
            //printf("%f\n",C);

            for (int j = 0; j < sizeF-garbage; i++){
                tempC[j]=C;
            }
            
        }
        
    }

    printf("Temperatures in C°: %d;\n", tempC);
    printf("%d;\n", sizeF);
}