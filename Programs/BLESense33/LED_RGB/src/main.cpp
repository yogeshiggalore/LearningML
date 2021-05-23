#include <Arduino.h>

#define LED_RED_PIN		22
#define LED_GREEN_PIN	23
#define LED_BLUE_PIN	24

void setup() {
	pinMode(LED_RED_PIN, OUTPUT);
	pinMode(LED_GREEN_PIN, OUTPUT);
	pinMode(LED_BLUE_PIN, OUTPUT);

	digitalWrite(LED_RED_PIN,HIGH);
	digitalWrite(LED_GREEN_PIN,HIGH);
	digitalWrite(LED_BLUE_PIN,HIGH);
}

void loop() {
	digitalWrite(LED_RED_PIN,LOW);
	delay(100);
	digitalWrite(LED_RED_PIN,HIGH);
	delay(100);
	digitalWrite(LED_BLUE_PIN,LOW);
	delay(100);
	digitalWrite(LED_BLUE_PIN,HIGH);
	delay(100);
	digitalWrite(LED_GREEN_PIN,LOW);
	delay(100);
	digitalWrite(LED_GREEN_PIN,HIGH);
	delay(100);
}