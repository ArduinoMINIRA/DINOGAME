/*
 * ArduinoMINIRA
 * Automatiic Dino Bot Game With Arduino
 * 
   
   Check full Video On Our Youtube Channel
   https://www.youtube.com/@ArduinoMINIRA
   
 */

#include <Servo.h>

Servo servo_9;

void setup(){
  servo_9.attach(9);
}

void loop(){
  if (analogRead(A0) < 530) {
    servo_9.write(80);
    delay(100);
    servo_9.write(36);
    delay(1);

  } else {
    servo_9.write(36);
    delay(50);

  }

}