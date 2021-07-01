#include <stdio.h>
int main() {   
    int number1=0;
    int number2=0;
   
    printf("Enter a number: \n");  
    scanf("%d", &number1);

    printf("Enter another number: \n");
    scanf("%d", &number2);

    printf("You entered: %d, and: %d\n", number1, number2);
    
    return 0;
}
