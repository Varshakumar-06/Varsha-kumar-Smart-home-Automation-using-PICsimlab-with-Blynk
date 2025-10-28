#include "ldr.h"
#include "Arduino.h"
#include "main.h"

void init_ldr(void)
{
   pinMode(GARDEN_LIGHT, OUTPUT);
   
}
unsigned int Light_intensity , duty;

void brightness_control(void)
{
  
  Light_intensity = analogRead(LDR_SENSOR);
  duty = 255 - (Light_intensity / 4);

analogWrite(GARDEN_LIGHT, duty);

delay(100);
}
