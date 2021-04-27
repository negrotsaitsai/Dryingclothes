#include<Servo.h>
Servo yj;
void setup(){
  pinMode(A1,INPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
  yj.attach(7);
  
}

void loop(){
  int L=analogRead(A1);
  int R=analogRead(A0);
  Serial.println(R);
  delay(500);
  if(L>300||R<900){
    yj.write(0);
   
  }
  else if(L<300&&R>900){
    yj.write(90);
    
  }
}
