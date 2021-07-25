#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
    int a=0;
    for (int i = 1; i < argc; i++){
        //printf("el argumento %d es: %s\n", i, argv[i]);
        a= a + atof(argv[i]);
        //printf("a es: %d\n", a);

    }
    //printf("size: %d\na=%d\n", argc-1, a);
    
    float size=argc-1;
    float average = a/size;
    printf("the average is: %f\n",average);
   
    

}
