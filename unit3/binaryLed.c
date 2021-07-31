#include <stdio.h>


//números binarios del 1-15;

// int led1 = 2;
// int led2 = 3;
// int led3 = 4;
// int led4 = 5;

int a=0;
int b=0;
int c=0;
int d=0;

int number = 11;
char array[4] = {8,4,2,1};


void binaryLed(int num){
  
  int num2=num;
  // int num3=num;
  // int num4=num;
  
  if(num >= array[0]){
      a=1;
      num2= num2 - array[0];
    }
  
  
   if(num2 >= array[1]){
      b=1;
      num2 = num2-array[1];
    }
  
  
    if(num2 >= array[2]){
      c=1;
      num2=num2-array[2];
    }

  
    if(num2 >= array[3]){
      d=1;
    }
}




int main(){

  binaryLed(number);
  
  printf("%d", a);
  printf("%d", b);
  printf("%d", c);
  printf("%d\n", d);
//   if(a==1){
//     printf("%d", a);
//   }
//   if(b==1){
//     printf("%d", b);
//   }
//   if(c==1){
//     printf("%d", c);
//   }
//   if(d==1){
//     printf("%d\n", d);
//   }










}