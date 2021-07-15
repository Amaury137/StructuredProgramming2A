

typedef struct robot{
    char* name;
    char* type;
    int height;
    int weight;
    int degrees_of_freedom;
    void(*say_hello_to) (struct robot);
    
}ROBOT; 


void say_hello_to(ROBOT robot){
    printf("Hello there %s %s\n", robot.name, ":D");
};

