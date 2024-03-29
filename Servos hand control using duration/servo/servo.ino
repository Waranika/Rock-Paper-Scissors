#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

// called this way, it uses the default address 0x40
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
// you can also call it with a different address you want
//Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x41);
// you can also call it with a different address and I2C interface
//Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x40, Wire);

// Depending on your servo make, the pulse width min and max may vary, you 
// want these to be as small/large as possible without hitting the hard stop
// for max range. You'll have to tweak them as necessary to match the servos you
// have!
#define SERVOMIN  140 // This is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  600 // This is the 'maximum' pulse length count (out of 4096)
#define USMIN  600 // This is the rounded 'minimum' microsecond length based on the minimum pulse of 140
#define USMAX  2400 // This is the rounded 'maximum' microsecond length based on the maximum pulse of 600
#define SERVO_FREQ 50 // Analog servos run at ~50 Hz updates
char c;
// our servo # counter
uint8_t servonum = 0;

long int myTime1;
long int myTime2;
void setup() {
  Serial.begin(9600);
  //Serial.println("Type input");

  pwm.begin();
  

  pwm.setOscillatorFrequency(27000000);
  pwm.setPWMFreq(SERVO_FREQ);  // Analog servos run at ~50 Hz updates

  delay(10);
}

// You can use this function if you'd like to set the pulse length in seconds
// e.g. setServoPulse(0, 0.001) is a ~1 millisecond pulse width. It's not precise!
void setServoPulse(uint8_t n, double pulse) {
  double pulselength;
  
  pulselength = 1000000;   // 1,000,000 us per second
  pulselength /= SERVO_FREQ;   // Analog servos run at ~60 Hz updates
  //Serial.print(pulselength); Serial.println(" us per period"); 
  pulselength /= 4096;  // 12 bits of resolution
  //Serial.print(pulselength); Serial.println(" us per bit"); 
  pulse *= 1000000;  // convert input seconds to us
  pulse /= pulselength;
  //Serial.println(pulse);
  pwm.setPWM(n, 0, pulse);
}

void loop() {

 // myTime = millis();

  while (Serial.available()) {
    //delay(2);  //delay to allow byte to arrive in input buffer
    c = Serial.read();
    //Serial.print(c);
    
  
  }
  // index = 11; major = 7; annulaire = 9; auriculaire = 13; thumbs 15;  
  
  switch(c){
    case 'S':
      //Close the whole hand - Rock 
      myTime1 = millis();
      setServoPulse(13, 0.0014);
      setServoPulse(15, 0.0014);
      setServoPulse(7, 0.0014);
      setServoPulse(9, 0.0014);
      setServoPulse(11, 0.0014);
      myTime2 = millis();
      //Serial.println(myTime2-myTime1);
      break;
    case 'P':
      // Scissors
      myTime1 = millis();
      setServoPulse(11, 0.0005);
      setServoPulse(9, 0.0014);
      setServoPulse(7, 0.0005);
      setServoPulse(13, 0.0014);
      setServoPulse(15, 0.0014);
      myTime2 = millis();
      //Serial.println(myTime2-myTime1);
      break;
    
    case 'R': 
      //Open the hand - paper
      myTime1 = millis();
      setServoPulse(13, 0.0005);
      setServoPulse(15, 0.0005);
      setServoPulse(7, 0.0005);
      setServoPulse(9, 0.0005);
      setServoPulse(11, 0.0005);
      myTime2 = millis();
      //Serial.println(myTime2-myTime1);
      break;

  }
  

  

  
}
