//.h es una biblioteca siempre
#include <stdio.h>
#include <stdio.h> //atoi, atof, sprinf
#include <string.h> //strcpy
#include "./utils.h" //ruta específica

void say_my_name(char message[]){
    printf("%s\n", message);
    return;
}

void say_hi(char message[]){
    printf("%s\n ", message);    //definir
}


int add_two_numbers(int argumento_1, int argumento_2 ){
    int result= argumento_1+argumento_2
    return result;
}


//paso de argumentos por valor
void modify_variables(int argumento1, int argumento2){
    argumento1 = argumento1*2
    argumento2 = argumento2*2
    return;
}

void show_adress(int* parameter){
    printf(printf("adress: %p\n", parameter)
}
void show_adress_value(int* parameter){
    printf(printf("adress: %i\n", *parameter)
}


void modify_variables_address(int*dir1 ,int* dir2, múltiplo ){
    show_adress(dir1);
    show_adress_value(dir1);

    show_adress(dir2);
    show_adress_value(dir2);

    //el valor de la dirección x será multiplicado por 2
    *dir1=*dir1*múltiplo;
    *dir2=*dir2*múltiplo;
    return;
}

void swap(int* dir1 ,int* dir2){
    temp=*dir1
    *dir1=*dir2
    *dir2=temp
    return;
}