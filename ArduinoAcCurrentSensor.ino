/*****************************************************
 @copyright   Copyright (c) 2020 Charles Bitter (https://github.com/cbitter78/)
 @licence     The MIT License (MIT)
****************************************************/

#include "yhdc.h"

void setup()
{
 Serial.begin(115200);
 pinMode(13, OUTPUT);
} 

void loop(){
 float ACCurrentValue = ACCurrentValue = readACCurrentValue(A1);
 Serial.println(ACCurrentValue);
 digitalWrite(13, HIGH);
 delay(500);
 digitalWrite(13, LOW);
 delay(500);
}
