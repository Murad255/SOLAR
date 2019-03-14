
#include <Servo.h>
#define gist 35
#define serv_speed 50

#define Apin_A 1
#define Apin_B 2

#define pin_A 2 
#define pin_B 3

Servo servo;
void setup() {
 servo.attach(9);
pinMode(Apin_A,0);
pinMode(Apin_B,0);

pinMode(pin_A,1);
pinMode(pin_B,1);
}

void loop() {
   int val1 = analogRead(Apin_A); 
   int val2 = analogRead(Apin_B); 
if((val1-val2)>gist/2){
  digitalWrite(pin_A,0);
digitalWrite(pin_B,1);
  }
else if((val2-val1)>gist/2){
   digitalWrite(pin_A,1);
digitalWrite(pin_B,0);
  }
   else {
    digitalWrite(pin_A,1);
digitalWrite(pin_B,1);
    }
}
