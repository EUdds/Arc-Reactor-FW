// Basic demo for accelerometer readings from Adafruit MPU6050

#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

#define MPU_ADDR 0x68

void setup(void) {
  Wire.begin(5,6,100000);
  Serial.begin(9600);
  while (!Serial)
    delay(100); // will pause Zero, Leonardo, etc until serial console opens
}

void loop() {
  while(1) {
    Wire.beginTransmission(MPU_ADDR);
    Wire.write(0xFA);
    Wire.write(0xCE);
    Wire.endTransmission(true);
    Serial.println("Sent message");
    delay(1000);
  }
}
