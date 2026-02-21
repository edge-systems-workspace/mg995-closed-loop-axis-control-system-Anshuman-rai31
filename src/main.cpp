/**
 * @file main.cpp
 * @brief Simple Arduino sketch to sweep a servo back and forth for a closed-loop axis control demo.
 *
 * This sketch attaches a servo (e.g., MG995) to pin 9 and sweeps it from 0 to 180 degrees
 * and back, pausing 500 ms between steps. It's a minimal example used in the MG995
 * closed-loop axis control project.
 *
 * @author Anshuman Rai
 * @date 2026-02-21
 */

#include <Arduino.h>
#include "Servo.h" // Use local stub for static analysis or the real library when available
Servo myServo;
#define SERVO_PIN 9
void setup() {
    myServo.attach(SERVO_PIN);
    Serial.begin(9600);
}

void loop() {
    /*myServo.write(0);
    delay(1000);
    myServo.write(90);
    delay(1000);
    myServo.write(120);
    delay(1000);
    myServo.write(180);
    delay(1000);*/


    for(int i = 0; i <= 180; i++) {
        myServo.write(i);
        delay(500);
    }
    for(int i = 180; i >= 0; i--) {
        myServo.write(i);
        delay(500);
    }
}