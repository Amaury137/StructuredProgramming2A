#include <stdio.h>
#include <string.h>
#include "/mnt/c/Users/Amaury/structuredprogramming2A/unit2/Biblioteca/utils.h"

int my_int = 4;
float my_float = 213.23;
int * my_pointer = &my_int; 

int main(){
    printf("addres my_int: %p, my_int: %d \n", &my_int, my_int);
    printf("addres my_float: %p, my_float: %f \n", &my_float, my_float);
    printf("addres my_pointer: %p, my_pointer: %p \n", &my_pointer, my_pointer);
    *my_pointer=6;
    printf("adress my_int: %p, my_pointer: %d \n", &my_pointer, my_pointer);


    Array myArray;
    Array* my_array = return_array();
    printf("%d\n", my_array->dir_array[1]  );
        
    //investigar malloc(), realloc, calloc();


}