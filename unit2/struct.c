#include <stdio.h>
#include <string.h>
#include "/mnt/c/Users/Amaury/structuredprogramming2A/unit2/Biblioteca/utils.h"


typedef struct utils{
    int my_int;
}UTILS;


int main(int argc, char** argv){
    // UTILS my_struct = {1};
    // printf("my_int: %d ", my_struct.my_int);
    // UTILS* my_struct_pointer= &my_struct;

    // printf("my_int: %d\n", (*my_struct_pointer).my_int);




    UTILS my_struct_C = {1};
    printf("my_int: %d. &my_int_C: %p\n", my_struct_C.my_int, &my_struct_C );
    UTILS* my_struct_pointer = &my_struct_C;

    printf("my_int: %d\n", (*my_struct_pointer).my_int );
    printf("my_int: %d\n", my_struct_pointer->my_int );


    return 0;
}