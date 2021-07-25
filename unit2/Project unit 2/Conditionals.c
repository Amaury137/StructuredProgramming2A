#include <stdio.h>

int main(){
    //char* name
    char name[255];
    int age;


    printf("Hello there, what's your name?:\n");
    scanf( "%s" , name);

    printf("How old are you %s?\n", name);
    scanf("%d", &age);

    if (age<18){
        printf("I'm sorry %s, you need to be 18+ to enter this website\n", name);
    }
    else{
        printf("Welcome %s, we hope you enjoy our site\n", name);
    }
    
    return 0;
}
