#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

#define SERVOMIN  150 // This is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  600 // This is the 'maximum' pulse length count (out of 4096)



Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
  
// my pwm pin
uint8_t ann = 15;
uint8_t index = 13;
uint8_t auri = 11;
uint8_t thumb = 9; 
uint8_t major = 7; 
void setup() {
  
  Serial.begin(9600);
  Serial.println("Servo control test!");

  pwm.begin();

  pwm.setOscillatorFrequency(27000000);
  pwm.setPWMFreq(50);  // Analog servos run at ~50 Hz updates

  delay(10);

 

}



void loop() {
  P();
 //if (Serial.available())
  //Serial
  
 //pwm.setPWM(15, 20, 200); //open
 //for (int i=200; i<600; i++) {
   // pwm.setPWM(15, 20, i);
    //Serial.println(i);
  //} 
  // pwm.setPWM(15, 20, 475); //closed
}

void S(){
  pwm.setPWM(ann, 20, 475); 
  pwm.setPWM(index, 20, 100); 
  pwm.setPWM(major, 20, 100); 
  pwm.setPWM(auri, 20, 475); 
  pwm.setPWM(thumb, 20, 475);
  
}

void R(){
  pwm.setPWM(ann, 20, 475); 
  pwm.setPWM(index, 20, 475); 
  pwm.setPWM(major, 20, 475); 
  pwm.setPWM(auri, 20, 475); 
  pwm.setPWM(thumb, 20, 475);
  
}


void P(){
  pwm.setPWM(ann, 20, 100);
  pwm.setPWM(index, 20, 100); 
  pwm.setPWM(major, 20, 100); 
  pwm.setPWM(auri, 20, 100); 
  pwm.setPWM(thumb, 20, 100);
  
}
