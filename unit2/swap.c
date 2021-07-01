#include<stdio.h>
#include "/mnt/c/Users/Amaury/structuredprogramming2A/unit2/Biblioteca/utils.h"

// agarrar a y b
// intercambiar con swap
//imprimir nuevos valores


int main() {   
    int number1=0;
    int number2=0;
    int temporal = 0;
    
    // agarrar "a" y "b"
    //int(input())  =  scanf()
    printf("Enter a number: \n");  
    scanf("%d", &number1);  //se guarda en la dirección

    printf("Enter another number: \n");
    scanf("%d", &number2);
    
    printf("Number1: %d, Number2: %d\n", number1, number2);

    // intercambiar con swap
   
    

    printf("Swapping......\n");
    
    //imprimir nuevos valores
    printf("Number1: %d, Number2: %d\n", number1, number2);
    return 0;
}

//void swap(a,b){
    //int* c = &a;
	//int* a = &b;
    //int* b = &c;

    //return;
//}