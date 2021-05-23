#include <Arduino.h>
#include <Arduino_LSM9DS1.h>

void setup() {
	Serial.begin(9600);
  	while (!Serial);
  	Serial.println("Started");

  	if (!IMU.begin()) {
    	Serial.println("Failed to initialize IMU!");
    	while (1);
  	}

  	Serial.print("Accelerometer sample rate = ");
 	Serial.print(IMU.accelerationSampleRate());
  	Serial.println(" Hz");
  	Serial.println();
  	Serial.println("Acceleration in G's");
  	Serial.println("X\tY\tZ");

	Serial.print("Gyroscope sample rate = ");
  	Serial.print(IMU.gyroscopeSampleRate());
  	Serial.println(" Hz");
  	Serial.println();
  	Serial.println("Gyroscope in degrees/second");
  	Serial.println("X\tY\tZ");

	Serial.print("Magnetic field sample rate = ");
  	Serial.print(IMU.magneticFieldSampleRate());
  	Serial.println(" uT");
  	Serial.println();
  	Serial.println("Magnetic Field in uT");
  	Serial.println("X\tY\tZ");
}

void loop() {
	float xa, ya, za;
	float xg, yg, zg;
	float xm, ym, zm;

  	if (IMU.accelerationAvailable()) {
    	IMU.readAcceleration(xa, ya, za);
	}

	
  	if (IMU.gyroscopeAvailable()) {
    	IMU.readGyroscope(xg, yg, zg);
	}

	if (IMU.magneticFieldAvailable()) {
    	IMU.readMagneticField(xm, ym, zm);
	}
    
	Serial.print(xa);
    Serial.print('\t');
    Serial.print(ya);
    Serial.print('\t');
    Serial.print(za);
	Serial.print('\t');

	Serial.print(xg);
    Serial.print('\t');
    Serial.print(yg);
    Serial.print('\t');
    Serial.print(zg);
	Serial.print('\t');

	Serial.print(xm);
    Serial.print('\t');
    Serial.print(ym);
    Serial.print('\t');
    Serial.println(zm);

	delay(100);
}