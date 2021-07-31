
//números binarios del 1-15;

int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;

int a=0;
int b=0;
int c=0;
int d=0;

int number = 13;
char array[4] = {8,4,2,1};


void binaryLed(int num){
  
  int num2=num;
  int num3=num;
  int num4=num;
  
  if(num >= array[0]){
      a=1;
      num2= num - array[0];
    }
  
  
   if(num2 >= array[1]){
      b=1;
      num3=num2-array[1];
    }
  
  
    if(num3 >= array[2]){
      c=1;
      num4=num3-array[2];
    }

  
    if(num4 >= array[3]){
      d=1;
    }
}

void setup() {
  Serial.begin(9600);
  //pinMode(led1, OUTPUT); 
  //pinMode(led2, OUTPUT);
  //pinMode(led3, OUTPUT);
  //pinMode(led4, OUTPUT);
  
}



void loop() {
  binaryLed(number);
  
  if(a==1){
    digitalWrite(led4, HIGH);
  }
  if(b==1){
    digitalWrite(led3, HIGH);
  }
  if(c==1){
    digitalWrite(led2, HIGH);
  }
  if(d==1){
    digitalWrite(led1, HIGH);
  }

}
