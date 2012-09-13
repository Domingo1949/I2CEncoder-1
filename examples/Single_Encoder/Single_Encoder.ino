/**
 *
 */

#include <Servo.h>
#include <Wire.h>
#include <I2CEncoder.h>

// Create an I2CEncoder for use
I2CEncoder encoder;

void setup() {
  Wire.begin(); // join i2c bus (address optional for master)
  Serial.begin(9600);
  
  // Initialize the encoder for a 269 motor
  encoder.init(MOTOR_269_ROTATIONS, MOTOR_269_TIME_DELTA);
}

void loop() {
  Serial.print(encoder1.getSpeed()); // Get how fast it's rotating
  Serial.print(", ");
  Serial.println(encoder1.getPosition()); // Get it's current position
}
