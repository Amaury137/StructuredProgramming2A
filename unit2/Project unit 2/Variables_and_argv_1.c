#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    
    int addition = atoi(argv[1])+atoi(argv[2]);
    int substraction = atoi(argv[1])-atoi(argv[2]);
    int multiplication = atoi(argv[1])*atoi(argv[2]);
    float divition = atof(argv[1])/atof(argv[2]);

    printf("Your results are:");
    printf("sum: %d\n", addition);
    printf("substraction: %d\n", substraction);
    printf("multiplication: %d\n", multiplication);
    printf("divition: %f\n", divition);
    
}