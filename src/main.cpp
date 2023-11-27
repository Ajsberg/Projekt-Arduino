#include <Arduino.h>
#define RED 8
#define YELLOW 9
#define GREEN 10
#define Volt A5


int Voltarz_bit = 0;
float Voltarz = 0;
// put function declarations here:


void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
  Serial.begin(9600);
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Voltarz_bit = analogRead(Volt);
  //Voltarz = (Voltarz_bit * 5.0) / 1024.0;
  //Serial.println(Voltarz);
  digitalWrite(RED, HIGH);
  delay(1000);
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(1000);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, HIGH);
  delay(1000);
  digitalWrite(GREEN, LOW);

  
}

// put function definitions here:
