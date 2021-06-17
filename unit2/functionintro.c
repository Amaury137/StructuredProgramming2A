#include <stdio.h>
#include "./utils.h"

int my_number = 3;
float my_float = 23.3223;
char my_string = "hi :3";

//primer método para funciones
//declarar y definir

    //ahora está en utils.h//
//void say_my_name(char message[]){
//    printf("%s\n", message);
//
//}


//-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-//

//segundo método para funciones
///1 declaro
    //ahora está en utils.h//
//void say_hi(char message[]);
//int add_two_numbers(int argumento_1, int argumento_2 )

int main(){
    say_hi("Holi :3");
    say_my_name("Amaury");
    int result = add_two_numbers(2,5)
    printf("my result is: %d\n", result)
    return 0;
}

//usualmente el proceso de la función se escribe abajo del main
//2 defino
    //ahora está en utils.h//
//void say_hi(char message[]){
//    printf("%s\n ", message);    //definir
//}

//int add_two_numbers(int argumento_1, int argumento_2 ){
//    int result= argumento_1+argumento_2
//    return result;
//}