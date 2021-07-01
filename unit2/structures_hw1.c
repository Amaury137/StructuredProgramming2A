#include <stdio.h>
#include <string.h>
#include "/mnt/c/Users/Amaury/structuredprogramming2A/unit2/Biblioteca/utils.h"

typedef struct laptop{
    char* brand;
    int price;
    int screen_size;
    char* processor;
    char* bluethood;
}laptop;
typedef struct laptop lap;

int main(){
    lap lap_1={"lenovo", 7500, 14, "Rizen 8", "Yes"};
    lap lap_2={"HP", 1200, 15, "Intel 10", "Yes"};
    lap lap_3={"Patito", 4500, 10, "Celeron", "No"};
    lap lap_4={"lenovo", 9000, 14, "Rizen 10", "Yes"};
    
    printf("Laptop 1 \n -Brand: %s\n -Price: $%d\n -Screen size: %d inches\n -Processor: %s\n -Buetood: %s\n", lap_1.brand, lap_1.price, lap_1.screen_size, lap_1.processor, lap_1.bluethood);
    printf("Laptop 2 \n -Brand: %s\n -Price: $%d\n -Screen size: %d inches\n -Processor: %s\n -Buetood: %s\n", lap_2.brand, lap_2.price, lap_2.screen_size, lap_2.processor, lap_2.bluethood);
    printf("Laptop 3 \n -Brand: %s\n -Price: $%d\n -Screen size: %d inches\n -Processor: %s\n -Buetood: %s\n", lap_3.brand, lap_3.price, lap_3.screen_size, lap_3.processor, lap_3.bluethood);
    printf("Laptop 4 \n -Brand: %s\n -Price: $%d\n -Screen size: %d inches\n -Processor: %s\n -Buetood: %s\n", lap_4.brand, lap_4.price, lap_4.screen_size, lap_4.processor, lap_4.bluethood);


    // for (int i=0; i<=4; i++){
    //     printf("Laptop %d \n -Brand: %s\n -Price: $%d\n -Screen size: %d inches\n -Processor: %s\n -Buetood: %s\n", i, lap_[i].brand, lap_[i].price, lap_[i].screen_size, lap_[i].processor, lap_[i].bluethood);
    //     return 0;
    // }

    // for (int i=0; i<=4; i++){
    //     printf("%d -Brand: %s\n", i, lap_i.brand);
    // }

    // int i=3;
    // printf("%d -Brand: %s\n", i, lap_[i].brand);

    return 0;
}