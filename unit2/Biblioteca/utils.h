//.h es una biblioteca siempre
#include <stdio.h>
#include <stdio.h> //atoi, atof, sprinf
#include <string.h>
#include <stdlib.h> 
//include "./utils.h" ruta específica

void say_my_name(char message[]){
    printf("%s\n", message);
    return;
}

void say_hi(char message[]){
    printf("%s\n ", message);    //definir
}


int add_two_numbers(int argumento_1, int argumento_2 ){
    int result= argumento_1+argumento_2;
    return  result;
}


//paso de argumentos por valor
void modify_variables(int argumento1, int argumento2){
    argumento1 = argumento1*2;
    argumento2 = argumento2*2;
    return;
}

void show_adress(int* parameter){
    printf("adress: %p\n", parameter);
}
void show_adress_value(int* parameter){
    printf("adress: %i\n", *parameter);
}


void modify_variables_address(int*dir1 ,int*dir2, int multiplo ){
    show_adress(dir1);
    show_adress_value(dir1);

    show_adress(dir2);
    show_adress_value(dir2);

    //el valor de la dirección x será multiplicado por 2
    *dir1=*dir1 * multiplo;
    *dir2=*dir2 * multiplo;
    return;
}

// //pendiente
// void swap(numA, numB){
//     int temp= &numA;
//     int numA= &numB;
//     int dirB= &temp;
//     return;
// }

//arrays -0-0-0-0-0-0-0-0-
void fill_array(int array[], size_t size){
    for (size_t i = 0; i<size; i++){
        array[i]=i*2;
    }    
    
}
//el return en void es opcional

void print_array_ID(int array[], size_t size){
    for (size_t i = 0; i<size; i++){
        printf("%i\n", array[i]);
    }    
    return;
}


//-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-
typedef struct  array
{
        int dir_array[2];
        float aFloat;
        float * aFloatPointer;

}Array; //<- siempre poner ;


Array* return_array( ){
        // int unArreglo[5] = {1,5,6,7,8};
        Array* un_array_type = (Array*)malloc(sizeof(Array));
        printf("addres un_array_type: %p, un_array_type = %p \n",  &un_array_type, un_array_type);

        un_array_type->dir_array[0] = 17;
        un_array_type->dir_array[1] = 15;
        return un_array_type;
}