#include <stdio.h>
#include <string.h>
#include "/mnt/c/Users/Amaury/structuredprogramming2A/unit2/Biblioteca/utils.h"


int a=2;
int b= 4;


int main(int argc, char** argv){
    // UTILS my_struct = {1};
    // printf("my_int: %d ", my_struct.my_int);
    // UTILS* my_struct_pointer= &my_struct;

    // printf("my_int: %d\n", (*my_struct_pointer).my_int);

    int otro_int=9;
    UTILS my_struct_C = {1, show_adress};
    printf("my_int: %d. &my_int_C: %p\n", my_struct_C.my_int, &my_struct_C );
    UTILS* my_struct_pointer = &my_struct_C;

    printf("my_int: %d\n", (*my_struct_pointer).my_int );
    printf("my_int: %d\n", my_struct_pointer->my_int );
    my_struct_C.show_int_adress(&otro_int); //<- usar el de la estructura UTILS en .h
    
    
    UTILS obj;
    obj.my_int=100;
    obj.my_swap = swap;
    obj.my_swap(&a, &b);
    printf("a:%d, b:%d\n", a, b);

    return 0;
}