#define led1_1 0
#define led1_2 1
#define led1_3 2
#define led1_4 3
#define led1_5 4
#define led1_6 5
#define led1_7 6
#define led2_1 7
#define led2_2 8
#define led2_3 9
#define led2_4 10
#define led2_5 11
#define led2_6 12
#define led2_7 13

void setup()
{
  pinMode(led1_1, OUTPUT);
  pinMode(led1_2, OUTPUT);
  pinMode(led1_3, OUTPUT);
  pinMode(led1_4, OUTPUT);
  pinMode(led1_5, OUTPUT);
  pinMode(led1_6, OUTPUT);
  pinMode(led1_7, OUTPUT);
  pinMode(led2_1, OUTPUT);
  pinMode(led2_2, OUTPUT);
  pinMode(led2_3, OUTPUT);
  pinMode(led2_4, OUTPUT);
  pinMode(led2_5, OUTPUT);
  pinMode(led2_6, OUTPUT);
  pinMode(led2_7, OUTPUT);
  
}

void loop()
{
 for (int i = 30; i >= 0; i--) {
   int quot=i/10;
   int rem=i%10;
    displayNumber(quot,rem);
    delay(1000);
 }
}

void displayNumber(int m,int s){
  if(m==0){
      digitalWrite(led2_1,HIGH);
      digitalWrite(led2_2,HIGH);
      digitalWrite(led2_3,HIGH);
      digitalWrite(led2_4,HIGH);
      digitalWrite(led2_5,HIGH);
      digitalWrite(led2_6,HIGH);

}
  if(m==3){
    digitalWrite(led2_5,LOW);
    digitalWrite(led2_6,LOW);
     digitalWrite(led2_1,HIGH);    
    digitalWrite(led2_2,HIGH);    
    digitalWrite(led2_7,HIGH);    
      digitalWrite(led2_4,HIGH);   
    digitalWrite(led2_3,HIGH);
  }
  if(m==2){
    digitalWrite(led2_3,LOW);
    digitalWrite(led2_6,LOW);
     digitalWrite(led2_1,HIGH);    
    digitalWrite(led2_2,HIGH);    
    digitalWrite(led2_7,HIGH);    
      digitalWrite(led2_4,HIGH);   
    digitalWrite(led2_5,HIGH);
   
  }
  if(m==1){
      digitalWrite(led2_1,LOW);   
      digitalWrite(led2_7,LOW);   
      digitalWrite(led2_4,LOW);    
      digitalWrite(led2_5,LOW);
      digitalWrite(led2_3,HIGH);    
   
  }
   if(s==0){
      digitalWrite(led1_1,HIGH);
      digitalWrite(led1_2,HIGH);
      digitalWrite(led1_3,HIGH);
      digitalWrite(led1_4,HIGH);
      digitalWrite(led1_5,HIGH);
      digitalWrite(led1_6,HIGH);
   
}
   if(s==9){    
      digitalWrite(led1_5,LOW);
      digitalWrite(led1_7,HIGH);
   
   }
  if(s==8){
      digitalWrite(led1_1,HIGH);
      digitalWrite(led1_2,HIGH);
      digitalWrite(led1_3,HIGH);
      digitalWrite(led1_4,HIGH);
      digitalWrite(led1_5,HIGH);
      digitalWrite(led1_6,HIGH);
      digitalWrite(led1_7,HIGH);
    
  }
  if(s==7){
    digitalWrite(led1_4,LOW);
      digitalWrite(led1_5,LOW);
    digitalWrite(led1_7,LOW);
  }
  if(s==6){
      digitalWrite(led1_2,LOW);    
      digitalWrite(led1_4,HIGH);    
          digitalWrite(led1_7,HIGH);
      digitalWrite(led1_5,HIGH);   
        
   
  }
  if(s==5){
    digitalWrite(led1_5,LOW);    
      digitalWrite(led1_1,HIGH); 
  
    
}
  if(s==4){
      digitalWrite(led1_1,LOW);    
      digitalWrite(led1_4,LOW);    
      digitalWrite(led1_2,HIGH);   
      
  }
  if(s==3){
      digitalWrite(led1_5,LOW);   
      digitalWrite(led1_6,LOW);    
      digitalWrite(led1_1,HIGH);    
      digitalWrite(led1_4,HIGH);   
      
  }
  if(s==2){
      digitalWrite(led1_3,LOW);    
      digitalWrite(led1_5,HIGH);    
    
  }
  if(s==1){
      digitalWrite(led1_1,LOW);   
      digitalWrite(led1_7,LOW);   
      digitalWrite(led1_4,LOW);    
      digitalWrite(led1_5,LOW);
      digitalWrite(led1_3,HIGH);    
   
  }
}
