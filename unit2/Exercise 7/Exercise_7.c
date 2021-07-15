#include <stdio.h>
#include "/mnt/c/Users/Amaury/structuredprogramming2a/unit2/Exercise 7/Exercise_7.h"



int main(){
    ROBOT markovito;
    markovito.name="Markovito";
    markovito.type="Service_robot";
    markovito.height=1.2;
    markovito.weight=2.5;
    markovito.degrees_of_freedom=3;
    markovito.say_hello_to = say_hello_to; 

    ROBOT tiago;
    tiago.name="Tiago";
    tiago.type="Service_robot";
    tiago.height=1.7;
    tiago.weight=2.8;
    tiago.degrees_of_freedom=7;
    tiago.say_hello_to = say_hello_to; 

   markovito.say_hello_to(tiago);
   tiago.say_hello_to(markovito);
   

    


};

