#include <stdio.h>
#include <string.h>
#include "/mnt/c/Users/Amaury/structuredprogramming2A/unit2/Biblioteca/utils.h"
#include "stdbool.h" // booleanos: 1=true  0=false

//otra opción en ve de "stdbool.h"
// #define true 1
// #define false 0

void security_camera(void(*call_to) (int number), int emergency_number);
void call_to();

int main(){
    //for(;;)  <-  bucl infinito siempre ue esté encendido
    security_camera(call_to, 911);



    return 0;
}






//-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-






void security_camera(void(*call_to) (int number), int emergency_number){
    //l+ógica de detección de algo 
    int thief = 1;
    if(thief!=0){ //si hay ladrón, hacer algo (callback)
        //call_back
        call_to(911);
    } 

}

void call_to(int number){
    //l+ogica para llamar al 911
    printf("calling  %d...!\n", number);
}
