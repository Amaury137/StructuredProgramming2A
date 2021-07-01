#include <stdio.h>
#include <string.h>
#include "/mnt/c/Users/Amaury/structuredprogramming2A/unit2/Biblioteca/utils.h"

//arrays
// int name[x]= 
int my_array[5];
int my_int = 4;
float my_float = 3.1416;

// struct name
typedef struct arquero{
    int life;
    int mana;
    char* name; //<- es un string
    void (*saludo)(char text[]);
    int(*suma_dos_numeros) (int argumento1, int argumento2);
    //otros atributos
}arquero; //<- toda estructura leeva ; al final

//todo lo que se llame x se llamará Y
typedef struct arquero arq; // struct arquero -> arq, para no copiar todo



int main(){
    struct arquero Zelas = {100, 0, "Zelas de Arcontis"};
    arq Artan = {150, 20, "Artans de Arcontis"};
    //ambas formas se pueden usar
    
    printf("%s\n", Zelas.name);
    Zelas.saludo("Hola, soy un arquero");
    printf("%d\n", Zelas.suma_dos_numeros(20,15));

    fill_array(my_array,5);
    print_array_ID(my_array,5);
    printf("%d", my_array[0]);
    printf("%d", my_array[1]);
    printf("%d", my_array[2]);
    printf("%d", my_array[3]);
    printf("%d", my_array[4]);

    Array* my_Array = return_array();  //está en utils.h
    printf("\n%d", my_array->dirArray[0]);  //si uso pointers, se accede con ->
    printf("\n%d", my_array->dirArray[1]);
    printf("\n%d", my_array->dirArray[2]);
    return 0;
}

