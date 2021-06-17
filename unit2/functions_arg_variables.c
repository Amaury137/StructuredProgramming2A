#include <stdio.h>
#include <./utils.h> //mi biblioteca
#include <stdlib.h>

int var1= 2;
int var2= 5;

int main(int argc, char** argv){
	printf("just main:var1= %d, var2= %d\n", var1, var2);
	printf("function was executed:\n")
	//pasar argumentos por dirección//
	modify_variables(var1, var2);
	printf("var1: %d, var2: %d\n", var1, var2);

	//%p es para pointers//
	//&=dirección de  sale como -> &x00979fb, //
	//entero y puntero no se llevan, el símbolo es * o ptr//
	//si la dirección es entera debo usar int, sino float//
	int * myptr_1 = &var1;
	int * myptr_2 = &var2;

	show_adress(my_ptr1);
	show_adress(my_ptr2);
	
	//*my_ptr= el valor de la dirección, algo así: &x00979fb = x
    my_ptr1= &var2;
	*myptr_1 = 20  //en el espacio de memoria asignado a my_ptr1, guardar el valor de x
	

    printf("var1= %d, var2= %d\n", var1, var2)



	printf("////////////////////7");



	printf("var1= %d, var2= %d\n", var1, var2);
	printf("function address was wxecuted:\n");
	
	//paso de argumentos por dirección//
	modify_variables_address(&var1, &var2, 5);
	printf("var1= $d, var2= %d\n", var1, var2,);
	
	return 0;
}


