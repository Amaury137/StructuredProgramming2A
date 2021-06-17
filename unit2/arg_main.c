#include <stdio.h>
#include <stdlib.h> //atoi, atof//
#include <string.h> //stropy//


int my_int = 42; // %i o %d
float my_float = 4.0234; // %f
char my_char = 'c'; // %c
char my_str =[5] "hola"; // %s

float second_float = 0.0;

//pointer//  //una int debe tener valores int//
int* my_ptr_int = (int)&my_float; // %p


int main(int argc, char** argv){
    //pegando el argv1 a la var string
    strcpy(my_str, argv[1]);
    //convertir string a interno
    int base = atoi( my_str );

    //atoi =  string to int//
    //int num = atoi( agrv[1]);

    

    printf("my_intnt: %i, my_float: %f, my_char: %c, my_str: %s, my_ptr_int: %p ", my_int, my_float, my_char, my_str, my_ptr_int);
    printf("argc: %d, element1 %s, element2: %s, char: element %c \n", argc, argv[1], argv[2, 'L']);

    return 0;s
}