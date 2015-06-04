
#include "BLcontroller.h"         // Motor Movement Functions and Timer Config


int pos = 0;
int power = 180;

void setup()
{
  
  // Init BL Controller
  initBlController();
  // Init Sinus Arrays
  initMotorStuff();
  
  // switch off PWM Power
  motorPowerOff();

}


void loop() 
{  
  for(pos = 0; pos < 256*7; pos++) {
    MoveMotorPosSpeed(1, pos++, power);
    delay(100);
  }
  delay(100000);
}
